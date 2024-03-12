cmake_minimum_required(VERSION 3.5)

project(krankenversicherung LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(krankenversicherung main.cpp
    termin.h termin.cpp
    arztpraxis.h arztpraxis.cpp
    callcenter.h callcenter.cpp
    )

include(GNUInstallDirs)
install(TARGETS krankenversicherung
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
