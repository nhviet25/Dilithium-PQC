module top(
  input logic [23:0] data0_i, data1_i,
  input logic sel_i, clk_i,
  output logic [23:0] data_o
);
mux_32bit #(.WIDTH(24)) dut (.*);
always @(posedge clk_i) begin
  if(sel_i)
    assert (data_o == data1_i);
  if(!sel_i)
    assert (data_o == data0_i);
end

endmodule: top
