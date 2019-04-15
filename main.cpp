#include <iostream>
#include <fstream>

#include "OfficeComputer.h"
#include "GamingComputer.h"
#include "StudentComputer.h"

void showMenu();
void printLine(string line);
void readFilename(string *filename);
void readComputerFromfile(string &filename, string *text);

int main() {

    auto *officeComputer = new OfficeComputer();
    auto *gamingComputer = new GamingComputer();
    auto *studentComputer = new StudentComputer();

    bool running = true;
    int mode;
    string filename;
    while (running) {
        cout << "Выберите пункт меню:" << endl;
        showMenu();
        cin >> mode;
        switch (mode) {
            case 0:
                running = false;
                break;
            case 1:
                readFilename(&filename);
                officeComputer->CreateComputer().writeToFile(filename);
                break;
            case 2:
                readFilename(&filename);
                gamingComputer->CreateComputer().writeToFile(filename);
                break;
            case 3:
                readFilename(&filename);
                studentComputer->CreateComputer().writeToFile(filename);
                break;
            case 4:
                readFilename(&filename);
                string json;
                readComputerFromfile(filename, &json);
                auto *computer = new Computer();
                computer->fromJsonString(json);
                cout << "Компьютер прочитан:" << endl;
                cout << *computer;
                break;

        }
    }

    return 0;
}

void showMenu() {
    printLine("0 - Выход");
    printLine("1 - Добавить оффисный компьютер");
    printLine("2 - Добавить игровой компьютер");
    printLine("3 - Добавить компьютер студента");
    printLine("4 - Прочитать файл");
}

void readFilename(string *filename) {
    cout << "Введите имя файла" << endl;
    cin >> *filename;
}

void printLine(string line) {
    cout << line << endl;
}

void readComputerFromfile(string &filename, string *text) {
    ifstream file;
    file.open("../computers/" + filename);
    *text = "";
    string line;
    // check if file not opened
    if (file.fail()) {
        cerr << "Error opening a file" << endl;
        return;
    }

    while (getline(file, line))
    {
        *text += line;
    }
    file.close();
}