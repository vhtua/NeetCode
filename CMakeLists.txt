cmake_minimum_required(VERSION 3.0)

project(MyProgram)

# Set the source files
set(SOURCES main.cpp)

# Add an executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Add any additional libraries or dependencies if needed
# target_link_libraries(${PROJECT_NAME} <library_name>)

# Add a custom command to execute the compiled program
add_custom_command(TARGET ${PROJECT_NAME}
    POST_BUILD
    COMMAND ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running ${PROJECT_NAME}"
)
