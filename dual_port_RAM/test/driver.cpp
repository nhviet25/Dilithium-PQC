#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->wren_i = (sim_unit > 4) && (rand()%30 != 0);
  
  dut->data_wr1_i = rand();
  dut->addr1_i = rand()%256;
  
  dut->data_wr2_i = rand();
  dut->addr2_i = rand()%256;
}
