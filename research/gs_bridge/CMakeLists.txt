cmake_minimum_required(VERSION 3.20)
project(dw3_gs_capture_bridge LANGUAGES CXX)
get_filename_component(REPOSITORY "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
set(RUNTIME "${REPOSITORY}/tools/PS2Recomp/ps2xRuntime" CACHE PATH "Host GS runtime source")
add_library(gs_host STATIC
  "${RUNTIME}/src/lib/gs/gs_cpu_backend.cpp"
  "${RUNTIME}/src/lib/gs/gs_frontend.cpp"
  "${RUNTIME}/src/lib/gs/ps2_gs_memory.cpp")
target_include_directories(gs_host PUBLIC "${RUNTIME}/include")
target_compile_features(gs_host PUBLIC cxx_std_20)
target_compile_definitions(gs_host PUBLIC NOMINMAX WIN32_LEAN_AND_MEAN PS2_RUNTIME_LOGS=0 AGRESSIVE_LOGS=0)
add_library(gs_d3d11 STATIC d3d11_backend.cpp)
target_link_libraries(gs_d3d11 PUBLIC gs_host d3d11 dxgi user32)
add_executable(gs_replay replay.cpp)
target_link_libraries(gs_replay PRIVATE gs_d3d11)
enable_testing()
add_test(NAME hardware_readback COMMAND gs_replay --self-test)
