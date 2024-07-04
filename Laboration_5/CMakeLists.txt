# Add source directory
aux_source_directory(src/ SOURCES)
aux_source_directory(../_CodeBase/Hanoi/src SOURCES)

# Create executable for the run configuration
add_executable(${PROJECT_NAME}-Laboration_5 ${SOURCES} include/Command.h src/Command.cpp include/MoveCommand.h src/MoveCommand.cpp include/ResetCommand.h src/ResetCommand.cpp include/CommandManager.h include/Replay.h src/Replay.cpp src/CommandManager.cpp include/Lab5TestProgram.h src/Lab5TestProgram.cpp include/ShowCommand.h src/ShowCommand.cpp)

# In order to avoid '../../../' semantics in include paths (relative), we need to add
# target directory to the configuration
target_include_directories(${PROJECT_NAME}-Laboration_5 PRIVATE include/ ../_CodeBase/Hanoi/include/ ../_CodeBase/_libs/)