project(TestCase)

#/*-----------------------------------------------------------*/

# Create the executable
add_executable(cmdlineTest ${PROJECT_SOURCE_DIR}/cmdline_main.c)

# Link the libraries
target_link_libraries(cmdlineTest
    CmdProtocol
)

#/*-----------------------------------------------------------*/

add_executable(utilsTest ${PROJECT_SOURCE_DIR}/utils_main.c)
target_link_libraries(utilsTest
    AsciiConvert
)

