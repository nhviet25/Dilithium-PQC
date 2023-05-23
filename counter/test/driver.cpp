#define MAX_SIM 2000

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->clear_i = (sim_unit < 4) || (rand()%30 == 0);
}
