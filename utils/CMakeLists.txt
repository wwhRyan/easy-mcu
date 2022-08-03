# include_directories(${PROJECT_SOURCE_DIR}/Include)

add_subdirectory(AsciiConvert)

include_directories(${PROJECT_SOURCE_DIR}/../Include
                    ${PROJECT_SOURCE_DIR}/../utils/AsciiConvert)

add_executable(utils_test utils_test.c)
target_link_libraries(utils_test AsciiConvert)
