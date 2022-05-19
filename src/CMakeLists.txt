set(TARGET_NAME Main)
add_executable(${TARGET_NAME} main.cc)

target_compile_features(${TARGET_NAME} PRIVATE cxx_std_17)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(Foo)
add_subdirectory(Bar)

target_link_libraries(${TARGET_NAME} PUBLIC Foo Bar)