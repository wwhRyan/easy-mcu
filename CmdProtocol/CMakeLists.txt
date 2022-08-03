# Set the project name
project(CmdProtocol)

include_directories(${PROJECT_SOURCE_DIR}/../Include)

# Add a library with the above sources
add_library(${PROJECT_NAME} CmdLine.c)

# Create the executable
add_executable(${PROJECT_NAME}_test ${PROJECT_NAME}_test.c CmdlineRegister.c)

# Link the libraries
target_link_libraries(${PROJECT_NAME}_test CmdProtocol)
