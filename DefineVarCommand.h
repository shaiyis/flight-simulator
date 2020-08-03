//
// Created by giladasher on 25/12/2019.
//

#ifndef FLIGHTSIMULATOR_DEFINEVARCOMMAND_H
#define FLIGHTSIMULATOR_DEFINEVARCOMMAND_H


#include "Command.h"

// this class is defining the variables and inserts it to progMap and (or) simMap
class DefineVarCommand : public Command {
    string _var;
    string _value;
public:
    DefineVarCommand(const string &var, const string &value);

    int execute(int index, vector<string> &lexer);
};


#endif //FLIGHTSIMULATOR_DEFINEVARCOMMAND_H
