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

# 安装目标
if(WIN32)
    # 设置安装目录的前缀
    set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/release)
    # 安装可执行文件和动态链接库到同一个目录下
    install(TARGETS app string_utils_shared DESTINATION .)
elseif(UNIX)
    # 设置安装目录的前缀
    set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/release)
    set(CMAKE_INSTALL_RPATH "$ORIGIN/../lib")
    set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
    # 安装可执行文件
    install(TARGETS app DESTINATION bin)
    # 安装动态链接库
    install(TARGETS string_utils_shared lib)
endif()

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