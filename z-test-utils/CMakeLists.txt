project(z-test-utils)

# Create the executable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/main.c)

# Header files
target_include_directories( ${PROJECT_NAME}
 PUBLIC  ${PROJECT_SOURCE_DIR}/Include
)

# Link the libraries
target_link_libraries(${PROJECT_NAME}
    AsciiConvert
)
