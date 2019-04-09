#ifndef CURSOVAYA_COMPUTERBUILDER_H
#define CURSOVAYA_COMPUTERBUILDER_H

#include <iostream>
#include <string>

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
    void buildMonterBoard(string motherBoard);
    void buildVideoCard(string VideoCard);
    void buildRAM(string RAM);
    void buildHDD(string HDD);
    void buildBox(string box);
    void buildAudioBoard(string audioBoard);
    void buildDrive(string drive);
};


#endif //CURSOVAYA_COMPUTERBUILDER_H
