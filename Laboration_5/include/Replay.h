//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_REPLAY_H
#define DT063G_REPLAY_H

#include "Command.h"
#include "HanoiEngine.h"
#include "MoveCommand.h"
#include "ResetCommand.h"
#include "ShowCommand.h"
#include <vector>

using std::vector;
using std::string;
using std::endl;

/**
 * @brief Replay previous commands via file
 */
class Replay {
private:
    // The engine
    HanoiEngine &hanoiEngine;

    // All commands will be stored here and returned in replaySession()
    vector<Command*> commands;

    // The current Command which will be executed
    Command *currentCommand{};

protected:
    /**
     * @brief Check type of command
     * @param pType - The type in string
     * @return Return as an int
     */
    static int checkCommandType(const string& pType);

public:
    /**
     * @brief Constructor
     * @param pHanoiEngine - The engine
     */
    explicit Replay(HanoiEngine &pHanoiEngine);

    /**
     * @brief Replays a sessio via a fiel if it exists
     * @return All commands in a vector
     */
    vector<Command*> replaySession();

    /**
     * @brief See if there is a file for replay
     * @return If there is or not
     */
    static bool checkReplay();
};

#endif //DT063G_REPLAY_H
