################################################################################
# BabylonDemoProject
################################################################################
cmake_minimum_required(VERSION 3.30.0 FATAL_ERROR)

# Babylon
Project(Babylon)
include(ext/Babylon/tools/cmake/babylon.cmake)

# App
bn_register_unit(BabylonDemoProject
    UNIT_TYPE App
    BUILD_CFG tools/cmake/cfg.cmake
    OUTPUT_DIR bin
    PCH src/pch.h
    INCLUDE_DIRS src
    SOURCE_SEARCH_MASKS src/*.h src/*.cpp
    DEPEND_UNITS BabylonSystem BabylonUI
)

bn_enable_unit(BabylonDemoProject)
