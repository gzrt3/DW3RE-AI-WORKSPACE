find_package(SDL2 2.0.18 REQUIRED)
add_executable(fate_native_presenter_contract EXCLUDE_FROM_ALL
    "${CMAKE_SOURCE_DIR}/tests/integration/native_presenter_contract.cpp"
    "${CMAKE_SOURCE_DIR}/tests/support/empty_recompiled_table.cpp"
    "${CMAKE_SOURCE_DIR}/src/native_presenter.cpp")
target_include_directories(fate_native_presenter_contract PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_include_directories(fate_native_presenter_contract SYSTEM PRIVATE
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include")
target_link_libraries(fate_native_presenter_contract PRIVATE SDL2::SDL2)
include("${CMAKE_SOURCE_DIR}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(fate_native_presenter_contract)
if(MSVC)
    target_compile_options(fate_native_presenter_contract PRIVATE
        /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
endif()
add_custom_command(TARGET fate_native_presenter_contract POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "$<TARGET_FILE:SDL2::SDL2>"
        "$<TARGET_FILE_DIR:fate_native_presenter_contract>" VERBATIM)
