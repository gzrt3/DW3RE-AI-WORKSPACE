cmake_minimum_required(VERSION 3.24)
project(fate_soldiers_3 LANGUAGES CXX)
# Configure output directories to a space-free path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/NativeInput.cmake")
option(FATE_NATIVE_INPUT_ONLY "Configure native input contracts without game/runtime dependencies" OFF)
if(FATE_NATIVE_INPUT_ONLY)
    enable_testing()
    add_test(NAME native_input_contract COMMAND fate_native_input_contract)
    return()
endif()
option(FATE_NATIVE_PRESENTER_ONLY "Build host presentation contracts without the translated game corpus" OFF)
if(FATE_NATIVE_PRESENTER_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/NativePresenterContract.cmake")
    return()
endif()
option(FATE_BOOT_CONTINUATIONS_ONLY "Build focused original-continuation contracts" OFF)
option(FATE_DMA_INIT_ONLY "Build original DMA initialization contracts" OFF)
option(FATE_GRAPHICS_INIT_ONLY "Build original graphics initialization contracts" OFF)
option(FATE_WAITSEMA_ONLY "Build original post-WaitSema continuation contracts" OFF)
option(FATE_IRQ_RETURN_ONLY "Build original IRQ return contracts" OFF)
option(FATE_PAD_BOOT_ONLY "Build original pad boot continuation contracts" OFF)
if(FATE_PAD_BOOT_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/PadBootContract.cmake")
    return()
endif()
if(FATE_IRQ_RETURN_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/IrqReturnContract.cmake")
    return()
endif()
if(FATE_WAITSEMA_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/WaitSemaContract.cmake")
    return()
endif()
if(FATE_GRAPHICS_INIT_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/GraphicsInitContract.cmake")
    return()
endif()
if(FATE_DMA_INIT_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/DmaInitContract.cmake")
    return()
endif()
if(FATE_BOOT_CONTINUATIONS_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/BootContinuationsContract.cmake")
    return()
endif()
option(FATE_BOOT_CHAIN_ONLY "Build bounded retail entry diagnostics without graphics or corpus rebuild" OFF)
if(FATE_BOOT_CHAIN_ONLY)
    include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/BootChainDiagnostic.cmake")
    return()
endif()
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

if(MSVC)
    add_compile_options(/W4 /WX /permissive- /EHsc /utf-8 /Od)
endif()

file(GLOB_RECURSE RECOMP_SOURCES "src/recomp/*.cpp")

set(MONSTER_FILES
    "src/recomp/FUN_0019b8d0_0x19b8d0_master.cpp"
    "src/recomp/FUN_0019b910_0x19b910_master.cpp"
)

set_source_files_properties(${MONSTER_FILES} PROPERTIES 
    SKIP_UNITY_BUILD_INCLUSION ON
    COMPILE_FLAGS "/Od /bigobj /wd4100 /wd4102 /wd4127 /wd4310 /wd4702"
)

# Decompiled MIPS functions retain fixed ABI parameters, labels, and compile-time
# control flow, and translated instructions after explicit returns. These
# warning patterns are expected in generated translations; keep strict warnings
# enabled for host/runtime code and do not suppress narrowing.
set(_recomp_source_index 0)
foreach(_recomp_source IN LISTS RECOMP_SOURCES)
    math(EXPR _recomp_group_index "${_recomp_source_index} / 100")
    set_source_files_properties(${_recomp_source} PROPERTIES
        UNITY_GROUP "recomp_${_recomp_group_index}"
    )
    math(EXPR _recomp_source_index "${_recomp_source_index} + 1")
endforeach()

add_library(fate_recomp_core STATIC
    ${RECOMP_SOURCES}
    "src/unsupported_hle.cpp"
    "src/dispatcher.cpp"
)

target_include_directories(fate_recomp_core PUBLIC
    "include"
    "src"
    "src/recomp"
    "tools/PS2Recomp/ps2xRuntime/include"
    "tools/PS2Recomp/ps2xIOP/include"
    "tools/PS2Recomp/ps2xRecomp/include"
    "tools/PS2Recomp/ps2xRuntime/src/lib/Kernel"
)

set_target_properties(fate_recomp_core PROPERTIES
    UNITY_BUILD ON
    UNITY_BUILD_BATCH_SIZE 100
    UNITY_BUILD_MODE GROUP
    UNITY_BUILD_CODE_BEFORE_INCLUDE "#pragma warning(push)\n#pragma warning(disable: 4100 4102 4127 4310 4702)"
    UNITY_BUILD_CODE_AFTER_INCLUDE "#pragma warning(pop)"
)
set_source_files_properties("src/dispatcher.cpp" PROPERTIES
    SKIP_UNITY_BUILD_INCLUSION ON
)
if(MSVC)
    set_source_files_properties("src/unsupported_hle.cpp" PROPERTIES
        SKIP_UNITY_BUILD_INCLUSION ON COMPILE_OPTIONS "/W4;/WX")
endif()

add_executable(fate_game
    "src/pad_boot_continuation.cpp"
    "src/irq_return_continuation.cpp"
    "src/main.cpp"
    "src/native_presenter.cpp"
    "src/native_iop_boot.cpp"
    "src/generated_resume_catalog.cpp"
    "src/provenance.cpp"
    "src/boot_continuations.cpp"
    "src/dma_init_continuation.cpp"
    "src/vif_init_continuation.cpp"
    "src/graphics_init_continuation.cpp"
    "src/waitsema_continuation.cpp"
    "src/sif_irq_continuations.cpp"
    "src/boot_syscall_handlers.cpp"
    "src/boot_thread_syscalls.cpp"
    "src/elf.cpp"
    "src/dispatcher.cpp"
    "src/input/pad_bridge.cpp"
    "src/audio/spu_bridge.cpp"
    "src/sdl_window.cpp"
    "src/gs_wrapper.cpp"
    "src/patch_engine.cpp"
    "src/vfs/vfs_hook.cpp"
)

target_include_directories(fate_game PRIVATE "tools/PS2Recomp/ps2xRuntime/src/lib")

if(MSVC)
    # R5900Context intentionally uses alignas(16). MSVC reports the resulting
    # architectural tail padding as C4324; retain the ABI layout while keeping
    # /W4 /WX enabled for all other warnings.
    target_compile_options(fate_recomp_core PRIVATE /wd4324)
    target_compile_options(fate_game PRIVATE /wd4324)
    # Translated register macros check constant register indices. Keep all
    # other /W4 /WX diagnostics on these recovered guest instructions.
    set_source_files_properties("src/boot_continuations.cpp" "src/dma_init_continuation.cpp" "src/vif_init_continuation.cpp" "src/sif_irq_continuations.cpp" "src/boot_syscall_handlers.cpp" "src/boot_thread_syscalls.cpp" PROPERTIES COMPILE_OPTIONS "/wd4127")
    set_source_files_properties("src/graphics_init_continuation.cpp" "src/waitsema_continuation.cpp" "src/pad_boot_continuation.cpp" PROPERTIES COMPILE_OPTIONS "/wd4127")
    # Preserved generated tail transfers retain unreachable fallthrough labels.
    set_source_files_properties("src/sif_irq_continuations.cpp" PROPERTIES COMPILE_OPTIONS "/wd4127;/wd4702")
endif()

find_package(SDL2 2.0.18 REQUIRED)
target_link_libraries(fate_game PRIVATE fate_recomp_core SDL2::SDL2)
include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(fate_game)

include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/NativePresenterContract.cmake")

add_executable(fate_host_dispatch_contract EXCLUDE_FROM_ALL
    "tests/integration/host_dispatch_contract.cpp"
)
target_include_directories(fate_host_dispatch_contract PRIVATE "include")
target_include_directories(fate_host_dispatch_contract SYSTEM PRIVATE
    "tools/PS2Recomp/ps2xRuntime/include"
    "tools/PS2Recomp/ps2xIOP/include"
    "tools/PS2Recomp/ps2xRuntime/src/lib/Kernel"
)
target_link_libraries(fate_host_dispatch_contract PRIVATE fate_recomp_core)
fate_link_existing_runtime(fate_host_dispatch_contract)
if(MSVC)
    target_compile_options(fate_host_dispatch_contract PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /wd4324)
endif()

add_executable(fate_elf_loader_contract EXCLUDE_FROM_ALL
    "tests/integration/host_elf_loader_contract.cpp"
    "src/elf.cpp"
)
target_include_directories(fate_elf_loader_contract PRIVATE "include")
if(MSVC)
    target_compile_options(fate_elf_loader_contract PRIVATE /W4 /WX /permissive- /EHsc /utf-8)
endif()
