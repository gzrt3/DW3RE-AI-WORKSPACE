#include "fate/formats/audio_iecs.hpp"
#include <algorithm>
#include <stdexcept>

namespace fate::formats::audio {

IecsResourceView inspect_iecs_resource(std::span<const std::byte> bytes) {
    BoundedCursor cur(bytes);
    cur.require_range(0U, 64U, "IECS_INVALID: payload smaller than 64 bytes");
    const std::uint32_t magic = cur.read_u32_le(0U);
    if (magic != kMagicIecs) {
        throw std::runtime_error("IECS_INVALID: bad magic (expected 'IECS')");
    }
    IecsResourceView v{};
    v.magic = magic;
    v.payload_size = bytes.size();
    for (std::size_t i = 0; i < v.prefix_words.size(); ++i) {
        v.prefix_words[i] = cur.read_u32_le(i * 4U);
    }

    const std::size_t scan_limit = std::min<std::size_t>(bytes.size() - 4U, 4096U);
    for (std::size_t off = 0; off <= scan_limit; off += 4U) {
        const std::uint32_t w = cur.read_u32_le(off);
        if (w == kTagVers || w == kTagHead || w == kTagProg || w == kTagSamp || w == kTagVagi) {
            v.discovered_tags.push_back(IecsTagHit{w, off});
        }
    }
    v.signature_status = EvidenceStatus::Fact;
    v.adpcm_stream_status = EvidenceStatus::Unknown;
    return v;
}

} // namespace fate::formats::audio
