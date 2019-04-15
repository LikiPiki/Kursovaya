#include <iostream>

#include "OfficeComputer.h"

int main() {

    OfficeComputer *comp = new OfficeComputer();
    comp->CreateComputer().writeToFile("office.json");

    return 0;
}