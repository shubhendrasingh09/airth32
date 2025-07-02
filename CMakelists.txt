cmake_minimum_required(VERSION 3.10)
project(repolib C)

set(CMAKE_C_STANDARD 11)

# --------------------------
# Build the shared library
# --------------------------
add_library(repolib SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/arith32.c)
set_target_properties(repolib PROPERTIES
    VERSION 1.0
    SOVERSION 1
    OUTPUT_NAME "repolib"
)
target_include_directories(repolib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

# --------------------------
# Install targets
# --------------------------
install(TARGETS repolib
    LIBRARY DESTINATION lib
)
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/inc/arith32.h DESTINATION include)

# --------------------------
# Unit Testing (optional)
# --------------------------
option(ENABLE_TESTS "Enable unit tests" ON)

if(ENABLE_TESTS)
    enable_testing()

    add_executable(test_arith32
        ${CMAKE_CURRENT_SOURCE_DIR}/test/test_arith32.c
        ${CMAKE_CURRENT_SOURCE_DIR}/test/unity/unity.c
    )

    target_include_directories(test_arith32 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/test/unity)
    target_link_libraries(test_arith32 repolib)

    add_test(NAME Arith32Tests COMMAND test_arith32)
endif()
