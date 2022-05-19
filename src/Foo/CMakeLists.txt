set(TARGET_NAME Foo)

add_library(${TARGET_NAME} STATIC Foo.cc)

target_compile_features(${TARGET_NAME} PRIVATE cxx_std_17)

target_include_directories(${TARGET_NAME} PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")