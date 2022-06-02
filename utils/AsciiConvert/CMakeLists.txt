# Set the project name
project(AsciiConvert)

# Add a library with the above sources
add_library(${PROJECT_NAME} utilsAsciiConvert.c)

# target_include_directories( ${PROJECT_NAME} PUBLIC  ${PROJECT_SOURCE_DIR} )
