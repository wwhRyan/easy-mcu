project(reg_config)

include_directories(
    ${PROJECT_SOURCE_DIR}/../Include
)

add_library(${PROJECT_NAME} cxd3554.c)

add_executable(reg_config_test main.c)
target_link_libraries(reg_config_test
reg_config
)
