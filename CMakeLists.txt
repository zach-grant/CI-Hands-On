cmake_minimum_required(VERSION 3.11...3.16)

# The "..."" syntax above is only supported by versions >=3.12
# This block ensures versions <3.12 still use the correct policies
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(Giga VERSION 0.1
                            DESCRIPTION "Plugin platform to provide 3rd party plugins access to underlying SDK classes."
                            LANGUAGES CXX)

option(BUILD_TESTS "Build unit tests." ON)

add_subdirectory(src)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()