# CMakeLists.txt (项目根目录)
cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加编译选项
add_compile_options(-Wall -Wextra)

# 添加子目录
add_subdirectory(calc)
add_subdirectory(string_utils)
add_subdirectory(src)
# add_subdirectory(tests)

# # 安装目标
# install(DIRECTORY include/ DESTINATION include)
# install(TARGETS mylib_shared mylib_static DESTINATION lib)
# install(TARGETS myapp DESTINATION bin)

# # 打包配置
# set(CPACK_PACKAGE_VENDOR "Your Company")
# set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A simple CMake project example")
# set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
# set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
# set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
# set(CPACK_GENERATOR "ZIP;TGZ")
# include(CPack)

# # 启用测试
# enable_testing()