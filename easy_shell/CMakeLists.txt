# Set the project name
project(easy_shell)

include_directories(${PROJECT_SOURCE_DIR}/../Include)

# Add a library with the above sources
add_library(${PROJECT_NAME} dictionary.c easy_shell.c easy_shell_test.c)

add_executable(easy_shell_test easy_shell_test.c shell_cmd.c)
target_link_libraries(easy_shell_test easy_shell)
