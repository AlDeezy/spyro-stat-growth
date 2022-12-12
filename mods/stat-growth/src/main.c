// #include <common.h> // I really don't want to add this to my PATH
#include "../../../include/common.h" // Ugly hack, please ignore
#include "data.c"

int last_gems_total = 69420;
int last_level_id = -1;
int last_egg_count = 0;
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

// Very creativ naming, I know
void Do_Things() {
  if (last_sparx_hp != sparx_hp) {
    sparx_range = sparx_range * sparx_hp / 3;
    Assign_Sparx_range(level_id, sparx_range);
  }
  last_sparx_hp = sparx_hp;
}

void Do_Stuff() {
  if (last_gems_total != gems_coll || last_level_id != level_id ||
      last_egg_count != egg_coll) {
    sparx_range = Scale_To(1100, 5736, egg_coll, 13); // 1434
    Assign_Sparx_range(level_id, sparx_range);
    charge_speed_value = Scale_To(420, 690, gems_coll, 12000);   // 576
    charge_jump_speed = Scale_To(3840, 7900, gems_coll, 6000);   // 7680
    charge_jump_impulse = Scale_To(2600, 4000, gems_coll, 6000); // 3520
    jump_impulse = Scale_To(1000, 5300, gems_coll, 10000);       // 3520
    jump_charge_impulse = Scale_To(4032, 8064, gems_coll, 6000); // 8064
  }
  last_gems_total = gems_coll;
  last_level_id = level_id;
  last_egg_count = egg_coll;
}