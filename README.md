# GB_emu

This is a minimalistic gameboy CPU emulator written in C++ designed to be embeded in other projects that need to interpret gameboy ROMS, for example [MooJelly](https://github.com/smellymoo/moojelly) uses it to extract computed level data by emulating level loading then extracting the data from the GB ram.

So the project emphasis is on simplicity, correct register output and speed of execution not cycle accuracy or features (like interupts).

Tested against the gblargg test ROM and the gbit instruction tester.
