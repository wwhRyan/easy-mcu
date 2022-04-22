project(reg_config)

include_directories(
    ${PROJECT_SOURCE_DIR}/../Include
)

add_library(${PROJECT_NAME} cxd3554.c build/ckg.c   build/frc.c   build/inp.c  build/led.c     build/mini-dsi.c  build/misc.c  build/tpg.c
build/ddr2.c  build/i2cm.c  build/ipg.c  build/lpddr2.c  build/mipi.c      build/pi.c    build/tx.c )

add_executable(reg_config_test main.c)
target_link_libraries(reg_config_test
reg_config
)
