project(simple_file)

add_library(${PROJECT_NAME} EXCLUDE_FROM_ALL file.c)
target_include_directories(${PROJECT_NAME} PUBLIC . ../Include)

add_executable(file_test file_test.c file.c)
