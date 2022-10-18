cmake_minimum_required(VERSION 3.0.0)
project(chngclcltr VERSION 1.0)

include(CTest)
enable_testing()

add_executable(chngclcltr main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})
target_link_libraries(chngclcltr ${GTKMM_LIBRARIES})
