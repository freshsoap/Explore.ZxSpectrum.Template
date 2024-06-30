# Explore.ZxSpectrum.Template

Let's setup a 48K ZX Spectrum dev environment in GitHub Codespaces - with DeZog 🧮

## Why bother?

Let's make this

- Easy to win

## Open the Dev Environment in GitHub Codespaces - right now

TL:DR

1. Make a repo based on this repo template
2. Open the codespace
3. [Setup the SjASMPlus to compile](#setup-sjasmplus-to-run-in-the-workspace)
4. `Ctrl-Shift-D` to debug
   - The ZSim emulator should open and show a little green square
6. `Ctrl-Shift-B` to build
7. Run the unit tests
   - There should be the 2 unit tests for the square showing

### Setup SjASMPlus to run in the workspace

Currently the codespace (i.e. linux docker) setup of the SjASMPlus compiler is a manual task.  
If you pull this repo to a Windows desktop, it should just run because the Windows exe is already in the tools folder.

1. Open the bash terminal and run these step by step:
  ```bash
  unzip tools/sjasmplus.1.18.3.zip -d tools

  cd tools/sjasmplus-1.18.3
  make clean
  make
  sudo make install
  ```
2. Delete the `tools/sjasmplus-1.18.3` afterwards

### Run

- Build with `Ctrl-Shipt-B`
- Debug with `Ctrl-Shift-D` or `F5`
- Currently you need to build and _then_ run the unit tests

## TODO: 

Stuff I need to do to make this repo 'Just-Work(tm)'

1. Document the 'open this in GitHub Codespaces' better - inc screenshots
2. Make a 'SjASMPlus Setup' task
3. Find out why 'Run unit tests' doesnt automatically build

## Links

Maziac-Dezog

- https://github.com/maziac/DeZog
- https://github.com/maziac/z80-sample-program
- https://github.com/maziac/DeZog/blob/main/documentation/Usage.md
- https://github.com/maziac/DeZog/blob/main/documentation/UnitTests.md
- http://www.breakintoprogram.co.uk/computers/zx-spectrum/assembly-language/z80-development-toolchain

SjASMPlus - make sure you get the right one!

- https://github.com/z00m128/sjasmplus
- https://z00m128.github.io/sjasmplus/documentation.html

Awesome Z80 tutorial links

- https://bobs8bb.wordpress.com/
- https://chuntey.wordpress.com/tag/tutorial/
- https://sol.gfxile.net/z80/index.html
- https://pobtastic.github.io/hobbit/

## Credits

- [The Maziac developer](https://marketplace.visualstudio.com/publishers/maziac) for Dezog
- [z00m](https://z00m.speccy.cz) for SjASMPlus
- [The folks at Microsoft for VS Code](https://code.visualstudio.com/)
- [The folks at GitHub for Github and GitHub Codespaces](https://github.com/features/codespaces)
- And everyone else who helped my make this work-in-progress possible

If you find this repo helpful, go be nice to someone. Pay it forward 🙂

_Cheers!_
