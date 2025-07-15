set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/add.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sub.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/mul.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/div.cpp
)
add_library(calc STATIC ${SRC})
set_target_properties(calc PROPERTIES OUTPUT_NAME "calc")