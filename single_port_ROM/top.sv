module top(
  input logic [7:0] addr_i,
  input logic clk_i,

  output logic [23:0] data_o
);

single_port_ROM dut (.*);

endmodule: top
