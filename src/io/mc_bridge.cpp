#include "fate/io/mc_bridge.hpp"
#include <iostream>
#include <filesystem>
#include <fstream>

#define GPR_U32(ctx, reg) ((uint32_t)(ctx)->gpr[(reg)])
#define SET_GPR_S32(ctx, reg, val) ((ctx)->gpr[(reg)] = (int32_t)(val))

namespace fate {
namespace io {

MCBridge& MCBridge::get() {
    static MCBridge instance;
    return instance;
}

void MCBridge::initialize(const std::string& saves_root) {
    m_saves_root = saves_root;
    if (!std::filesystem::exists(m_saves_root)) {
        std::filesystem::create_directories(m_saves_root);
    }
    std::cout << "[MC Bridge] Initialized mapping to: " << m_saves_root << "\n";
}

int MCBridge::sceMcInit() {
    std::cout << "[MC Bridge] sceMcInit()\n";
    return 1;
}

int MCBridge::sceMcOpen(int port, int slot, const char* filename, int flags) {
    std::cout << "[MC Bridge] sceMcOpen(" << filename << ")\n";
    
    // Create safe path
    std::filesystem::path safe_name = std::filesystem::path(filename).filename();
    std::filesystem::path full_path = std::filesystem::path(m_saves_root) / safe_name;
    
    int fd = m_next_fd++;
    m_open_files[fd] = {full_path.string(), flags};
    
    return fd;
}

int MCBridge::sceMcClose(int fd) {
    std::cout << "[MC Bridge] sceMcClose(fd=" << fd << ")\n";
    m_open_files.erase(fd);
    return 1;
}

int MCBridge::sceMcRead(int fd, void* buffer, int size) {
    auto it = m_open_files.find(fd);
    if (it == m_open_files.end()) return -1;
    
    std::ifstream file(it->second.path, std::ios::binary);
    if (file) {
        file.read(reinterpret_cast<char*>(buffer), size);
        return 1;
    }
    return -1;
}

int MCBridge::sceMcWrite(int fd, void* buffer, int size) {
    auto it = m_open_files.find(fd);
    if (it == m_open_files.end()) return -1;
    
    std::ofstream file(it->second.path, std::ios::binary);
    if (file) {
        file.write(reinterpret_cast<const char*>(buffer), size);
        return 1;
    }
    return -1;
}

int MCBridge::sceMcSync(int mode, int* cmd, int* result) {
    // Synchronous HLE resolves immediately
    if (cmd) *cmd = 0;
    if (result) *result = 1; // Success
    return 1;
}

int MCBridge::sceMcGetInfo(int port, int slot, int* type, int* free, int* format) {
    if (type) *type = 2; // PS2 Memory Card
    if (free) *free = 8000; // Fake 8MB free space in KB
    if (format) *format = 1; // Formatted
    return 1;
}

// --------------------------------------------------------
// C-Bindings for PS2Recomp
// --------------------------------------------------------
struct DummyContext {
    uint64_t gpr[32];
};

extern "C" {

void hle_sceMcInit(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int result = MCBridge::get().sceMcInit();
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcOpen(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int port = GPR_U32(ctx, 4);
    int slot = GPR_U32(ctx, 5);
    uint32_t name_addr = GPR_U32(ctx, 6);
    int flags = GPR_U32(ctx, 7);
    
    const char* name = reinterpret_cast<const char*>(&rdram[name_addr]);
    int result = MCBridge::get().sceMcOpen(port, slot, name, flags);
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcClose(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int fd = GPR_U32(ctx, 4);
    int result = MCBridge::get().sceMcClose(fd);
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcRead(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int fd = GPR_U32(ctx, 4);
    uint32_t buf_addr = GPR_U32(ctx, 5);
    int size = GPR_U32(ctx, 6);
    
    int result = MCBridge::get().sceMcRead(fd, &rdram[buf_addr], size);
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcWrite(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int fd = GPR_U32(ctx, 4);
    uint32_t buf_addr = GPR_U32(ctx, 5);
    int size = GPR_U32(ctx, 6);
    
    int result = MCBridge::get().sceMcWrite(fd, &rdram[buf_addr], size);
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcSync(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int mode = GPR_U32(ctx, 4);
    uint32_t cmd_addr = GPR_U32(ctx, 5);
    uint32_t res_addr = GPR_U32(ctx, 6);
    
    int* cmd = cmd_addr ? reinterpret_cast<int*>(&rdram[cmd_addr]) : nullptr;
    int* res = res_addr ? reinterpret_cast<int*>(&rdram[res_addr]) : nullptr;
    
    int result = MCBridge::get().sceMcSync(mode, cmd, res);
    SET_GPR_S32(ctx, 2, result);
}

void hle_sceMcGetInfo(uint8_t* rdram, DummyContext* ctx, PS2Runtime* runtime) {
    int port = GPR_U32(ctx, 4);
    int slot = GPR_U32(ctx, 5);
    uint32_t type_addr = GPR_U32(ctx, 6);
    uint32_t free_addr = GPR_U32(ctx, 7);
    uint32_t format_addr = (uint32_t)((ctx)->gpr[8]); // Assuming t0 for arg5
    
    int* type = type_addr ? reinterpret_cast<int*>(&rdram[type_addr]) : nullptr;
    int* free = free_addr ? reinterpret_cast<int*>(&rdram[free_addr]) : nullptr;
    int* format = format_addr ? reinterpret_cast<int*>(&rdram[format_addr]) : nullptr;
    
    int result = MCBridge::get().sceMcGetInfo(port, slot, type, free, format);
    SET_GPR_S32(ctx, 2, result);
}

} // extern "C"

} // namespace io
} // namespace fate
