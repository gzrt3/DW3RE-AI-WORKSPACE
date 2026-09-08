#include "DW3RE_Gen6Provider.h"
#include "DW3RE_LZSS.h"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>
#include <fstream>

DW3RE_Gen6Provider::DW3RE_Gen6Provider(DW3RE_Namespace ns, 
                                       const std::string& elf_path, 
                                       uint64_t elf_table_offset, 
                                       uint32_t table_count, 
                                       const std::string& bns_path)
    : m_ns(ns),
      m_elf_path(elf_path),
      m_elf_table_offset(elf_table_offset),
      m_table_count(table_count),
      m_bns_path(bns_path),
      m_bns_file_handle(INVALID_HANDLE_VALUE),
      m_initialized(false)
{
    if (ns == DW3RE_Namespace::DW3_BASE) {
        m_name = "DW3_BASE_PROVIDER";
    } else if (ns == DW3RE_Namespace::DW3_XL) {
        m_name = "DW3_XL_PROVIDER";
    } else {
        m_name = "DW3_OVERLAY_PROVIDER";
    }
}

DW3RE_Gen6Provider::~DW3RE_Gen6Provider() {
    if (m_bns_file_handle != INVALID_HANDLE_VALUE && m_bns_file_handle != nullptr) {
        CloseHandle(static_cast<HANDLE>(m_bns_file_handle));
        m_bns_file_handle = INVALID_HANDLE_VALUE;
    }
}

const char* DW3RE_Gen6Provider::GetProviderName() const {
    return m_name.c_str();
}

bool DW3RE_Gen6Provider::Initialize() {
    std::lock_guard<std::mutex> lock(m_io_mutex);
    if (m_initialized) return true;

    // 1. Read Resource Table from ELF
    std::ifstream elf_file(m_elf_path, std::ios::binary);
    if (!elf_file.is_open()) {
        std::cerr << "[" << m_name << "] Error: Failed to open ELF: " << m_elf_path << "\n";
        return false;
    }

    elf_file.seekg(static_cast<std::streamoff>(m_elf_table_offset), std::ios::beg);
    if (!elf_file.good()) {
        std::cerr << "[" << m_name << "] Error: Failed to seek to table offset 0x" 
                  << std::hex << m_elf_table_offset << std::dec << "\n";
        return false;
    }

    m_table.resize(m_table_count);
    size_t table_bytes = m_table_count * sizeof(DW3RE_Descriptor16);
    elf_file.read(reinterpret_cast<char*>(m_table.data()), table_bytes);
    if (!elf_file.good()) {
        std::cerr << "[" << m_name << "] Error: Failed to read " << table_bytes << " bytes of table.\n";
        m_table.clear();
        return false;
    }
    elf_file.close();

    // 2. Open BNS Container via Win32 File API (Read-only, shared read)
    HANDLE hFile = CreateFileA(m_bns_path.c_str(),
                               GENERIC_READ,
                               FILE_SHARE_READ,
                               nullptr,
                               OPEN_EXISTING,
                               FILE_ATTRIBUTE_NORMAL,
                               nullptr);

    if (hFile == INVALID_HANDLE_VALUE) {
        std::cerr << "[" << m_name << "] Error: Failed to open BNS container: " << m_bns_path 
                  << " (GLE: " << GetLastError() << ")\n";
        return false;
    }

    m_bns_file_handle = hFile;
    m_initialized = true;
    return true;
}

bool DW3RE_Gen6Provider::HasResource(DW3RE_Namespace ns, uint32_t resource_id) const {
    if (ns != m_ns || !m_initialized) return false;
    return (resource_id < m_table.size());
}

bool DW3RE_Gen6Provider::GetDescriptor(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_Descriptor16* out_desc) const {
    if (ns != m_ns || !m_initialized || resource_id >= m_table.size() || out_desc == nullptr) {
        return false;
    }
    *out_desc = m_table[resource_id];
    return true;
}

bool DW3RE_Gen6Provider::LoadResource(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_ResourceBuffer* out_buf) {
    if (ns != m_ns || !m_initialized || resource_id >= m_table.size() || out_buf == nullptr) {
        return false;
    }

    const DW3RE_Descriptor16& desc = m_table[resource_id];
    if (desc.payload_size == 0) {
        out_buf->resource_id = resource_id;
        out_buf->ns = ns;
        out_buf->data.clear();
        out_buf->was_compressed = false;
        out_buf->uncompressed_size = 0;
        return true;
    }

    // Verify sector math
    uint32_t expected_sectors = (desc.payload_size + 2047) >> 11;
    if (expected_sectors != desc.sector_count) {
        std::cerr << "[" << m_name << "] Warning: Resource " << resource_id 
                  << " sector_count mismatch: table=" << desc.sector_count 
                  << " expected=" << expected_sectors << "\n";
    }

    // Seek and read from BNS container
    uint64_t file_offset = static_cast<uint64_t>(desc.sector_offset) * 2048ULL;
    LARGE_INTEGER li;
    li.QuadPart = static_cast<LONGLONG>(file_offset);

    std::vector<uint8_t> raw_data(desc.payload_size);

    {
        std::lock_guard<std::mutex> lock(m_io_mutex);
        if (!SetFilePointerEx(static_cast<HANDLE>(m_bns_file_handle), li, nullptr, FILE_BEGIN)) {
            std::cerr << "[" << m_name << "] Error: SetFilePointerEx failed for offset " 
                      << file_offset << " (Resource " << resource_id << ")\n";
            return false;
        }

        DWORD bytesRead = 0;
        if (!ReadFile(static_cast<HANDLE>(m_bns_file_handle), raw_data.data(), desc.payload_size, &bytesRead, nullptr) ||
            bytesRead != desc.payload_size) {
            std::cerr << "[" << m_name << "] Error: ReadFile failed or partial read: " 
                      << bytesRead << " / " << desc.payload_size << " bytes\n";
            return false;
        }
    }

    // Check compression
    if (DW3RE_LZSS::IsCompressed(raw_data.data(), raw_data.size())) {
        std::vector<uint8_t> decomp_data;
        if (DW3RE_LZSS::Decompress(raw_data.data(), raw_data.size(), decomp_data)) {
            out_buf->resource_id = resource_id;
            out_buf->ns = ns;
            out_buf->was_compressed = true;
            out_buf->uncompressed_size = static_cast<uint32_t>(decomp_data.size());
            out_buf->data = std::move(decomp_data);
            return true;
        } else {
            std::cerr << "[" << m_name << "] Error: LZSS Decompression failed for resource " 
                      << resource_id << "\n";
            return false;
        }
    } else {
        out_buf->resource_id = resource_id;
        out_buf->ns = ns;
        out_buf->was_compressed = false;
        out_buf->uncompressed_size = desc.payload_size;
        out_buf->data = std::move(raw_data);
        return true;
    }
}

