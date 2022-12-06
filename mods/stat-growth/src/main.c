#include "common.h"

void Do_Stuff() {
  charge_speed_value = 420 + gems_total / 35;               // 576
  charge_jump_speed = 3840 + gems_total / 2;                // 7680
  charge_jump_impulse = 2600 + (gems_total / 7);            // 3520
  jump_impulse = 1000 + gems_total / 2;                     // 3520
  jump_charge_impulse = 4048 + (4048 * gems_total / 14000); // 8064
}