
#include <fstream>

#include "Computer.h"
#include "json.hpp"

#define SPACING 4

using json = nlohmann::json;

Computer &Computer::CreateComputer() {
    auto *computer = new Computer();
    return *computer;
}

// Create default computer
Computer::Computer() {
    this->audioBoard = "";
    this->HDD = "";
    this->RAM = "";
    this->videoCard = "";
    this->motherBoard = "";
    this->CPU = "";
    this->box = "";
    this->drive = "";
}

const string &Computer::getCPU() const {
    return CPU;
}

void Computer::setCPU(const string &CPU) {
    Computer::CPU = CPU;
}

const string &Computer::getMotherBoard() const {
    return motherBoard;
}

void Computer::setMotherBoard(const string &motherBoard) {
    Computer::motherBoard = motherBoard;
}

const string &Computer::getVideoCard() const {
    return videoCard;
}

void Computer::setVideoCard(const string &videoCard) {
    Computer::videoCard = videoCard;
}

const string &Computer::getRAM() const {
    return RAM;
}

void Computer::setRAM(const string &RAM) {
    Computer::RAM = RAM;
}

const string &Computer::getHDD() const {
    return HDD;
}

void Computer::setHDD(const string &HDD) {
    Computer::HDD = HDD;
}

const string &Computer::getBox() const {
    return box;
}

void Computer::setBox(const string &box) {
    Computer::box = box;
}

const string &Computer::getAudioBoard() const {
    return audioBoard;
}

void Computer::setAudioBoard(const string &audioBoard) {
    Computer::audioBoard = audioBoard;
}

const string &Computer::getDrive() const {
    return drive;
}

void Computer::setDrive(const string &drive) {
    Computer::drive = drive;
}

void Computer::writeToFile(string filename) {
    json j;
    j["box"] = this->box;
    j["HDD"] = this->HDD;
    j["RAM"] = this->RAM;
    j["VideoCard"] = this->videoCard;
    j["motherBoard"] = this->motherBoard;
    j["CPU"] = this->CPU;
    j["drive"] = this->drive;
    cout << j.dump(SPACING) << endl;
    ofstream file;
    file.open("../computers/" + filename);
    file << j.dump(SPACING);
    file.close();
}
