module counter(
  input logic clk_i, clear_i,
  output logic [6:0] data_o,
  output logic cdata_o
);

logic [6:0] cnt;

always_ff @(posedge clk_i) begin
  if (clear_i)
    cnt <= 0;
  else 
    cnt <= cnt + 1;
end
assign cdata_o = (cnt == 7'b1111111) ? 1 : 0;
assign data_o = cnt;

endmodule: counter
