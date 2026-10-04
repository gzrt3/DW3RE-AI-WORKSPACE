#include "fate/formats/mot_anim.hpp"
#include <algorithm>

namespace fate::formats::mot_anim {

MotionResourceView inspect_motion_resource(std::span<const std::byte> bytes) {
    BoundedCursor cur(bytes);
    cur.require_range(0U, 8U, "MOT_ANIM_INVALID: buffer smaller than 8-byte prefix");
    MotionResourceView v{};
    v.first_word = cur.read_u32_le(0U);
    v.second_word = cur.read_u32_le(4U);
    v.payload_size = bytes.size();
    v.prefix_length = std::min<std::size_t>(bytes.size(), v.prefix_bytes.size());
    for (std::size_t i = 0; i < v.prefix_length; ++i) {
        v.prefix_bytes[i] = static_cast<std::uint8_t>(bytes[i]);
    }
    v.container_layout_status = EvidenceStatus::Unknown;
    return v;
}

} // namespace fate::formats::mot_anim
