//
// Created by Tommy Yasi (toya1800)

#include "ResetCommand.h"

ResetCommand::ResetCommand(HanoiEngine &pHanoiEngine)
: hanoiEngine(pHanoiEngine), moves(6), withMove(false) {}

ResetCommand::ResetCommand(HanoiEngine &pHanoiEngine, int pMoves)
: hanoiEngine(pHanoiEngine), moves(pMoves), withMove(true) {}

ResetCommand::~ResetCommand() = default;

bool ResetCommand::execute() {
    hanoiEngine.reset(moves);

    if(withMove) { // Log file
        ofstream file;
        file.open("Hanoi.log", ofstream::trunc); // Trunc is used to discard all other data
        file << "Reset " << moves <<'\n';
        file.close();
    } else {
        cout << "Game has been reset with " << moves << '\n';
    }
    return true;
}

bool ResetCommand::unExecute() {
    return false;
}

bool ResetCommand::isUndoable() {
    return false;
}

void ResetCommand::readFromStream(ifstream &stream) {
    // Read from file
    string data;
    getline(stream, data); // Will read until newline

    // Read as SS
    std::stringstream stringstream(data);

    // Read amount of moves
    stringstream >> moves;
}
