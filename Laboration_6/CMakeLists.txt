# Add source directory
aux_source_directory(src/ SOURCES)

# Create executable for the run configuration
add_executable(${PROJECT_NAME}-Laboration_6 ${SOURCES} include/BeverageComponent.h src/BeverageComponent.cpp include/CoffeeComponent.h src/CoffeeComponent.cpp include/EspressoComponent.h src/EspressoComponent.cpp include/TeaComponent.h src/TeaComponent.cpp include/ChocolateComponent.h src/ChocolateComponent.cpp include/ExtraDecorator.h src/ExtraDecorator.cpp include/SugarDecorator.h src/SugarDecorator.cpp include/MilkDecorator.h src/MilkDecorator.cpp include/CreamDecorator.h src/CreamDecorator.cpp include/WhippedCreamDecorator.h src/WhippedCreamDecorator.cpp include/Lab6TestProgram.h src/Lab6TestProgram.cpp)

# In order to avoid '../../../' semantics in include paths (relative), we need to add
# target directory to the configuration
target_include_directories(${PROJECT_NAME}-Laboration_6 PRIVATE include/ ../_CodeBase/_libs/)