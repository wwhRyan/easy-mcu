# Set the project name
project(AsciiConvert)

# Add a library with the above sources
add_library(${PROJECT_NAME} utilsAsciiConvert.c)

include_directories(${PROJECT_SOURCE_DIR}/../../Include)