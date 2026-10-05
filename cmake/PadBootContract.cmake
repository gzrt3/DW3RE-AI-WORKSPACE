add_executable(pad_boot_contract
    "${CMAKE_SOURCE_DIR}/tests/integration/pad_boot_contract.cpp"
    "${CMAKE_SOURCE_DIR}/src/pad_boot_continuation.cpp"
    "${CMAKE_SOURCE_DIR}/src/elf.cpp")
target_include_directories(pad_boot_contract PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_include_directories(pad_boot_contract SYSTEM PRIVATE
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include")
if(MSVC)
    target_compile_options(pad_boot_contract PRIVATE
        /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
    set_source_files_properties("${CMAKE_SOURCE_DIR}/src/pad_boot_continuation.cpp"
        PROPERTIES COMPILE_OPTIONS "/wd4127")
endif()
include("${CMAKE_SOURCE_DIR}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(pad_boot_contract)
