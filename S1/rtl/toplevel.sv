module toplevel(
    input clk, clk_en, rst,
    input [31:0] inst_in, data_in,
    output mem_we, mem_req,
    output [3:0] mask,
    output [31:0] data_out,
    output [29:0] inst_addr, data_addr
);
    wire ip_jmp;
    wire [29:0] ip_jmp_addr;
    wire [29:0] ip_to_pipe;

    fetch_stage fetch(
        .clk(clk), .rst(rst), .jmp(ip_jmp), .clk_en(clk_en),
        .jmp_in(ip_jmp_addr), .inst_addr(inst_addr), .to_pipe(ip_to_pipe)
    );

    wire reg_we;
    wire [31:0] reg_din;
    wire [4:0] rd_addr;
    wire [11:0] control_word;
    wire [31:0] inst_to_exe;
    wire [31:0] rs1_to_exe;
    wire [31:0] rs2_to_exe;

    decode_stage decode(
        .clk(clk), .clk_en(clk_en), .invalid(ip_jmp),
        .reg_we(reg_we), .inst_in(inst_in), .reg_din(reg_din),
        .ip_in(ip_to_pipe), .rd_addr(rd_addr), .control_word(control_word),
        .inst_out(inst_to_exe), .rs1_out(rs1_to_exe),
        .rs2_out(rs2_to_exe)
    );

    wire [31:0] alu_out;
    wire [31:0] to_mem;
    wire [31:0] inst_to_writeback;
    wire [29:0] ip_to_writeback;
    wire [2:0] write_back_lines;
    wire int_mreq;
    wire int_mwe;
    assign mem_req = int_mreq & clk_en;
    assign mem_we = int_mwe & clk_en;
    assign data_addr = alu_out[31:2];

    exe_stage exe(
        .clk(clk), .forward(reg_we), .clk_en(clk_en),
        .rd_addr(rd_addr), .rs1(rs1_to_exe), .rs2(rs2_to_exe),
        .inst_in(inst_in), .write_in(reg_din),
        .ip_in(ip_to_pipe), .control_word_in(control_word),
        .alu_out(alu_out), .to_mem(to_mem), .inst_out(inst_to_writeback),
        .to_ip(ip_jmp_addr), .ip_buffer_out(ip_to_writeback),
        .write_back_lines(write_back_lines),
        .jmp(ip_jmp), .mem_req(int_mreq), .mem_we(int_mwe)
    );
    
    wire [31:0] mem_to_reg;

    mem_adj madj(
        .from_mem(data_in), .from_reg(to_mem),
        .fn4(inst_to_writeback[15:12]),
        .addr_low(data_addr[1:0]), .to_reg(mem_to_reg),
        .to_mem(data_out), .mask(mask)
    );

    writeback_stage writeback(
        .clk(clk), .clk_en(clk_en),
        .lines_in(write_back_lines), .ip_in(ip_to_writeback),
        .alu_in(alu_out), .from_mem(mem_to_reg),
        .inst_in(inst_to_writeback), .reg_we(reg_we),
        .to_reg(reg_din), .rd_addr(rd_addr)
    );

endmodule : toplevel