// DW3RE_ResourceManager implementation
DW3RE_ResourceManager::DW3RE_ResourceManager() = default;
DW3RE_ResourceManager::~DW3RE_ResourceManager() = default;

bool DW3RE_ResourceManager::RegisterProvider(std::shared_ptr<IDW3REResourceProvider> provider) {
    if (!provider) return false;
    m_providers.push_back(provider);
    return true;
}

bool DW3RE_ResourceManager::GetDescriptor(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_Descriptor16& out_desc) {
    for (auto& prov : m_providers) {
        if (prov->HasResource(ns, resource_id)) {
            return prov->GetDescriptor(ns, resource_id, &out_desc);
        }
    }
    return false;
}

bool DW3RE_ResourceManager::Load(DW3RE_Namespace ns, uint32_t resource_id, DW3RE_ResourceBuffer& out_buf) {
    m_metrics.total_requests++;
    for (auto& prov : m_providers) {
        if (prov->HasResource(ns, resource_id)) {
            DW3RE_Descriptor16 desc;
            prov->GetDescriptor(ns, resource_id, &desc);
            m_metrics.total_bytes_read += desc.payload_size;

            if (prov->LoadResource(ns, resource_id, &out_buf)) {
                if (out_buf.was_compressed) {
                    m_metrics.compressed_loads++;
                    m_metrics.total_bytes_decompressed += out_buf.uncompressed_size;
                } else {
                    m_metrics.raw_loads++;
                }
                return true;
            }
            return false;
        }
    }
    return false;
}

#include <filesystem>

std::unique_ptr<IDW3REResourceProvider> CreateDW3ResourceProvider() {
    const std::vector<std::string> elf_candidates = {
        "Musou/DW3_native_spike/original/SLUS_202.77",
        "../../../Musou/DW3_native_spike/original/SLUS_202.77",
        "../../Musou/DW3_native_spike/original/SLUS_202.77",
        "../Musou/DW3_native_spike/original/SLUS_202.77",
        "D:/Juegos/Playstation/Playstation 2/Musou/DW3_native_spike/original/SLUS_202.77"
    };
    const std::vector<std::string> bns_candidates = {
        "Musou/DW3_native_spike/original/linkdata.bns",
        "../../../Musou/DW3_native_spike/original/linkdata.bns",
        "../../Musou/DW3_native_spike/original/linkdata.bns",
        "../Musou/DW3_native_spike/original/linkdata.bns",
        "D:/Juegos/Playstation/Playstation 2/Musou/DW3_native_spike/original/linkdata.bns"
    };

    std::string found_elf;
    for (const auto& p : elf_candidates) {
        if (std::filesystem::exists(p)) {
            found_elf = p;
            break;
        }
    }
    std::string found_bns;
    for (const auto& p : bns_candidates) {
        if (std::filesystem::exists(p)) {
            found_bns = p;
            break;
        }
    }

    if (found_elf.empty() || found_bns.empty()) {
        std::cerr << "[DW3RE_Gen6Provider] Error: Could not locate SLUS_202.77 or linkdata.bns\n";
        return nullptr;
    }

    // Dynamic address validation: verify descriptor table structure in ELF
    uint64_t verified_table_offset = 0;
    constexpr uint32_t kExpectedCount = 2123;

    std::ifstream elf(found_elf, std::ios::binary);
    if (!elf.is_open()) return nullptr;

    const uint64_t candidate_offsets[] = { 0x1FF8D0 };
    for (uint64_t off : candidate_offsets) {
        elf.seekg(static_cast<std::streamoff>(off));
        DW3RE_Descriptor16 test_desc[4];
        elf.read(reinterpret_cast<char*>(test_desc), sizeof(test_desc));
        if (elf.gcount() == sizeof(test_desc)) {
            if (test_desc[0].sector_offset == 0 &&
                test_desc[0].payload_size > 0 &&
                test_desc[0].sector_count == ((test_desc[0].payload_size + 2047) >> 11) &&
                test_desc[1].sector_offset >= test_desc[0].sector_count) {
                verified_table_offset = off;
                break;
            }
        }
    }
    elf.close();

    if (verified_table_offset == 0) {
        std::cerr << "[DW3RE_Gen6Provider] Error: Failed to validate descriptor table in ELF\n";
        return nullptr;
    }

    auto prov = std::make_unique<DW3RE_Gen6Provider>(
        DW3RE_Namespace::DW3_BASE,
        found_elf,
        verified_table_offset,
        kExpectedCount,
        found_bns
    );

    if (!prov->Initialize()) {
        std::cerr << "[DW3RE_Gen6Provider] Error: Failed to initialize provider\n";
        return nullptr;
    }

    return prov;
}

