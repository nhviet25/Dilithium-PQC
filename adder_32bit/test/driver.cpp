#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->a_i = rand()%51-20;
  dut->b_i = rand()%51-20;
  dut->c_i = rand()%2;
}
