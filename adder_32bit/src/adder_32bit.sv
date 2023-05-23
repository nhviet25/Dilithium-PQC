module adder_32bit #(
  parameter WIDTH = 32
)
(
  input logic [WIDTH - 1:0] a_i, b_i,
  input logic c_i,

  output logic [WIDTH - 1:0] s_o,
  output logic c_o
);
/* verilator lint_off WIDTH */
assign {c_o, s_o} = a_i + b_i + c_i;
/* verilator lint_on WIDTH */
endmodule: adder_32bit
