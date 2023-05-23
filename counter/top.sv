module top(
  input logic clk_i, clear_i,
  output logic [6:0] data_o,
  output logic cdata_o
);
  counter dut (.*);
endmodule: top
