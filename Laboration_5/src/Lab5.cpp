//------------------------------------------------------------------------------
// Lab5.cpp DT063G Design Patterns With C++
//------------------------------------------------------------------------------
#include "Lab5.h"
#include "HanoiEngine.h"
#include "Lab5TestProgram.h"
#include <iostream>
#include "memstat.hpp"

int main() {
    std::cout << getAssignmentInfo() << std::endl;

    // Test program running the code
    Lab5TestProgram testProgram;
    testProgram.run();
    return 0;
}
