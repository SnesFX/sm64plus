# SM64Plus Vita

SM64Plus Vita is a fork of [sm64plus](https://github.com/MorsGames/sm64plus) that attempts to make it playable on the PsVita.

## Small Notice

* THIS PROJECT IS ON HOLD UNTIL I REMAKE THE LAUNCHER FOR IT LMAO. FOR NOW I'M GOING TO WORK ON SM64FX.

## File Locations
Savedata is stored at `ux0:data/SM64Plus/savedata.bin`. `cont.m64` can be put either into the same folder, or into `ux0:app/SMPE64001/` for TAS input.

## Requirements
For running this on the PS Vita you will first need to extract the runtime shader compiler. Follow this [guide](https://samilops2.gitbook.io/vita-troubleshooting-guide/shader-compiler/extract-libshacccg.suprx) for help with that.

## How to build.
1. Install [VitaSDK](https://vitasdk.org)
2. Clone the repo: `git clone https://github.com/SnesFX/sm64plus.git`, which will create a directory `sm64plus` and then **enter** it `cd sm64plus`.
3. Place a Super Mario 64 ROM called `baserom.<VERSION>.z64` into the repository's root directory for asset extraction, where `VERSION` can be `us`, `jp`, or `eu`.
4. Building
    1. Run `./build_deps.sh` to build and install dependencies. This only has to be done once.
    2. Run `make TARGET_VITA=1 vpk` to build the game. Add `-j4` to improve build time.
5. The installable vpk will be located at `build/us_vita/`

## Credits

* [SnesFX](https://twitter.com/snesfx) - Vita Port
* fgsfds -  Initial effort towards porting the original sm64 to the vita.
* sm64decomp team - The original decompilation.
* The sm64-port team - The work towards porting the decomp to other platforms.
* Rinnegatamante - Making the vitaGL library, it made this port alot easier.

# SM64Plus

SM64Plus is a fork of [sm64-port](https://github.com/sm64-port/sm64-port) that focuses on customizability and aims to add features that not only fix some of the issues found in the base game but also enhance the gameplay overall with extra options.

These features include (but not limited to):
- More responsive controls
- Improved camera
- Extended moveset
- The ability to continue the level after getting a star
- Optional extra modes
- 60FPS support via interpolation
- Various bug fixes

## [Download the launcher from MFGG!](https://www.mfgg.net/?act=resdb&param=02&c=2&id=38190)

### [Head to our Discord server for more discussion, troubleshooting, and Linux launcher builds.](http://discord.mors-games.com/)

</br>

This repo does **not** include all the assets necessary for compiling the game. A prior copy of the game is required to extract the assets. Binaries of the game itself will **not** be distributed for this very reason.

You can also build the game manually if you prefer to do so, or if you're not on a Windows platform. To do that, follow the instructions from the [Manual Building](https://github.com/MorsGames/sm64plus/wiki/Manual-Building-Guide) page.

On non-Windows platforms, you can pass the path to the `gfx` directory as the first argument to the executable; by default it's generated at `build/us_pc/gfx`.

[If you have any questions, please check the Wiki and the FAQ first!](https://github.com/MorsGames/sm64plus/wiki/Frequently-Asked-Questions)

[For the launcher's source code, head to its own repository.](https://github.com/MorsGames/sm64plus-launcher)

## Credits:

- **Mors:** Most new things you see here!
- **[Benial](https://twitter.com/Benial17):** Logo design.
- **[Catonator](https://www.catonator.net/):** Launcher music and sound effects.
- **[deanff](https://github.com/deanff):** SM64Plus Remain Mod, which was merged in v3.0 as the more seamless progression option.
- **[sm64-port Team](https://github.com/sm64-port):** The port that was used as a base for this project.
- **[A bunch of clever folks](https://github.com/n64decomp/sm64):** The original decompilation used for the port.
- **Emil:** The original 60FPS patch.
- **Kaze Emanuar:** Providing certain bug fixes, making the original BLJ anywhere cheat, being buff.
- **[sm64gs2pc](https://github.com/sm64gs2pc/sm64gs2pc):** Used to convert the game shark codes into cheats.
- And everyone who sent pull requests or reported issues. :)

Parts of [sm64ex](https://github.com/sm64pc/sm64ex) were also used as a reference for this project.

Special thanks to Superstarxalien, Benial, Triforce141, MrMovie, and Shubs for pre-release testing and feedback.

If I forgot to credit you please reach out to me, so I can fix that!
