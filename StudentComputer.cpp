//
// Created by Сергей Баталев on 15/04/2019.
//

#include "StudentComputer.h"
#include "ComputerBuilder.h"

Computer &StudentComputer::CreateComputer() {
    auto *cb = new ComputerBuilder();
    cb->buildBox("Student BOX");
    cb->buildCPU("Intel Pentium");
    cb->buildDrive("None");
    cb->buildMontherBoard("Asus");
    cb->buildHDD("WD 1Tb");
    cb->buildRAM("Patriot 2Gb");
    cb->buildAudioBoard("None");
    return cb->build();
}
