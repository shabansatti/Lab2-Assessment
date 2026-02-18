add_executable(Lab2-Autograded
        test_student_code.cpp
)

target_link_libraries(Lab2-Autograded
        GTest::gtest_main
        student_code
)

include(GoogleTest)
gtest_discover_tests(Lab2-Autograded)
