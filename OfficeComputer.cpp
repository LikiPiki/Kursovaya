//
// Created by Сергей Баталев on 09/04/2019.
//

#include "OfficeComputer.h"
#include "ComputerBuilder.h"

Computer &OfficeComputer::CreateComputer() {
    auto *cb = new ComputerBuilder();
    cb->buildBox("Office simple box");
    cb->buildCPU("Intel Core I3");
    cb->buildDrive("CD/DVD");
    cb->buildMontherBoard("Gigabyte");
    cb->buildHDD("Seageate 512MB");
    cb->buildRAM("Samsung 2GB");
    return cb->build();
}