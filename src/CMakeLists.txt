rock_library(rock_library_mode
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_library_mode_bin Main.cpp
    DEPS rock_library_mode)

