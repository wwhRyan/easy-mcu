# Set the project name
project(utils)

# Add a library with the above sources
add_library(${PROJECT_NAME} EXCLUDE_FROM_ALL sort.c utilsAsciiConvert.c)

target_include_directories(${PROJECT_NAME}
                           PUBLIC . ${PROJECT_SOURCE_DIR}/../Include)

add_executable(utils_test utils_test.c)
target_link_libraries(utils_test utils)
target_include_directories(utils_test PRIVATE utils)
