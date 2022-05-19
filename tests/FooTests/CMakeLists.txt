set(TARGET_NAME FooTests)

add_executable(${TARGET_NAME} FooTests.cc)

target_link_libraries(${TARGET_NAME} PRIVATE 
    Catch2::Catch2
    Foo
)

include(Catch)

catch_discover_tests(${TARGET_NAME})