//
// Created by Tommy Yasi (toya1800)

#include "ShowCommand.h"


ShowCommand::ShowCommand(HanoiEngine &pHanoiEngine)
: hanoiEngine(pHanoiEngine), withMove(true) {}

ShowCommand::ShowCommand(HanoiEngine &pHanoiEngine, bool pWithMove)
: hanoiEngine(pHanoiEngine), withMove(pWithMove) {}

ShowCommand::~ShowCommand() = default;

bool ShowCommand::execute() {
    // Show the game
    hanoiEngine.show();

    if(withMove) {
        ofstream file;
        file.open("Hanoi.log", ios_base::out | ios_base::app);
        file << "Show" << "\n";
        file.close();
    }
    return true;
}

bool ShowCommand::unExecute() {
    return false;
}

bool ShowCommand::isUndoable() {
    return false;
}

void ShowCommand::readFromStream(ifstream &stream) {}


