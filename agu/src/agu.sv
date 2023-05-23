module agu (
  input logic clk_i,
  input logic start_ntt,
 
  output logic [7:0] twiddle_addr,
  output logic ntt_done,

  output logic wren_o,
  output logic [7:0] ntt_addr_rd1_o,
  output logic [7:0] ntt_addr_rd2_o,
  
  output logic [7:0] intt_addr_rd1_o,
  output logic [7:0] intt_addr_rd2_o
);

typedef enum logic {
  IDLE,
  COUNTER
} state_e;

logic [7:0] i;
logic done;
state_e current_state, next_state;

initial begin
  current_state = IDLE;
  i = 8'b0;
  done = 0;
end

always_ff @(posedge clk_i)
begin
    case (current_state)
        IDLE:
            if (start_ntt)
            begin
                next_state <= COUNTER;
                i <= 8'b0000000;
                done <= 1'b0;
            end
        COUNTER:
            begin
                if (i == 8'b01111111)
                begin
                    next_state <= IDLE;
                    done <= 1'b1;
                end
                else
                begin
                    next_state <= COUNTER;
                    i <= i + 1;
                    done <= 1'b0;
                end
            end
        default:
            next_state <= IDLE;
    endcase
end

always_ff @(posedge clk_i) begin
  current_state <= next_state;
end

assign wren_o = ~done; 
assign ntt_addr_rd1_o = i<<1;
assign ntt_addr_rd2_o = (i<<1)+1;
assign intt_addr_rd1_o = i;
assign intt_addr_rd2_o = i + 128;
assign twiddle_addr = i;
assign ntt_done = done;

endmodule: agu 
