project(z-test-cmdline)

# Create the executable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main.c)

# Link the libraries
target_link_libraries(${PROJECT_NAME}
    CmdProtocol
)
