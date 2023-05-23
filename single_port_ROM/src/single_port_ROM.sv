module single_port_ROM (
  input logic [7:0] addr_i,
  input logic clk_i,
  output logic [23:0] data_o
);

logic [23:0] rom [2**8-1:0];

initial $readmemh("twiddle.txt", rom);
always_ff @(posedge clk_i) begin
  data_o <= rom[addr_i];
end
endmodule: single_port_ROM
