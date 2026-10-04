#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>

#include <algorithm>
#include <array>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <vector>

#include "fate/provenance.hpp"

namespace fate::provenance {
namespace {

class AlgorithmHandle {
public:
    AlgorithmHandle() {
        const NTSTATUS status = BCryptOpenAlgorithmProvider(&handle_, BCRYPT_SHA256_ALGORITHM, nullptr, 0);
        if (!BCRYPT_SUCCESS(status)) {
            throw std::runtime_error("BCryptOpenAlgorithmProvider(SHA-256) failed");
        }
    }

    ~AlgorithmHandle() {
        if (handle_ != nullptr) {
            BCryptCloseAlgorithmProvider(handle_, 0);
        }
    }

    AlgorithmHandle(const AlgorithmHandle&) = delete;
    AlgorithmHandle& operator=(const AlgorithmHandle&) = delete;

    [[nodiscard]] BCRYPT_ALG_HANDLE get() const noexcept { return handle_; }

private:
    BCRYPT_ALG_HANDLE handle_{};
};

class HashHandle {
public:
    explicit HashHandle(BCRYPT_ALG_HANDLE algorithm) {
        DWORD object_size{};
        DWORD returned{};
        NTSTATUS status = BCryptGetProperty(
            algorithm,
            BCRYPT_OBJECT_LENGTH,
            reinterpret_cast<PUCHAR>(&object_size),
            sizeof(object_size),
            &returned,
            0);
        if (!BCRYPT_SUCCESS(status)) {
            throw std::runtime_error("BCryptGetProperty(BCRYPT_OBJECT_LENGTH) failed");
        }
        object_.resize(object_size);
        status = BCryptCreateHash(
            algorithm,
            &handle_,
            reinterpret_cast<PUCHAR>(object_.data()),
            object_size,
            nullptr,
            0,
            0);
        if (!BCRYPT_SUCCESS(status)) {
            throw std::runtime_error("BCryptCreateHash failed");
        }
    }

    ~HashHandle() {
        if (handle_ != nullptr) {
            BCryptDestroyHash(handle_);
        }
    }

    HashHandle(const HashHandle&) = delete;
    HashHandle& operator=(const HashHandle&) = delete;

    void append(const std::uint8_t* data, ULONG size) {
        if (size == 0) {
            return;
        }
        const NTSTATUS status = BCryptHashData(handle_, const_cast<PUCHAR>(data), size, 0);
        if (!BCRYPT_SUCCESS(status)) {
            throw std::runtime_error("BCryptHashData failed");
        }
    }

    [[nodiscard]] std::array<std::uint8_t, 32> finish() {
        std::array<std::uint8_t, 32> digest{};
        const NTSTATUS status = BCryptFinishHash(handle_, digest.data(), static_cast<ULONG>(digest.size()), 0);
        if (!BCRYPT_SUCCESS(status)) {
            throw std::runtime_error("BCryptFinishHash failed");
        }
        return digest;
    }

private:
    BCRYPT_HASH_HANDLE handle_{};
    std::vector<std::uint8_t> object_;
};

[[nodiscard]] std::string to_hex(const std::array<std::uint8_t, 32>& digest) {
    std::ostringstream output;
    output << std::hex << std::setfill('0');
    for (const std::uint8_t value : digest) {
        output << std::setw(2) << static_cast<unsigned int>(value);
    }
    return output.str();
}

[[nodiscard]] std::string normalized_hash(const std::string& value) {
    if (value.size() != 64) {
        throw std::invalid_argument("Expected SHA-256 must contain 64 hexadecimal characters");
    }
    std::string normalized = value;
    for (char& character : normalized) {
        if (!((character >= '0' && character <= '9') ||
              (character >= 'a' && character <= 'f') ||
              (character >= 'A' && character <= 'F'))) {
            throw std::invalid_argument("Expected SHA-256 contains a non-hexadecimal character");
        }
        if (character >= 'A' && character <= 'F') {
            character = static_cast<char>(character - 'A' + 'a');
        }
    }
    return normalized;
}

}

Fingerprint fingerprint(
    const std::filesystem::path& path,
    std::optional<std::uint64_t> prefix_bytes) {
    std::error_code error;
    const std::uint64_t file_size = std::filesystem::file_size(path, error);
    if (error) {
        throw std::runtime_error("Cannot stat input file: " + path.string());
    }
    const std::uint64_t bytes_to_hash = prefix_bytes.value_or(file_size);
    if (bytes_to_hash > file_size) {
        throw std::invalid_argument("Requested hash prefix exceeds file size: " + path.string());
    }

    std::ifstream input(path, std::ios::binary);
    if (!input) {
        throw std::runtime_error("Cannot open input for hashing: " + path.string());
    }

    AlgorithmHandle algorithm;
    HashHandle hash(algorithm.get());
    std::vector<std::uint8_t> buffer(1024 * 1024);
    std::uint64_t remaining = bytes_to_hash;
    while (remaining > 0) {
        const auto request = static_cast<std::streamsize>(std::min<std::uint64_t>(remaining, buffer.size()));
        input.read(reinterpret_cast<char*>(buffer.data()), request);
        const std::streamsize read_count = input.gcount();
        if (read_count <= 0) {
            throw std::runtime_error("Unexpected end of file while hashing: " + path.string());
        }
        hash.append(buffer.data(), static_cast<ULONG>(read_count));
        remaining -= static_cast<std::uint64_t>(read_count);
    }

    return Fingerprint{file_size, bytes_to_hash, to_hex(hash.finish())};
}

void verify_file(
    const std::filesystem::path& path,
    std::uint64_t expected_size,
    const std::string& expected_sha256,
    std::optional<std::uint64_t> prefix_bytes) {
    std::error_code error;
    const std::uint64_t actual_size = std::filesystem::file_size(path, error);
    if (error || actual_size != expected_size) {
        throw std::runtime_error("Input size does not match provenance record: " + path.string());
    }
    const Fingerprint actual = fingerprint(path, prefix_bytes);
    if (actual.sha256 != normalized_hash(expected_sha256)) {
        throw std::runtime_error("Input SHA-256 does not match provenance record: " + path.string());
    }
}

}