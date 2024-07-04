//
// Created by Tommy Yasi (toya1800)

#ifndef DT063G_COMMAND_H
#define DT063G_COMMAND_H

#include <fstream>

using std::ifstream;

/**
 * @brief Abstract class for all commands
 */
class Command {
public:
    /**
     * @brief Constrcutor
     */
    Command();

    /**
     * @brief Virtual destrcutor
     */
    virtual ~Command();

    /**
     * @brief Executes the command
     * @return If it was successful or not
     */
    virtual bool execute() = 0;

    /**
     * @brief Unexecutes a command
     * @return If it was successful or not
     */
    virtual bool unExecute() = 0;

    /**
     * @brief Check if the command is undoable
     * @return If it is undoable or not
     */
    virtual bool isUndoable() = 0;

    /**
     * @brief Reads stream
     */
    virtual void readFromStream(ifstream&) = 0;
};

#endif //DT063G_COMMAND_H
