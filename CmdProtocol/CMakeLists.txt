# Set the project name
project (CmdProtocol)

include_directories( 
    ${PROJECT_SOURCE_DIR}/../Include
)

# Add a library with the above sources
add_library(${PROJECT_NAME} CmdLine.c)

# target_include_directories( ${PROJECT_NAME}
#  PUBLIC  ${PROJECT_SOURCE_DIR}
# )
