# Set the project name
project(CmdProtocol)

# Add a library with the above sources
add_library(${PROJECT_NAME} EXCLUDE_FROM_ALL CmdLine.c)

target_include_directories(${PROJECT_NAME}
                           PUBLIC . ${PROJECT_SOURCE_DIR}/../Include)

# Create the executable
add_executable(${PROJECT_NAME}_test ${PROJECT_NAME}_test.c CmdlineRegister.c)

# Link the libraries
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}_test PRIVATE ${PROJECT_NAME})
