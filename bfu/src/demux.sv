module demux #(
  parameter WIDTH = 24
)
(
  input logic [WIDTH-1:0] data_i,
  input logic sel_i,
  output logic [WIDTH-1:0] data0_o, data1_o
);

always_comb begin
  if (sel_i) begin
    data0_o = 0;
    data1_o = data_i;
  end else begin 
    data1_o = 0;
    data0_o = data_i;
  end
end

endmodule: demux
