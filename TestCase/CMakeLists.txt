project(TestCase)

# /*-----------------------------------------------------------*/

include_directories(
  ${PROJECT_SOURCE_DIR}/../AtProtocol
  ${PROJECT_SOURCE_DIR}/../AtProtocol/Src/At_internal
  ${PROJECT_SOURCE_DIR}/../AtProtocol/Src/At_internal/StateMachine
  ${PROJECT_SOURCE_DIR}/../AtProtocol/Src/At_HashTable)

add_executable(ATProtocalTest ${PROJECT_SOURCE_DIR}/AtProtocal_test.c)
target_link_libraries(ATProtocalTest ATProtocol)

# /*-----------------------------------------------------------*/

include_directories(${PROJECT_SOURCE_DIR}/../Include
                    ${PROJECT_SOURCE_DIR}/../CmdProtocol)

# Create the executable
add_executable(
  cmdlineTest ${PROJECT_SOURCE_DIR}/cmdline_main.c
              ${PROJECT_SOURCE_DIR}/../CmdProtocol/CmdlineRegister.c)

# Link the libraries
target_link_libraries(cmdlineTest CmdProtocol)

# /*-----------------------------------------------------------*/

add_executable(utilsTest ${PROJECT_SOURCE_DIR}/utils_main.c)
target_link_libraries(utilsTest AsciiConvert)
