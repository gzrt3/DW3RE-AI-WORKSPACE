#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <stdexcept>
#include <string_view>

namespace fate::formats {

enum class EvidenceStatus : std::uint8_t {
    Fact = 0,
    Derived = 1,
    Hypothesis = 2,
    Unknown = 3
};

[[nodiscard]] constexpr std::string_view to_string(EvidenceStatus status) noexcept {
    switch (status) {
        case EvidenceStatus::Fact: return "FACT";
        case EvidenceStatus::Derived: return "DERIVED";
        case EvidenceStatus::Hypothesis: return "HYPOTHESIS";
        case EvidenceStatus::Unknown: return "UNKNOWN";
    }
    return "UNKNOWN";
}

[[nodiscard]] inline std::size_t checked_add(std::size_t a, std::size_t b, const char* err_msg) {
    if (a > static_cast<std::size_t>(-1) - b) {
        throw std::runtime_error(err_msg);
    }
    return a + b;
}

[[nodiscard]] inline std::size_t checked_mul(std::size_t a, std::size_t b, const char* err_msg) {
    if (a != 0U && b > static_cast<std::size_t>(-1) / a) {
        throw std::runtime_error(err_msg);
    }
    return a * b;
}

class BoundedCursor {
public:
    explicit constexpr BoundedCursor(std::span<const std::byte> bytes) noexcept : bytes_(bytes) {}

    [[nodiscard]] constexpr std::size_t size() const noexcept { return bytes_.size(); }

    void require_range(std::size_t offset, std::size_t count, const char* err_msg) const {
        if (offset > bytes_.size() || count > bytes_.size() - offset) {
            throw std::runtime_error(err_msg);
        }
    }

    [[nodiscard]] std::uint8_t read_u8(std::size_t offset) const {
        require_range(offset, 1U, "CURSOR_OOB: read_u8");
        return static_cast<std::uint8_t>(bytes_[offset]);
    }

    [[nodiscard]] std::uint16_t read_u16_le(std::size_t offset) const {
        require_range(offset, 2U, "CURSOR_OOB: read_u16_le");
        return static_cast<std::uint16_t>(
            static_cast<std::uint16_t>(bytes_[offset]) |
            (static_cast<std::uint16_t>(bytes_[offset + 1U]) << 8U)
        );
    }

    [[nodiscard]] std::int16_t read_i16_le(std::size_t offset) const {
        return static_cast<std::int16_t>(read_u16_le(offset));
    }

    [[nodiscard]] std::uint32_t read_u32_le(std::size_t offset) const {
        require_range(offset, 4U, "CURSOR_OOB: read_u32_le");
        return static_cast<std::uint32_t>(bytes_[offset]) |
               (static_cast<std::uint32_t>(bytes_[offset + 1U]) << 8U) |
               (static_cast<std::uint32_t>(bytes_[offset + 2U]) << 16U) |
               (static_cast<std::uint32_t>(bytes_[offset + 3U]) << 24U);
    }

    [[nodiscard]] std::int32_t read_i32_le(std::size_t offset) const {
        return static_cast<std::int32_t>(read_u32_le(offset));
    }

    [[nodiscard]] std::span<const std::byte> subspan(std::size_t offset, std::size_t count, const char* err_msg) const {
        require_range(offset, count, err_msg);
        return bytes_.subspan(offset, count);
    }

private:
    std::span<const std::byte> bytes_;
};

} // namespace fate::formats
