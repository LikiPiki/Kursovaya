#include <iostream>

#include "OfficeComputer.h"

int main() {

    OfficeComputer *comp = new OfficeComputer();
    comp->CreateComputer().writeToFile("hello.json");

    return 0;
}