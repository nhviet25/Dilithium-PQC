#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->ntt = 1;
  dut->start = (sim_unit > 4) && (sim_unit < 6);
}
