#include <iostream>

#include "emu.h"

int main()
{
    load_rom("/home/smellymoo/Desktop/cpu_instrs.gb");
    emu_run();
    return 0;
}
