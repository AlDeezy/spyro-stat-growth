#ifndef COMMON_H
#define COMMON_H

enum LEVEL_IDS {
  ARTISANS=0x0a,
  STONE_HILL=0x0b,
  DARK_HOLLOW=0x0c,
  TOWN_SQUARE=0x0d,
  TOASTY=0x0e,
  SUNNY_FLIGHT=0x0f,
  PEACE_KEEPERS=0x14,
  DRY_CANYON=0x15,
  CLIFF_TOWN=0x16,
  ICE_CAVERN=0x17,
  SHEMP=0x18,
  NIGHT_FLIGHT=0x19,
  MAGIC_CRAFTERS=0x1e,
  ALPINE_RIDGE=0x1f,
  HIGH_CAVES=0x20,
  WIZARD_PEAK=0x21,
  BLOWHARD=0x22,
  CRYSTAL_FLIGHT=0x23,
  BEAST_MAKERS=0x28,
  TERRACE_VILLAGE=0x29,
  MISTY_BOG=0x2a,
  TREE_TOPS=0x2b,
  METALHEAD=0x2c,
  WILD_FLIGHT=0x2d,
  DREAM_WEAVERS=0x32,
  DARK_PASSAGE=0x33,
  LOFTY_CASTLE=0x34,
  HAUNTED_TOWERS=0x35,
  JACQUES=0x36,
  ICY_FLIGHT=0x37,
  GNORC_GNEXUS=0x3c,
  GNORC_COVE=0x3d,
  TWILIGHT_HARBOR=0x3e,
  GNASTY_GNORC=0x3f,
  GNASTYS_LOOT=0x40
};
extern char can_fly;
extern short charge_jump_impulse;
extern short charge_jump_speed;
extern short charge_speed_value;
extern unsigned short current_button;
extern int egg_coll;
extern unsigned short gems_coll;
extern unsigned short gem_level_totals[35];
extern unsigned short held_button;
extern short jump_charge_impulse;
extern short jump_impulse;
extern int level_id;
extern int level_id_2;
extern char level_load_state;
extern char sparx_hp;
extern int spyro_x_pos;
extern int spyro_y_pos;
extern int spyro_z_pos;

extern unsigned short sparx_range_aw;
extern unsigned short sparx_range_sh;
extern unsigned short sparx_range_dh_ground;
extern unsigned short sparx_range_dh_spawn;
extern unsigned short sparx_range_ts_ground;
extern unsigned short sparx_range_ts_spawn;
extern unsigned short sparx_range_toa_ground;
extern unsigned short sparx_range_toa_spawn;

extern unsigned short sparx_range_pk_ground;
extern unsigned short sparx_range_pk_spawn;
extern unsigned short sparx_range_dc_ground;
extern unsigned short sparx_range_dc_spawn;
extern unsigned short sparx_range_ct_ground;
extern unsigned short sparx_range_ct_spawn;
extern unsigned short sparx_range_ic;
extern unsigned short sparx_range_doc_ground;
extern unsigned short sparx_range_doc_spawn;

extern unsigned short sparx_range_mc;
extern unsigned short sparx_range_ar;
extern unsigned short sparx_range_hc;
extern unsigned short sparx_range_wp;
extern unsigned short sparx_range_blo;

extern unsigned short sparx_range_bm;
extern unsigned short sparx_range_tv;
extern unsigned short sparx_range_mb;
extern unsigned short sparx_range_tt;
extern unsigned short sparx_range_met;

extern unsigned short sparx_range_dw;
extern unsigned short sparx_range_lc_ground;
extern unsigned short sparx_range_lc_spawn;
extern unsigned short sparx_range_dp;
extern unsigned short sparx_range_ht;
extern unsigned short sparx_range_jac;

extern unsigned short sparx_range_gg_ground;
extern unsigned short sparx_range_gg_spawn;
extern unsigned short sparx_range_gc;
extern unsigned short sparx_range_th_ground;
extern unsigned short sparx_range_th_spawn;
extern unsigned short sparx_range_gna_ground;
extern unsigned short sparx_range_gna_spawn;
extern unsigned short sparx_range_gl_ground;
extern unsigned short sparx_range_gl_spawn;

#endif