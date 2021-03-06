
#ifndef CURSOVAYA_COMPUTER_H
#define CURSOVAYA_COMPUTER_H

#include <iostream>
#include <string>

using namespace std;

class Computer {
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
    void writeToFile(string filename);

    const string &getCPU() const;

    void setCPU(const string &CPU);

    const string &getMotherBoard() const;

    void setMotherBoard(const string &motherBoard);

    const string &getVideoCard() const;

    void setVideoCard(const string &videoCard);

    const string &getRAM() const;

    void setRAM(const string &RAM);

    const string &getHDD() const;

    void setHDD(const string &HDD);

    const string &getBox() const;

    void setBox(const string &box);

    const string &getAudioBoard() const;

    void setAudioBoard(const string &audioBoard);

    const string &getDrive() const;

    void setDrive(const string &drive);

    virtual Computer &CreateComputer();
    Computer();

    void fromJsonString(string jsonText);

    friend ostream &operator<<(ostream &os, const Computer &computer);
};


#endif //CURSOVAYA_COMPUTER_H
