//
// Created by Tommy Yasi (toya1800)

#include "Replay.h"

Replay::Replay(HanoiEngine &pHanoiEngine) : hanoiEngine(pHanoiEngine) {}

vector<Command*> Replay::replaySession() {
    // Open file
    ifstream file;
    file.open("Hanoi.log");

    // Replay
    if(file.is_open()) {
        string type; // If it's move or reset
        while(file >> type){
            currentCommand = nullptr;
            switch (checkCommandType(type)) {
                case 1:
                 currentCommand = new MoveCommand(hanoiEngine);
                 break;
                case 2:
                    currentCommand = new ResetCommand(hanoiEngine);
                    break;
                case 3:
                    currentCommand = new ShowCommand(hanoiEngine, false);
                    break;
            }

            // If no problems have occurred, execute commands
            if(currentCommand != nullptr) {
                currentCommand->readFromStream(file);
                currentCommand->execute();
                commands.push_back(currentCommand);
            } else {
                cout << "Error! Could not create new command. "
                        "(currentCommand = nullptr)." << endl;
            }
        }
        file.close();
    } else {
        cout << "Could not open file" << endl;
    }
    return commands;
}

int Replay::checkCommandType(const string& pType) {
    int commandType;
    if(pType == "Move") {
        commandType = 1;
    } else if(pType == "Reset") {
        commandType = 2;
    } else {
        commandType = 3;
    }
    return commandType;
}

bool Replay::checkReplay() {
    ifstream file("Hanoi.log");
    if(file.is_open() && !file.fail()) {
        file.close();
        return true;
    }
    return false;
}
