set(TARGET_NAME BarTests)

add_executable(${TARGET_NAME} BarTests.cc)

target_link_libraries(${TARGET_NAME} PRIVATE 
    Catch2::Catch2
    Bar
)

include(Catch)

catch_discover_tests(${TARGET_NAME})