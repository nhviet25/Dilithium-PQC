#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->start_ntt = (sim_unit > 10) && (sim_unit < 12);
}
