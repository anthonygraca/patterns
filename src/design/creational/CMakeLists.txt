add_library(maze OBJECT maze.h)

add_executable(naive-create-maze-test naive-create-maze-test.cc)
target_link_libraries(naive-create-maze-test GTest::gtest_main maze)

include(GoogleTest)
gtest_discover_tests(naive-create-maze-test)

add_subdirectory(abstract-factory)
