cmake_minimum_required(VERSION 3.24)
project(dw3_original_checkpoint_replay LANGUAGES CXX)
get_filename_component(FATE_CHECKOUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
add_executable(original_graphics_checkpoint_replay
    "${CMAKE_CURRENT_SOURCE_DIR}/graphics_tail_replay.cpp"
    "${FATE_CHECKOUT_DIR}/src/graphics_init_continuation.cpp"
    "${FATE_CHECKOUT_DIR}/src/waitsema_continuation.cpp")
target_include_directories(original_graphics_checkpoint_replay PRIVATE "${FATE_CHECKOUT_DIR}/include")
target_include_directories(original_graphics_checkpoint_replay SYSTEM PRIVATE
    "${FATE_CHECKOUT_DIR}/tools/PS2Recomp/ps2xRuntime/include"
    "${FATE_CHECKOUT_DIR}/tools/PS2Recomp/ps2xIOP/include")
if(MSVC)
    target_compile_options(original_graphics_checkpoint_replay PRIVATE
        /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
    set_source_files_properties("${FATE_CHECKOUT_DIR}/src/graphics_init_continuation.cpp"
        "${FATE_CHECKOUT_DIR}/src/waitsema_continuation.cpp"
        PROPERTIES COMPILE_OPTIONS "/wd4127")
endif()
include("${FATE_CHECKOUT_DIR}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(original_graphics_checkpoint_replay)
