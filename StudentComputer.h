
#ifndef CURSOVAYA_STUDENTCOMPUTER_H
#define CURSOVAYA_STUDENTCOMPUTER_H

#include "Computer.h"

class StudentComputer : public Computer{
public:
    Computer &CreateComputer() override;
};


#endif //CURSOVAYA_STUDENTCOMPUTER_H
