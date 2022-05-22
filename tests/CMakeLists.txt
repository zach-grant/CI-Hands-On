Include(FetchContent)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG 62fd660583d3ae7a7886930b413c3c570e89786c
)

message(STATUS "Fetching Catch2 for unit testing...")
if(${CMAKE_VERSION} VERSION_GREATER_EQUAL 3.14)
    FetchContent_MakeAvailable(catch2)
else() # FetchContent_MakeAvailable not supported, populate manually
    FetchContent_GetProperties(catch2)
    if(NOT catch2_POPULATED)
        FetchContent_Populate(catch2)
        add_subdirectory(${catch2_SOURCE_DIR} ${catch2_BINARY_DIR})
    endif()
endif()
message(STATUS "Finished fetching Catch2.")

# Because FetchContent is used in the parent CMakeLists.txt to fetch Catch2, this dir must be added explicitly
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)

include(CTest)

add_subdirectory(FooTests)
