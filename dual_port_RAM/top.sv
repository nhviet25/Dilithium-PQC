module top(
  input logic [23:0] data_wr1_i, data_wr2_i,
  input logic [7:0] addr1_i,
  input logic [7:0] addr2_i,
  input logic wren_i,
  input logic clk_i,
  
  output logic [23:0] data1_o, data2_o
);

dual_port_RAM dut (.*);

endmodule: top
