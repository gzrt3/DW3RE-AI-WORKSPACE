cmake_minimum_required(VERSION 3.24)
project(dw3_combined_session LANGUAGES CXX)
get_filename_component(REPOSITORY "${CMAKE_CURRENT_SOURCE_DIR}/../.." ABSOLUTE)
set(HOST_SOURCE "${REPOSITORY}" CACHE PATH "Native host source, excludes all translated guest code")
add_library(combined_session STATIC session.cpp store_win32.cpp
  "${HOST_SOURCE}/src/vfs/extracted.cpp" "${HOST_SOURCE}/src/vfs/extracted_sectors.cpp"
  "${HOST_SOURCE}/src/provenance.cpp" "${HOST_SOURCE}/src/elf.cpp"
  "${HOST_SOURCE}/src/formats/linkdata.cpp" "${HOST_SOURCE}/src/formats/tim2.cpp")
target_include_directories(combined_session PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" "${HOST_SOURCE}/include")
target_compile_features(combined_session PUBLIC cxx_std_20)
target_link_libraries(combined_session PUBLIC bcrypt)
target_compile_definitions(combined_session PRIVATE NOMINMAX WIN32_LEAN_AND_MEAN)
add_executable(combined_session_contract contracts.cpp)
target_link_libraries(combined_session_contract PRIVATE combined_session)
target_include_directories(combined_session_contract PRIVATE "${HOST_SOURCE}/tests/integration")
add_executable(sector_handle_contract sector_handle_contract.cpp)
target_link_libraries(sector_handle_contract PRIVATE combined_session)
target_include_directories(sector_handle_contract PRIVATE "${HOST_SOURCE}/tests/integration")
enable_testing()
find_package(Python3 3.12 REQUIRED COMPONENTS Interpreter)
add_test(NAME combined_session COMMAND "${Python3_EXECUTABLE}"
  "${CMAKE_CURRENT_SOURCE_DIR}/run_contract.py" --executable "$<TARGET_FILE:combined_session_contract>"
  --evidence "${CMAKE_BINARY_DIR}/contract_evidence")
foreach(scenario IN ITEMS lsn bytes edition path forged)
  add_test(NAME sector_handle_${scenario} COMMAND "${Python3_EXECUTABLE}"
    "${CMAKE_CURRENT_SOURCE_DIR}/run_contract.py" --executable "$<TARGET_FILE:sector_handle_contract>"
    --evidence "${CMAKE_BINARY_DIR}/contract_evidence" --scenario "${scenario}")
endforeach()
add_test(NAME capture_contracts COMMAND "${Python3_EXECUTABLE}" -B
  "${CMAKE_CURRENT_SOURCE_DIR}/../pcsx2_bridge/capture_contracts.py")
add_test(NAME pairing_contracts COMMAND "${Python3_EXECUTABLE}" -B
  "${CMAKE_CURRENT_SOURCE_DIR}/../pcsx2_bridge/pairing_contracts.py")
