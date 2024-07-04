//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_MOVECOMMAND_H
#define DT063G_MOVECOMMAND_H

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
using std::ios_base;

/**
 * @brief Command for moving one disc
 */
class MoveCommand : public Command {
private:
    // Engine
    HanoiEngine &hanoiEngine;

    // From x tower to y tower represented by 2 ints, tower 1,2 and 3
    int fromTower;
    int toTower;

    // If a constructor with moves are included, write to Hanoi.log
    bool withMove;

public:
    /**
     * @brief Constructor without move parameters
     * @param hanoiEngine - The engine
     */
    explicit MoveCommand(HanoiEngine &pHanoiEngine);

    /**
     * @brief Constructor with move parameters
     * @param pHanoiEngie - The Engine
     * @param pFromTower - The tower which it's being transfered from
     * @param pToTower - The tower which it's being transfered to
     */
    MoveCommand(HanoiEngine &pHanoiEngine, int pFromTower, int pToTower);

    /**
     * @brief The destructor
     */
    ~MoveCommand() override;

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

#endif //DT063G_MOVECOMMAND_H
