#include "fate/formats/stage_gb2_cb2.hpp"
#include <algorithm>
#include <stdexcept>

namespace fate::formats::stage {

StageResourceView inspect_stage_resource(std::span<const std::byte> bytes) {
    BoundedCursor cur(bytes);
    cur.require_range(0U, 16U, "STAGE_INVALID: payload smaller than 16 bytes");
    const std::uint32_t magic = cur.read_u32_le(0U);
    StageResourceView v{};
    if (magic == kMagicGb2) {
        v.kind = StageFormatKind::Gb2;
    } else if (magic == kMagicCb2) {
        v.kind = StageFormatKind::Cb2;
    } else {
        throw std::runtime_error("STAGE_INVALID: unexpected magic (expected 'gb2\\0' or 'cb2\\0')");
    }
    v.magic = magic;
    v.word1_version_like = cur.read_u32_le(4U);
    v.payload_size = bytes.size();
    v.header_word_count = std::min<std::size_t>(bytes.size() / 4U, v.header_words.size());
    for (std::size_t i = 0; i < v.header_word_count; ++i) {
        v.header_words[i] = cur.read_u32_le(i * 4U);
    }
    v.signature_status = EvidenceStatus::Fact;
    v.internal_grid_status = EvidenceStatus::Unknown;
    return v;
}

std::uint8_t StageUnitSlot32::read_u8(const std::size_t offset) const {
    return BoundedCursor(raw).read_u8(offset);
}

std::uint16_t StageUnitSlot32::read_u16_le(const std::size_t offset) const {
    return BoundedCursor(raw).read_u16_le(offset);
}

StageUnitSlot32 parse_stage_unit_slot32(
    const std::span<const std::byte> bytes,
    const std::size_t offset) {
    const BoundedCursor cursor(bytes);
    const auto source = cursor.subspan(offset, kStageUnitSlot32Size,
        "STAGE_SLOT32_OOB: record extends beyond payload");
    StageUnitSlot32 slot{};
    std::copy(source.begin(), source.end(), slot.raw.begin());
    slot.field_semantics_status = EvidenceStatus::Unknown;
    return slot;
}

std::vector<StageUnitSlot32> parse_stage_unit_slots32(
    const std::span<const std::byte> bytes,
    const std::size_t offset,
    const std::size_t count) {
    const std::size_t byte_count = checked_mul(count, kStageUnitSlot32Size,
        "STAGE_SLOT32_OVERFLOW: count times record stride");
    const BoundedCursor cursor(bytes);
    cursor.require_range(offset, byte_count,
        "STAGE_SLOT32_OOB: table extends beyond payload");
    std::vector<StageUnitSlot32> slots;
    slots.reserve(count);
    for (std::size_t index = 0; index < count; ++index) {
        const std::size_t record_offset = checked_add(offset,
            checked_mul(index, kStageUnitSlot32Size,
                "STAGE_SLOT32_OVERFLOW: record index times stride"),
            "STAGE_SLOT32_OVERFLOW: record offset");
        slots.push_back(parse_stage_unit_slot32(bytes, record_offset));
    }
    return slots;
}

} // namespace fate::formats::stage
