#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->addr_i = rand()%256;
}
