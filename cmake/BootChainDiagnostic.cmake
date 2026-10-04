find_package(Python3 REQUIRED COMPONENTS Interpreter)
set(BOOT_ENTRY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/entry_0x100008.cpp")
set(BOOT_ENTRY_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/generated/entry_probe.cpp")
add_custom_command(OUTPUT "${BOOT_ENTRY_OUTPUT}"
    COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/build_scripts/instrument_boot_entry.py"
        "${BOOT_ENTRY_SOURCE}" "${BOOT_ENTRY_OUTPUT}"
    DEPENDS "${BOOT_ENTRY_SOURCE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/build_scripts/instrument_boot_entry.py"
    VERBATIM)
add_executable(fate_boot_chain
    "${CMAKE_CURRENT_SOURCE_DIR}/apps/boot_chain/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/boot_chain_probe.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/elf.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/provenance.cpp"
    "${BOOT_ENTRY_OUTPUT}")
target_include_directories(fate_boot_chain PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(fate_boot_chain SYSTEM PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp"
    "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/src/lib/Kernel")
target_link_libraries(fate_boot_chain PRIVATE bcrypt)
if(MSVC)
    target_compile_options(fate_boot_chain PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /external:W0)
    target_link_options(fate_boot_chain PRIVATE /DEBUG)
endif()
enable_testing()
option(FATE_TEST_REAL_RUNTIME "Link the existing real runtime for lifetime verification" OFF)
if(FATE_TEST_REAL_RUNTIME)
    set(RUNTIME_BUILD "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/build")
    add_executable(fate_runtime_lifetime "${CMAKE_CURRENT_SOURCE_DIR}/apps/boot_chain/runtime_lifetime.cpp")
    target_sources(fate_runtime_lifetime PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/unsupported_hle.cpp")
    target_include_directories(fate_runtime_lifetime SYSTEM PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include")
    target_compile_options(fate_runtime_lifetime PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
    target_link_libraries(fate_runtime_lifetime PRIVATE
        "${RUNTIME_BUILD}/ps2xRuntime/$<CONFIG>/ps2_runtime.lib"
        "${RUNTIME_BUILD}/ps2xIOP/$<CONFIG>/ps2_iop.lib"
        "${RUNTIME_BUILD}/_deps/raylib-build/raylib/$<CONFIG>/raylib.lib"
        bcrypt secur32 ws2_32 user32 advapi32 ole32 shell32 opengl32 glu32 winmm gdi32)
    set(FFMPEG_BIN "${RUNTIME_BUILD}/ThirdParty/ffmpeg-prefix/src/ffmpeg_external/bin")
    foreach(component avcodec avformat avutil swresample swscale)
        target_link_libraries(fate_runtime_lifetime PRIVATE "${FFMPEG_BIN}/${component}.lib")
    endforeach()
    file(GLOB EXISTING_FFMPEG_DLLS "${FFMPEG_BIN}/*.dll")
    foreach(dll IN LISTS EXISTING_FFMPEG_DLLS)
        add_custom_command(TARGET fate_runtime_lifetime POST_BUILD
            COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${dll}" "$<TARGET_FILE_DIR:fate_runtime_lifetime>"
            VERBATIM)
    endforeach()
    add_test(NAME runtime_real_object_lifetime COMMAND fate_runtime_lifetime)
    add_library(fate_host_lifetime_compile OBJECT "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
    target_include_directories(fate_host_lifetime_compile PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
    target_include_directories(fate_host_lifetime_compile SYSTEM PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include")
    target_compile_options(fate_host_lifetime_compile PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
endif()
add_test(NAME boot_chain_loader_contract COMMAND fate_boot_chain --self-test)
add_test(NAME boot_chain_retail_first_divergence
    COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_CURRENT_SOURCE_DIR}/tests/integration/check_boot_chain.py"
        "$<TARGET_FILE:fate_boot_chain>"
        "${CMAKE_CURRENT_BINARY_DIR}/test-evidence/$<CONFIG>")
