set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/string_utils.cpp)
add_library(string_utils_shared SHARED ${SRC})
target_include_directories(string_utils_shared PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(string_utils_shared PROPERTIES OUTPUT_NAME "string_utils")

add_library(string_utils_static STATIC ${SRC})
target_include_directories(string_utils_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(string_utils_static PROPERTIES OUTPUT_NAME "string_utils")  
