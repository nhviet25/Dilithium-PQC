module top(
  input logic [23:0] a_i, b_i,
  input logic c_i, clk_i,
  output logic [23:0] s_o,
  output logic c_o 
);

adder_32bit #(.WIDTH(24)) dut (.*);

always @(posedge clk_i) begin
  assert ({c_o, s_o} == a_i + b_i + {23'b0, c_i});
end

endmodule: top
