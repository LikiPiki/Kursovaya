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
    void buildRAM(string RAM);
    void buildMonterBoard(string MotherBoard);
    void buildVideoCard(string VideoCard)
};


#endif //CURSOVAYA_COMPUTERBUILDER_H
