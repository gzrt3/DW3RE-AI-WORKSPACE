#pragma once

#include "DW3RE_ResourceAPI.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <mutex>
#include <memory>

class DW3RE_Gen6Provider : public IDW3REResourceProvider {
public:
    DW3RE_Gen6Provider(DW3RE_Namespace ns, 
                       const std::string& elf_path, 
                       uint64_t elf_table_offset, 
                       uint32_t table_count, 
                       const std::string& bns_path);
    ~DW3RE_Gen6Provider() override;

    const char* GetProviderName() const override;
    bool HasResource(DW3RE_Namespace ns, uint32_t resource_id) const override;
    bool GetDescriptor(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_Descriptor16* out_desc) const override;
    bool LoadResource(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_ResourceBuffer* out_buf) override;

    size_t GetResourceCount() const { return m_table.size(); }
    DW3RE_Namespace GetNamespace() const { return m_ns; }
    bool Initialize();

private:
    DW3RE_Namespace m_ns;
    std::string m_name;
    std::string m_elf_path;
    uint64_t m_elf_table_offset;
    uint32_t m_table_count;
    std::string m_bns_path;

    std::vector<DW3RE_Descriptor16> m_table;
    void* m_bns_file_handle; // Windows HANDLE
    std::mutex m_io_mutex;
    bool m_initialized;
};

// High-level Resource Manager that aggregates providers and handles resolution
class DW3RE_ResourceManager {
public:
    DW3RE_ResourceManager();
    ~DW3RE_ResourceManager();

    bool RegisterProvider(std::shared_ptr<IDW3REResourceProvider> provider);
    bool Load(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_ResourceBuffer& out_buf);
    bool GetDescriptor(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_Descriptor16& out_desc);

    // Metrics & Statistics
    struct Metrics {
        uint64_t total_requests = 0;
        uint64_t raw_loads = 0;
        uint64_t compressed_loads = 0;
        uint64_t total_bytes_read = 0;
        uint64_t total_bytes_decompressed = 0;
    };
    const Metrics& GetMetrics() const { return m_metrics; }

private:
    std::vector<std::shared_ptr<IDW3REResourceProvider>> m_providers;
    Metrics m_metrics;
};

// Resolves and instantiates the canonical game resource provider for DW3
std::unique_ptr<IDW3REResourceProvider> CreateDW3ResourceProvider();

