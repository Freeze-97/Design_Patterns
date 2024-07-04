//
// Created by Tommy Yasi (toya1800)

#include "Lab5TestProgram.h"

Lab5TestProgram::Lab5TestProgram() : replay(hanoiEngine) {}
Lab5TestProgram::~Lab5TestProgram() = default;

void Lab5TestProgram::run() {
    // First ask for replay and see if it's possible
    if(Replay::checkReplay()) {
        askForReplay();
    } else {
        askForDiscs();
    }

    // The game is on from here
    bool again = true;
    do {
        if (!hanoiEngine.isDone()) {
            if(!askForCommands()) {
                again = false;
            }
        } else {
            cout << "Congrats! You have won the game!" << endl;
            again = false;
        }
    } while(again);
}

void Lab5TestProgram::askForDiscs() {
    bool again = true;
    int input;
    do {
        cout << "How many disc do you want for the game? Min is 2 and max is 6." << endl;

        // Invalid string inputs will not break the program
        if(!(cin >> input)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if(input >= 2 && input <= 6) {
            again = false;
        } else {
            cout << "Invalid input!" << endl;
        }
    } while (again);

    // Create game session
    cout << "Creating session" << endl;
    commandManager.execute(new ResetCommand(hanoiEngine, input));
}

void Lab5TestProgram::askForReplay() {
    cout << "Would you like to replay?" << endl;
    bool again = true;
    do {
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        int input;

        // Invalid string inputs will not break the program
        if(!(cin >> input)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (input) {
            case 1:
                commandManager.addCommand(replay.replaySession());
                again = false;
                break;
            case 2:
                askForDiscs();
                again = false;
                break;
            default:
                cout << "Invalid input!" << endl;
        }
    } while (again);
}

void Lab5TestProgram::askForReset() {
    cout << "Would you like to reset?" << endl;
    bool again = true;
    do {
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        int input;

        // Invalid string inputs will not break the program
        if(!(cin >> input)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (input) {
            case 1:
                askForDiscs();
                again = false;
                break;
            case 2:
                again = false;
                break;
            default:
                cout << "Invalid input!" << endl;
        }
    } while (again);
}

bool Lab5TestProgram::askForCommands() {
    bool again = true;
    cout << "Choose command to be performed: " << endl;
    cout << "1. Move" << endl;
    cout << "2. Redo" << endl;
    cout << "3. Undo" << endl;
    cout << "4. Reset" << endl;
    cout << "0. Exit" << endl;

    // Show the state of the current game session
    commandManager.execute(new ShowCommand(hanoiEngine));

    int input;

    // Invalid string inputs will not break the program
    if(!(cin >> input)) {
        cin.clear();
        cin.ignore(1000, '\n');
    }

    switch (input) {
        case 1:
            moveCommand();
            break;
        case 2:
            if(!commandManager.redoMove()) {
                cout << "Could not redo" << endl;
            }
            break;
        case 3:
            if (!commandManager.undoMove()) {
                cout << "Could not undo" << endl;
            }
            break;
        case 4:
            askForReset();
            break;
        case 0:
            again = false;
            break;
        default:
            cout << "Invalid input!" << endl;
    }
    return again;
}

void Lab5TestProgram::moveCommand() {
    int from, to;
    bool again = true;
    do {
        cout << "Choose tower to move from (1-3):" << endl;

        // Invalid string inputs will not break the program
        if(!(cin >> from)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if(from >= 1 && from <= 3) {
            again = false;
        } else {
            cout << "Only 1, 2 and 3 are valid inputs!" << endl;
        }
    } while(again);

    again = true;
    do {
        cout << "Choose tower to move to (1-3):" << endl;

        // Invalid string inputs will not break the program
        if(!(cin >> to)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if(to >= 1 && to <= 3 && to != from) {
            again = false;
        } else if (to < 1 || to > 3){
            cout << "Only 1, 2 and 3 are valid inputs!" << endl;
        } else {
            cout << "Cannot move to the same tower you are moving from!" << endl;
        }
    } while(again);

    // Make the move and check if it's acceptable
    if(!commandManager.execute(new MoveCommand(hanoiEngine, from, to))) {
        cout << "Cannot make that move!" << endl;
    } else {
        cout << "Acceptable move" << endl;
    }
}
