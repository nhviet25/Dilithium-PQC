#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->a_i = rand()%8380417;
  dut->b_i = rand()%8380417;
  dut->w_i = 128;
  dut->CT_i = rand()%2;
}
