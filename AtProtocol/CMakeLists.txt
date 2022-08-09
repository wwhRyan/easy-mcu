# Set the project name
project(ATProtocol)

# Add a library with the above sources
add_library(
  ${PROJECT_NAME} EXCLUDE_FROM_ALL
  Src/AtProtocol.c Src/At_HashTable/AtCmdHashTable.c
  Src/At_HashTable/AtKeyHashTable.c Src/At_internal/AtFsm.c
  Src/At_internal/AtUtils.c Src/At_internal/StateMachine/StateMachine.c)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC . ${PROJECT_SOURCE_DIR}/Src/At_HashTable
         ${PROJECT_SOURCE_DIR}/../Include ${PROJECT_SOURCE_DIR}/Src/At_internal
         ${PROJECT_SOURCE_DIR}/Src/At_internal/StateMachine)

# for at protocal test
add_executable(${PROJECT_NAME}_test AtProtocal_test.c)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}_test PRIVATE ${PROJECT_NAME})
