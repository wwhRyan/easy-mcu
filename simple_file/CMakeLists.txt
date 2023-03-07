project(simple_file)

add_library(${PROJECT_NAME} EXCLUDE_FROM_ALL file.c)
target_include_directories(${PROJECT_NAME} PUBLIC . ../Include)

add_executable(file_test file_test.c)

if(DEFINED ULOG_TEST)
target_link_libraries(file_test PRIVATE ulog simple_file)
target_include_directories(file_test PRIVATE ulog simple_file)
endif()

target_link_libraries(file_test PRIVATE simple_file)
target_include_directories(file_test PRIVATE simple_file)