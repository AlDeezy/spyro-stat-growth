// #include <common.h> // I really don't want to add this to my PATH
#include "../../../include/common.h" // Ugly hack, please ignore
#include "data.c"

int last_gems_coll = 69420;
int last_level_id = 69420;
int last_eggs_coll = 69420;
unsigned short sparx_range = 1434;
int last_sparx_hp = 0;

int iMin(int a, int b) {
  if (a <= b) {
    return a;
  }
  return b;
}

int Scale_To(int initial, int final, int coll_curr, int coll_max) {
  return initial + ((final - initial) * iMin(coll_curr, coll_max) / coll_max);
}

// Very creative naming, I know

// Proving to cause the game to be unstable in Lofty Castle.
// Calling this every frame is adding just enough lag to crash the game?

void Scale_Movement() {
  charge_speed_value = Scale_To(420, 720, gems_coll, 14000);
  // Scale_To(410, 690, gems_coll, 14000) + dragons_coll;     // 576
  charge_jump_speed = Scale_To(3840, 7800, gems_coll, 6000);   // 7680
  charge_jump_impulse = Scale_To(2550, 3520, gems_coll, 7000); // 3520
  jump_impulse = Scale_To(1000, 5400, gems_coll, 10000);
  // Scale_To(1000, 4750, gems_coll, 10000) + eggs_coll * 50; // 3520
  jump_charge_impulse = Scale_To(4032, 8064, gems_coll, 7000); // 8064
  last_level_id = level_id;
  last_gems_coll = gems_coll;
}

void Scale_Sparx() {
  sparx_range = Scale_To(600, 4302, eggs_coll, 12); // 1434
  Assign_Sparx_Range(level_id, sparx_range);
  last_eggs_coll = eggs_coll;
}

void Do_Collect_Hook() {
  Scale_Movement();
  if (last_eggs_coll == eggs_coll)
    return;
  Scale_Sparx();
}

void Do_Level_Init_Hook() {
  Scale_Movement();
  Scale_Sparx();
}

void Do_Tick_Hook() {
  if (last_sparx_hp != sparx_hp) {
    sparx_range = sparx_range * sparx_hp / 3;
    Scale_Sparx();
    last_sparx_hp = sparx_hp;
  }
}