[Spyro Stat Growth](https://github.com/AlDeezy/spyro-stat-growth)

## Overview
A mod for Spyro the Dragon 1998, using RedHot's amazing [psx-modding-toolchain](https://github.com/mateusfavarin/psx-modding-toolchain)

Current progressive modifiers:
+ Jump Height (scales with GEMS)
+ Maximum Charge Speed (scales with GEMS)
+ Sparx Range (scales with EGGS)

In addition:
+ Charge Jumps nerfed in earlygame (scales with GEMS)
+ Jump-Charges nerfed in earlygame (scales with GEMS)
+ Sparx's Range is affected by his HP
    + 100% at Gold Sparx
    + 66% at Blue Sparx
    + 33% at Green Sparx

Good luck!

&nbsp;

## Installation
1. [Grab the latest xdelta release here](https://github.com/AlDeezy/spyro-stat-growth/releases)

2. Using an xdelta patcher ([such as kotcrab's patcher](https://kotcrab.github.io/xdelta-wasm/)), using spyro.bin and the spyro_stat-growth.xdelta

3. You will need a cue sheet to run your new stat-growth.bin file. You can either clone the original spyro.cue file and edit it in any text editor yourself, or use a tool [such as duckstation's cue maker](https://www.duckstation.org/cue-maker/)

4. Put your stat-growth.bin and stat-growth.cue files into the same directory and launch like any other ps1 game in your emulator of choice!

## Compiling
1. Clone the repo into your `path/to/psx-modding-toolchain/games/` folder 

2. Place your legally acquired `spyro.bin` into `build/`

3. Open a terminal and navigate to `mods/stat-growth/` and run `MOD.BAT`

4. `Compile`, then `Build Iso`. The output will be placed into `build/`
