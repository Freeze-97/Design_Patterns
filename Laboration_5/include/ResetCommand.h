//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_RESETCOMMAND_H
#define DT063G_RESETCOMMAND_H

#include "Command.h"
#include "HanoiEngine.h"
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::ofstream;
using std::fstream;
using std::string;
using std::getline;

/**
 * @brief Resets the game
 */
class ResetCommand : public Command {
private:
    // Engine
    HanoiEngine &hanoiEngine;

    // Amount of moves that need to be done to reset the game
    int moves;

    // If a constructor with moves are included
    bool withMove;

public:
    /**
     * @brief Constructor without amount of moves done,
     * moves as standard will be 6
     * @param pHanoiEngine - The engine
     */
    explicit ResetCommand(HanoiEngine &pHanoiEngine);

    /**
     * @brief Constructor with moves
     * @param pHanoiEngine - The engine
     * @param pMoves - Amount of moves
     */
    ResetCommand(HanoiEngine &pHanoiEngine, int pMoves);

    /**
     * @brief Destructor
     */
    ~ResetCommand() override;

    /**
     * @brief Executes the task of moving one piece
     * @return If it was successful
     */
    bool execute() override;

    /**
     * @brief Unexecutes the task of a piece that has been moved
     * @return If it was successful
     */
    bool unExecute() override;

    /**
     * @brief Is it possible to unexecute
     * @return If it's undoable
     */
    bool isUndoable() override;

    /**
     * @brief Reads commands
     * @param stream - The stream to read
     */
    void readFromStream(ifstream &stream) override;
};

#endif //DT063G_RESETCOMMAND_H
