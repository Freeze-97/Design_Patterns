//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_COMMANDMANAGER_H
#define DT063G_COMMANDMANAGER_H

#include "Command.h"
#include <vector>

using std::vector;

/**
 * @brief Command manager which takes care of all commands and stores them
 */
class CommandManager {
private:
    // Vector with pointers to the 2 different commands
    vector<Command*> executeCommands;
    vector<Command*> undoCommands;

public:
    /**
     * @brief Constructor
     */
    CommandManager();

    /**
     * @brief Destructor - Deletes commands
     */
    ~CommandManager();

    /**
     * @brief Executes a pCommand
     * @param pCommand - Pointer to a Command object
     * @return If it was successful
     */
    bool execute(Command *pCommand);

    /**
     * @brief Undo one move
     * @return If it could be done
     */
    bool undoMove();

    /**
     * @brief Replay one move
     * @return If it could be done
     */
    bool redoMove();

    /**
     * @brief Add pCommands to the executed vector
     * @param pCommands - The vector with pCommands
     */
    void addCommand(const vector<Command*> &pCommands);
};

#endif //DT063G_COMMANDMANAGER_H
