# Set the project name
project(AsciiConvert)

# 'include_directories' is conflict with 'target_include_directories' ???
# include_directories(${PROJECT_SOURCE_DIR}/../../Include)

# Add a library with the above sources
add_library(${PROJECT_NAME} utilsAsciiConvert.c)

target_include_directories(${PROJECT_NAME}
                           PUBLIC . ${PROJECT_SOURCE_DIR}/../../Include)
