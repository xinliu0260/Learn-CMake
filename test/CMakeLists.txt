add_executable(calc_test calc_test.cpp)
target_include_directories(calc_test PRIVATE ${CMAKE_SOURCE_DIR}/calc)
target_link_libraries(calc_test PRIVATE calc)

add_test(
    NAME test_add
    COMMAND calc_test add
)

add_test(
    NAME test_sub
    COMMAND calc_test sub
)


