module top(
  input logic clk_i, start, ntt,
  output logic ntt_done,
  output logic [23:0] even_debug_o, odd_debug_o
);
ntt_intt dut(.*);
endmodule: top
