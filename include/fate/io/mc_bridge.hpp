#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

struct R5900Context;
class PS2Runtime;

namespace fate {
namespace io {

class MCBridge {
public:
    static MCBridge& get();

    void initialize(const std::string& saves_root);
    
    // HLE replacements for PS2 Memory Card calls
    int sceMcInit();
    int sceMcOpen(int port, int slot, const char* filename, int flags);
    int sceMcClose(int fd);
    int sceMcRead(int fd, void* buffer, int size);
    int sceMcWrite(int fd, void* buffer, int size);
    int sceMcSync(int mode, int* cmd, int* result);
    int sceMcGetInfo(int port, int slot, int* type, int* free, int* format);

private:
    MCBridge() = default;
    
    std::string m_saves_root;
    int m_next_fd = 100;
    
    struct FileDescriptor {
        std::string path;
        int flags;
        // Native handle will be managed inside cpp using fstream or WINAPI
    };
    
    std::unordered_map<int, FileDescriptor> m_open_files;
};

// Global hook entry points for PS2Recomp
extern "C" {
    void hle_sceMcInit(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcOpen(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcClose(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcRead(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcWrite(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcSync(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceMcGetInfo(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
}

} // namespace io
} // namespace fate
