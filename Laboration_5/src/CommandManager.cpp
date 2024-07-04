//
// Created by Tommy Yasi (toya1800)

#include "CommandManager.h"

CommandManager::CommandManager() = default;

CommandManager::~CommandManager() {
    // Manage memory
    for(auto &e : executeCommands) {
        delete e;
    }
    executeCommands.erase(executeCommands.begin(), executeCommands.end());

    for(auto &e : undoCommands) {
        delete e;
    }
    undoCommands.erase(undoCommands.begin(), undoCommands.end());
}

bool CommandManager::execute(Command *pCommand) {
    bool canExecute = pCommand->execute(); // First check if it can execute
    if(canExecute && pCommand->isUndoable()) { // If it can but is undoable
        executeCommands.push_back(pCommand);

        // Delete all commands in undo
        for(auto &e : undoCommands) {
            delete e;
        }
        undoCommands.erase(undoCommands.begin(), undoCommands.end());
    } else {
        delete pCommand;
    }
    return canExecute;
}

bool CommandManager::undoMove() {
    Command *command;
    if(!executeCommands.empty()) {
        command = executeCommands.back();
        if(command->unExecute()) {
            undoCommands.push_back(command);
            executeCommands.pop_back();
            return true;
        } else {
            delete command;
            executeCommands.pop_back();

            // Try again
            undoMove();
        }
    }
    return false;
}

bool CommandManager::redoMove() {
    Command *command;
    if(!undoCommands.empty()) {
        command = undoCommands.back();
        if(command->execute()) {
            executeCommands.push_back(command);
            undoCommands.pop_back();
            return true;
        } else {
            undoCommands.pop_back();
            // Again
            redoMove();
        }
    }
    return false;
}

void CommandManager::addCommand(const vector<Command*> &pCommands) {
    for(auto &i : pCommands) {
        executeCommands.push_back(i);
    }
}
