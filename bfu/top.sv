module top(
  input logic [23:0] a_i, b_i, w_i,
/* verilator lint_off UNUSED */  
  input logic CT_i, clk_i,
  output logic [23:0] even_o, odd_o
);

bfu dut (.*);

endmodule: top
