//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_LAB5TESTPROGRAM_H
#define DT063G_LAB5TESTPROGRAM_H

#include "CommandManager.h"
#include "HanoiEngine.h"
#include "Replay.h"
#include <iostream>

using std::cin;

class Lab5TestProgram {
private:
    // Variables
    HanoiEngine hanoiEngine;
    CommandManager commandManager;
    Replay replay;
    /**
     * @brief This will ask the user for amount of discs to be used
     */
    void askForDiscs();

    /**
     * @brief Asks the user if he wants to replay
     */
    void askForReplay();

    /**
     * @brief Asks the user if he wants to reset the game session
     * NOT replay a previous session
     */
    void askForReset();

    /**
     * @brief The game will have started here and ask the user for commands
     * @return If the game should cancel/is finished or not
     */
    bool askForCommands();

    /**
     * @brief If the user choose move
     */
    void moveCommand();

public:
    /**
     * @brief Constructor
     */
    Lab5TestProgram();

    /**
     * @brief Destructor
     */
    ~Lab5TestProgram();

    /**
     * @brief Starts running the program
     */
    void run();
};

#endif //DT063G_LAB5TESTPROGRAM_H
