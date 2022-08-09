# Set the project name
project(easy_shell)

# Add a library with the above sources
add_library(${PROJECT_NAME} EXCLUDE_FROM_ALL dictionary.c easy_shell.c)
target_include_directories(${PROJECT_NAME}
                           PUBLIC . ${PROJECT_SOURCE_DIR}/../Include)

add_executable(easy_shell_test easy_shell_test.c shell_cmd.c)
target_link_libraries(easy_shell_test ${PROJECT_NAME})
target_include_directories(easy_shell_test PRIVATE ${PROJECT_NAME})
