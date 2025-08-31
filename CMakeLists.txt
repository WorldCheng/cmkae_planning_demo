cmake_minimum_required(VERSION 3.10.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake_program"
    HOMEPAGE_URL "https://github.com/WorldCheng/cmkae_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#设置动态库及可执行文件输出地址
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

#设置路径别名
set(PNC_MAP_DIR ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(PROCESS_DIR ${CMAKE_SOURCE_DIR}/src/process)
set(SHOW_RESULT_DIR ${CMAKE_SOURCE_DIR}/src/show_result)


#添加子目录
add_subdirectory(src)

