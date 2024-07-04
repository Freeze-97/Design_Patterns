//------------------------------------------------------------------------------
// Lab6.cpp DT063G Design Patterns With C++
//------------------------------------------------------------------------------

#include "Lab6.h"
#include "Lab6TestProgram.h"
#include "memstat.hpp"

int main() {
    std::cout << getAssignmentInfo() << std::endl;

    Lab6Testprogram lab6Testprogram;
    lab6Testprogram.run();
    return 0;
}
