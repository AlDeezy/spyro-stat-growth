#include "common.h"

int last_gems_total = 0;

void Do_Stuff() {
  if (last_gems_total != gems_total) {
    charge_speed_value = 420 + gems_total / 35;               // 576
    charge_jump_speed = 3840 + gems_total / 2;                // 7680
    charge_jump_impulse = 2600 + (gems_total / 7);            // 3520
    jump_impulse = 1000 + gems_total / 2;                     // 3520
    jump_charge_impulse = 4048 + (4048 * gems_total / 14000); // 8064
  }
  last_gems_total = gems_total;
}