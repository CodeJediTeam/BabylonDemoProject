################################################################################
# BabylonDemoProject
################################################################################
cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)

# Babylon
add_subdirectory(ext/Babylon Babylon)
babylon_enable_modules(BabylonSystem BabylonUI)

# App
project(BabylonDemoProject)
babylon_configure_app(
    OUTPUT_DIR bin
    INCLUDE_DIRS src
    SOURCE_SEARCH_MASKS src/*.h src/*.cpp
)
