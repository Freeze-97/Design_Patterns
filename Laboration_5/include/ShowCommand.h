//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_SHOWCOMMAND_H
#define DT063G_SHOWCOMMAND_H

#include "Command.h"
#include "HanoiEngine.h"
#include <fstream>

using std::ofstream;
using std::ios_base;

/**
 * @brief This command will show the current state of the game
 */
class ShowCommand : public Command {
private:
    // Engine
    HanoiEngine &hanoiEngine;

    // If a constructor with moves are included, write to Hanoi.log
    bool withMove;

public:
    /**
     * @brief Constructor without withMove parameter
     * @param pHanoiEngine - The engine
     */
    explicit ShowCommand(HanoiEngine &pHanoiEngine);

    /**
     * @brief Constructor with withMove parameter
     * @param pHanoiEngine - The engine
     * @param withMove - If there is moves to be logged
     */
    ShowCommand(HanoiEngine &pHanoiEngine, bool pWithMove);

    /**
     * @brief Destrcutor
     */
    ~ShowCommand() override;

    /**
     * @brief Executes the task of showing
     * @return If it was successful to show or not
     */
    bool execute() override;

    /**
     * @details Tries to unexecute the show command
     * which is of course impossible.
     * Will always be false
     * @return False
     */
    bool unExecute() override;

    /**
     * @brief Cannot not undo a show command
     * @return False
     */
    bool isUndoable() override;

    /**
     * @brief Will not actually read anything
     * @param stream - The stream to read
     */
    void readFromStream(ifstream &stream) override;
};

#endif //DT063G_SHOWCOMMAND_H
