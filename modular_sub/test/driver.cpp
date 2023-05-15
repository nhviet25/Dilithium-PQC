#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->x_i = rand()%8380417;
  dut->y_i = rand()%8380417;
}
