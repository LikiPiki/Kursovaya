
#include "Computer.h"

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
