# Set the project name
project(ATProtocol)

include_directories(
  ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/Src/At_internal
  ${PROJECT_SOURCE_DIR}/Src/At_internal/StateMachine
  ${PROJECT_SOURCE_DIR}/Src/At_HashTable)

# Add a library with the above sources
add_library(
  ${PROJECT_NAME}
  Src/AtProtocol.c Src/At_HashTable/AtCmdHashTable.c
  Src/At_HashTable/AtKeyHashTable.c Src/At_internal/AtFsm.c
  Src/At_internal/AtUtils.c Src/At_internal/StateMachine/StateMachine.c)

  include_directories(${PROJECT_SOURCE_DIR}/../Include)
add_executable(${PROJECT_NAME}_test AtProtocal_test.c)
target_link_libraries(${PROJECT_NAME}_test ATProtocol)
