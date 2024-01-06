cmake_minimum_required(VERSION 3.25)
set(PROJECT_NAME mario)
project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

# set flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra ")

set(SOURCES 
    "src/main.cpp"
    "src/GameEngine/Vec2.cpp"
)
# Detect and add SFML

# create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# path for *.hpp and libraty files
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>/include)

# create executable
target_link_libraries(${PROJECT_NAME})