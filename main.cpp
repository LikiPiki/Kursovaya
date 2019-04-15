#include <iostream>

#include "OfficeComputer.h"
#include "GamingComputer.h"
#include "StudentComputer.h"

void showMenu();
void printLine(string line);

int main() {

    auto *officeComputer = new OfficeComputer();
    auto *gamingComputer = new GamingComputer();
    auto *studentComputer = new StudentComputer();

    bool running = true;
    int mode;
    while (running) {
        cout << "Выберите пункт меню:" << endl;
        showMenu();
        cin >> mode;
        switch (mode) {
            case 0:
                running = false;
        }
    }

    return 0;
}

void showMenu() {
    printLine("0 - Выход");
    printLine("1 - Добавить оффисный компьютер");
    printLine("2 - Добавить игровой компьютер");
    printLine("3 - Добавить компьютер студента");
}

void printLine(string line) {
    cout << line << endl;
}
