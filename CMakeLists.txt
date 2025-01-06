################################################################################
# BabylonDemoProject
################################################################################
cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)

# Babylon
Project(BabylonApp)
add_subdirectory(ext/Babylon Babylon)

# App
babylon_register_unit(BabylonDemoProject
    UNIT_TYPE App
    OUTPUT_DIR bin
    INCLUDE_DIRS src
    SOURCE_SEARCH_MASKS src/*.h src/*.cpp
    DEPEND_UNITS BabylonSystem BabylonUI
)

babylon_enable_unit(BabylonDemoProject)
