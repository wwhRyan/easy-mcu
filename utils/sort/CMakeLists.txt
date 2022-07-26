# Set the project name
project(sort)

# Add a library with the above sources
add_library(${PROJECT_NAME} sort.c)

include_directories(${PROJECT_SOURCE_DIR}/../../Include)
