#ifndef CURSOVAYA_COMPUTERBUILDER_H
#define CURSOVAYA_COMPUTERBUILDER_H

#include <iostream>
#include <string>

#include "Computer.h"

using namespace std;


class ComputerBuilder {
    string CPU;
    string motherBoard;
    string videoCard;
    string RAM;
    string HDD;
    // computer box
    string box;
    string audioBoard;
    string drive;

public:
    void buildCPU(string CPU);
    void buildMontherBoard(string motherBoard);
    void buildVideoCard(string VideoCard);
    void buildRAM(string RAM);
    void buildHDD(string HDD);
    void buildBox(string box);
    void buildAudioBoard(string audioBoard);
    void buildDrive(string drive);
    Computer &build();
};


#endif //CURSOVAYA_COMPUTERBUILDER_H
