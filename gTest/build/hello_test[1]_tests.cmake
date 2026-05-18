add_test([=[HelloTest.BasicAssertions]=]  /home/syed-shazli/Downloads/C--Practice/gTest/build/hello_test [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES DEF_SOURCE_LINE /home/syed-shazli/Downloads/C--Practice/gTest/helloGTest.cpp:4 WORKING_DIRECTORY /home/syed-shazli/Downloads/C--Practice/gTest/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  hello_test_TESTS HelloTest.BasicAssertions)
