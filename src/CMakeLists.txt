rock_library(rock_library_default_mode
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_library(rock_library_mode_SHARED SHARED
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_library(rock_library_mode_STATIC STATIC
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_library(rock_library_mode_MODULE MODULE
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

