cmake_minimum_required (VERSION 3.5)

project(easy-mcu)

# Create the executable
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/z-test-utils/main.c)

# Header files
target_include_directories( ${PROJECT_NAME}
 PUBLIC  ${PROJECT_SOURCE_DIR}/Include
)

# sub-directories
add_subdirectory(utils)

# Link the libraries
target_link_libraries(${PROJECT_NAME}
    AsciiConvert
)
