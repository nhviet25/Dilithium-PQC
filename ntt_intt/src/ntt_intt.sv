module ntt_intt(
  input logic clk_i, start, ntt,
  output logic ntt_done,
  output logic [23:0] even_debug_o, odd_debug_o
);

logic [23:0] tw, in1_bfu, in2_bfu, out1_bfu, out2_bfu;
logic [23:0] ntt_out1, ntt_out2, intt_out1, intt_out2;
logic [7:0] ntt_addr1, ntt_addr2, intt_addr1, intt_addr2, tw_addr;
logic intt_wren, ntt_wren, wren;

agu agu_ins (
  .clk_i(clk_i),
  .start_ntt(start),
  
  .ntt_done(ntt_done),
  .twiddle_addr(tw_addr),
  .ntt_addr_rd1_o(ntt_addr1),
  .ntt_addr_rd2_o(ntt_addr2),
  .wren_o(wren),
  
  .intt_addr_rd1_o(intt_addr1),
  .intt_addr_rd2_o(intt_addr2)
);

and(intt_wren, wren, ntt);
and(ntt_wren, wren, ~ntt);

dual_port_RAM bram_NTT (
  .clk_i(clk_i),
  .wren_i(ntt_wren),
  .addr1_i(ntt_addr1),
  .data_wr1_i(out1_bfu),
 
  .addr2_i(ntt_addr2),
  .data_wr2_i(out2_bfu),
  
  .data1_o(ntt_out1),
  .data2_o(ntt_out2)
);

dual_port_RAM bram_INTT (
  .clk_i(clk_i),
  .wren_i(intt_wren),
  .addr1_i(intt_addr1),
  .data_wr1_i(out1_bfu),
 
  .addr2_i(intt_addr2),
  .data_wr2_i(out2_bfu),
  
  .data1_o(intt_out1),
  .data2_o(intt_out2)
);

mux_32bit sel_in1_bfu (
  .data0_i(ntt_out1),
  .data1_i(intt_out1),
  .sel_i(~ntt),
  .data_o(in1_bfu)
);

mux_32bit sel_in2_bfu (
  .data0_i(ntt_out2),
  .data1_i(intt_out2),
  .sel_i(~ntt),
  .data_o(in2_bfu)
);

bfu bfu_ins (
  .a_i(in1_bfu),
  .b_i(in2_bfu),
  .w_i(tw),
  .CT_i(ntt),

  .even_o(out1_bfu),
  .odd_o(out2_bfu)
);

single_port_ROM twiddle_fac (
  .addr_i(tw_addr),
  .clk_i(clk_i),

  .data_o(tw)
);

assign even_debug_o = out1_bfu;
assign odd_debug_o = out2_bfu;
endmodule: ntt_intt
