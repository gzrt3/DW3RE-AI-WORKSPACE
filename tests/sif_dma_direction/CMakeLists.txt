cmake_minimum_required(VERSION 3.24)
project(sif_dma_direction_contract LANGUAGES CXX)
get_filename_component(DW3_ROOT "${CMAKE_CURRENT_LIST_DIR}/../.." ABSOLUTE)
add_executable(sif_dma_direction_contract main.cpp)
target_compile_features(sif_dma_direction_contract PRIVATE cxx_std_20)
target_include_directories(sif_dma_direction_contract SYSTEM PRIVATE
    "${DW3_ROOT}/tools/PS2Recomp/ps2xRuntime/include"
    "${DW3_ROOT}/tools/PS2Recomp/ps2xRuntime/src/lib/Kernel"
    "${DW3_ROOT}/tools/PS2Recomp/ps2xIOP/include")
if(MSVC)
    target_compile_options(sif_dma_direction_contract PRIVATE /W4 /WX /EHsc /external:W0 /wd4324)
endif()
include("${DW3_ROOT}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(sif_dma_direction_contract)
