//
// Created by Tommy Yasi (toya1800)

#include "MoveCommand.h"

MoveCommand::MoveCommand(HanoiEngine &pHanoiEngine)
: hanoiEngine(pHanoiEngine), fromTower(0), toTower(0), withMove(false) {}

MoveCommand::MoveCommand(HanoiEngine &pHanoiEngine, int pFromTower, int pToTower)
: hanoiEngine(pHanoiEngine), fromTower(pFromTower), toTower(pToTower), withMove(true) {}

MoveCommand::~MoveCommand() = default;

bool MoveCommand::execute() {
    if (hanoiEngine.move(fromTower, toTower)) {
        if(withMove) { // Log file
            ofstream file;
            file.open("Hanoi.log", ios_base::out | ios_base::app);
            file << "Move " << fromTower << " " << toTower << '\n';
            file.close();
        } else {
            cout << "Move from " << fromTower << "to " << toTower << '\n';
        }
        return true;
    }
    return false;
}

bool MoveCommand::unExecute() {
    hanoiEngine.move(toTower, fromTower); // Opposite since it's an unexecute
    if(withMove) { // Log file
        ofstream file;
        file.open("Hanoi.log", ios_base::out | ios_base::app);
        file << "Move "<< toTower << " " << fromTower << '\n';
        file.close();
    } else {
        cout << "Move from " << toTower << "to " << fromTower << '\n';
    }
    return true;
}

bool MoveCommand::isUndoable() {
    return true; // Unsure*
}

void MoveCommand::readFromStream(ifstream &stream) {
    // Read from file
    string data;
    getline(stream, data); // Will read until newline

    // This will divide to only 2 ints
    std::stringstream stringstream(data);

    // Read from the ints
    stringstream >> fromTower;
    stringstream >> toTower;
}


