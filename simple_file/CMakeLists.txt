project(simple_file)

include_directories(${PROJECT_SOURCE_DIR}/../Include)

add_library(${PROJECT_NAME} file.c)

target_include_directories(${PROJECT_NAME} PUBLIC . ../Include)

# target_link_libraries(${PROJECT_NAME} null)

add_executable(file_test file_test.c file.c)
