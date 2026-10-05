add_executable(irq_return_contract
    "${CMAKE_SOURCE_DIR}/tests/integration/irq_return_contract.cpp"
    "${CMAKE_SOURCE_DIR}/src/irq_return_continuation.cpp"
    "${CMAKE_SOURCE_DIR}/src/elf.cpp")
target_include_directories(irq_return_contract PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_include_directories(irq_return_contract SYSTEM PRIVATE
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xRuntime/include"
    "${CMAKE_SOURCE_DIR}/tools/PS2Recomp/ps2xIOP/include")
if(MSVC)
    target_compile_options(irq_return_contract PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /external:W0 /wd4324)
endif()
include("${CMAKE_SOURCE_DIR}/cmake/ExistingRuntime.cmake")
fate_link_existing_runtime(irq_return_contract)
