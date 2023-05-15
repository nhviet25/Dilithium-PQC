module top(
  input logic [23:0] x_i, y_i,
/* verilator lint_off UNUSED */
  input logic clk_i,
/* verilator lint_on UNUSED */
  output logic [23:0] z_o
);

modular_sub dut(.*);
/*
always @(posedge clk_i) begin
  assert (z_o == ((x_i-y_i)%8380417));
end
*/
endmodule: top
