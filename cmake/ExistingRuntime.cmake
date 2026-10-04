# Link a separately built runtime. scripts/build_native.ps1 prepares it from source.
function(fate_link_existing_runtime target_name)
    set(FATE_RUNTIME_BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tools/PS2Recomp/build"
        CACHE PATH "Build directory for the vendored PS2Recomp runtime")
    set(fate_runtime_build "${FATE_RUNTIME_BUILD_DIR}")
    target_link_libraries(${target_name} PRIVATE
        "${fate_runtime_build}/ps2xRuntime/$<CONFIG>/ps2_runtime.lib"
        "${fate_runtime_build}/ps2xIOP/$<CONFIG>/ps2_iop.lib"
        "${fate_runtime_build}/_deps/raylib-build/raylib/$<CONFIG>/raylib.lib"
        bcrypt secur32 ws2_32 user32 advapi32 ole32 shell32 opengl32 glu32 winmm gdi32)
    set(fate_ffmpeg_bin "${fate_runtime_build}/ThirdParty/ffmpeg-prefix/src/ffmpeg_external/bin")
    foreach(component avcodec avformat avutil swresample swscale)
        target_link_libraries(${target_name} PRIVATE "${fate_ffmpeg_bin}/${component}.lib")
    endforeach()
    file(GLOB fate_existing_ffmpeg_dlls "${fate_ffmpeg_bin}/*.dll")
    foreach(dll IN LISTS fate_existing_ffmpeg_dlls)
        add_custom_command(TARGET ${target_name} POST_BUILD
            COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${dll}" "$<TARGET_FILE_DIR:${target_name}>"
            VERBATIM)
    endforeach()
endfunction()
