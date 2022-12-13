#include "../../../include/common.h"

// THIS IS SO UGLY PLEASE DO NOT CANCEL ME ON TWITTER
//
//
// AGAIN

unsigned short *sparx_gem_ranges[] = {
    &sparx_range_aw,         &sparx_range_sh,         &sparx_range_dh_ground,
    &sparx_range_dh_spawn,   &sparx_range_ts_ground,  &sparx_range_ts_spawn,
    &sparx_range_toa_ground, &sparx_range_toa_spawn,

    &sparx_range_pk_ground,  &sparx_range_pk_spawn,   &sparx_range_dc_ground,
    &sparx_range_dc_spawn,   &sparx_range_ct_ground,  &sparx_range_ct_spawn,
    &sparx_range_ic,         &sparx_range_doc_ground, &sparx_range_doc_spawn,

    &sparx_range_mc,         &sparx_range_ar,         &sparx_range_hc,
    &sparx_range_wp,         &sparx_range_blo,

    &sparx_range_bm,         &sparx_range_tv,         &sparx_range_mb,
    &sparx_range_tt,         &sparx_range_met,

    &sparx_range_dw,         &sparx_range_dp,         &sparx_range_lc_ground,
    &sparx_range_lc_spawn,   &sparx_range_ht,         &sparx_range_jac,

    &sparx_range_gg_ground,  &sparx_range_gg_spawn,   &sparx_range_gc,
    &sparx_range_th_ground,  &sparx_range_th_spawn,   &sparx_range_gna_ground,
    &sparx_range_gna_spawn,

    &sparx_range_gl_ground,  &sparx_range_gl_spawn};

void Assign_Sparx_Range(int lvl, unsigned short value) {
  switch (lvl) {
  case ARTISANS:
    *sparx_gem_ranges[0] = value;
    break;
  case STONE_HILL:
    *sparx_gem_ranges[1] = value;
    break;
  case DARK_HOLLOW:
    *sparx_gem_ranges[2] = value;
    *sparx_gem_ranges[3] = value;
    break;
  case TOWN_SQUARE:
    *sparx_gem_ranges[4] = value;
    *sparx_gem_ranges[5] = value;
    break;
  case TOASTY:
    *sparx_gem_ranges[6] = value;
    *sparx_gem_ranges[7] = value;
    break;
  case SUNNY_FLIGHT:
    break;

  case PEACE_KEEPERS:
    *sparx_gem_ranges[8] = value;
    *sparx_gem_ranges[9] = value;
    break;
  case DRY_CANYON:
    *sparx_gem_ranges[10] = value;
    *sparx_gem_ranges[11] = value;
    break;
  case CLIFF_TOWN:
    *sparx_gem_ranges[12] = value;
    *sparx_gem_ranges[13] = value;
    break;
  case ICE_CAVERN:
    *sparx_gem_ranges[14] = value;
    break;
  case SHEMP:
    *sparx_gem_ranges[15] = value;
    *sparx_gem_ranges[16] = value;
    break;
  case NIGHT_FLIGHT:
    break;

  case MAGIC_CRAFTERS:
    *sparx_gem_ranges[17] = value;
    break;
  case ALPINE_RIDGE:
    *sparx_gem_ranges[18] = value;
    break;
  case HIGH_CAVES:
    *sparx_gem_ranges[19] = value;
    break;
  case WIZARD_PEAK:
    *sparx_gem_ranges[20] = value;
    break;
  case BLOWHARD:
    *sparx_gem_ranges[21] = value;
    break;
  case CRYSTAL_FLIGHT:
    break;

  case BEAST_MAKERS:
    *sparx_gem_ranges[22] = value;
    break;
  case TERRACE_VILLAGE:
    *sparx_gem_ranges[23] = value;
    break;
  case MISTY_BOG:
    *sparx_gem_ranges[24] = value;
    break;
  case TREE_TOPS:
    *sparx_gem_ranges[25] = value;
    break;
  case METALHEAD:
    *sparx_gem_ranges[26] = value;
    break;
  case WILD_FLIGHT:
    break;

  case DREAM_WEAVERS:
    *sparx_gem_ranges[27] = value;
    break;
  case DARK_PASSAGE:
    *sparx_gem_ranges[28] = value;
    break;

  case LOFTY_CASTLE:
    *sparx_gem_ranges[29] = value;
    *sparx_gem_ranges[30] = value;
    break;
  case HAUNTED_TOWERS:
    *sparx_gem_ranges[31] = value;
    break;
  case JACQUES:
    *sparx_gem_ranges[32] = value;
    break;
  case ICY_FLIGHT:
    break;
  case GNORC_GNEXUS:
    *sparx_gem_ranges[33] = value;
    *sparx_gem_ranges[34] = value;
    break;
  case GNORC_COVE:
    *sparx_gem_ranges[35] = value;
    break;
  case TWILIGHT_HARBOR:
    *sparx_gem_ranges[36] = value;
    *sparx_gem_ranges[37] = value;
    break;
  case GNASTY_GNORC:
    *sparx_gem_ranges[38] = value;
    *sparx_gem_ranges[39] = value;
    break;
  case GNASTYS_LOOT:
    *sparx_gem_ranges[40] = value;
    *sparx_gem_ranges[41] = value;
    break;
  }
}