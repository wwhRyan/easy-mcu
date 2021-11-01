cmake_minimum_required (VERSION 3.5)

project(easy-mcu)

# Create the executable
add_executable(${PROJECT_NAME} main.c)

add_subdirectory(utils)

target_link_libraries(${PROJECT_NAME}
    AsciiConvert
)
