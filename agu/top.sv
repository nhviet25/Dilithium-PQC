module top(
  input logic clk_i,
  input logic start_ntt,

  output logic [7:0] twiddle_addr,
  output logic ntt_done,

  output logic wren_o,
  output logic [7:0] ntt_addr_rd1_o,
  output logic [7:0] ntt_addr_rd2_o,

  output logic [7:0] intt_addr_rd1_o,
  output logic [7:0] intt_addr_rd2_o
);

agu dut (.*);

endmodule: top
