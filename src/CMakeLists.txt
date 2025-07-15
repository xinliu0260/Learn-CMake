set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
add_executable(app ${SRC})
target_include_directories(app PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(app PRIVATE string_utils_static)

