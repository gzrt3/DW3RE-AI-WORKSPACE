#pragma once

#include <cstdint>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstring>

namespace DW3RE {

#pragma pack(push, 1)

struct NativeMotionHeader {
    uint32_t num_joints;    // 0x00000051 (81 decimal)
    uint32_t num_channels;  // Number of animated channels in stream
    uint32_t duration;      // Duration in frames (e.g. 560, 400, 1500)
};

struct NativeChannelHeader {
    uint32_t tag;           // [0]=type(0), [1]=channel_id, [2]=floats_per_key(5), [3]=num_keys_low
    uint32_t scale_raw;     // Stride / rate scale float (0x33F00000 = 1.79e-7, 0x3F800002 = 1.0f)
    uint32_t flag1;         // Control flag / upper bits
    uint32_t flag2;         // Control flag
    uint32_t flag3;         // Control flag
    float    v0;            // Initial value at timestamp 0.0
};

struct NativeKeyframeRecord {
    float time;             // Frame timestamp (monotonically increasing)
    float m_in;             // Hermite incoming tangent slope
    float m_out;            // Hermite outgoing tangent slope
    float extra;            // Sub-precision / flags / boundary control
    float val;              // Value (Euler angle in rad or translation in world units)
};

#pragma pack(pop)

struct Keyframe {
    float time = 0.0f;
    float m_in = 0.0f;
    float m_out = 0.0f;
    float extra = 0.0f;
    float val = 0.0f;
};

struct MotionChannel {
    uint8_t channel_id = 0;
    uint8_t floats_per_key = 5;
    uint32_t num_keys = 0;
    uint32_t scale_raw = 0;
    float scale_val = 1.0f;
    uint32_t flags[3] = {0, 0, 0};
    float initial_val = 0.0f;
    std::vector<Keyframe> keys;
};

struct MotionClip {
    uint32_t model_res_id = 0;
    uint32_t clip_index = 0;
    uint32_t byte_offset = 0;
    uint32_t raw_byte_size = 0;
    uint32_t num_joints = 81;
    uint32_t duration = 0;
    std::vector<MotionChannel> channels;
    bool is_valid = false;
};

// Evaluates a single Hermite channel at arbitrary frame timestamp t
// Implements canonical piecewise cubic Hermite curve matching SLUS_202.77 disassembly:
// EE constants: 0x002CB6F8 = 2.0f, 0x002CB6FC = 3.0f, 0x002CB6EC = 1.0f
inline float EvaluateHermiteChannel(const MotionChannel& ch, float t) {
    if (ch.keys.empty()) return ch.initial_val;
    if (ch.keys.size() == 1) return ch.keys[0].val;

    // Boundary clamp: before first key (time <= 0.0)
    if (t <= ch.keys[0].time) {
        return ch.keys[0].val;
    }
    // Boundary clamp: after last key (time >= last key time)
    if (t >= ch.keys.back().time) {
        return ch.keys.back().val;
    }

    // Binary search / hunt for interval [k, k+1]
    size_t k = 0;
    for (size_t i = 0; i < ch.keys.size() - 1; ++i) {
        if (t >= ch.keys[i].time && t <= ch.keys[i + 1].time) {
            k = i;
            break;
        }
    }

    const Keyframe& k0 = ch.keys[k];
    const Keyframe& k1 = ch.keys[k + 1];

    float dt = k1.time - k0.time;
    if (dt <= 1e-6f) {
        return k0.val;
    }

    // Normalized interval parameter tau in [0.0, 1.0]
    float tau = (t - k0.time) / dt;
    tau = std::clamp(tau, 0.0f, 1.0f);

    // Horner polynomial form equivalent to 4 basis Hermite formulation:
    // dv = v1 - v0
    // m0 = dt * m_out, m1 = dt * m_in
    // c3 = -2*dv + m0 + m1
    // c2 = 3*dv - 2*m0 - m1
    // c1 = m0
    // c0 = v0
    // V(tau) = ((c3*tau + c2)*tau + c1)*tau + c0
    float dv = k1.val - k0.val;
    float m0 = dt * k0.m_out;
    float m1 = dt * k1.m_in;

    float c3 = -2.0f * dv + m0 + m1;
    float c2 =  3.0f * dv - 2.0f * m0 - m1;
    float c1 =  m0;
    float c0 =  k0.val;

    return ((c3 * tau + c2) * tau + c1) * tau + c0;
}

// Parses a single Section 2 motion clip from raw payload bytes
inline bool ParseMotionClip(const uint8_t* raw, size_t raw_len, uint32_t res_id, uint32_t clip_idx, MotionClip& out_clip) {
    if (!raw || raw_len < 12) return false;
    out_clip.model_res_id = res_id;
    out_clip.clip_index = clip_idx;
    out_clip.raw_byte_size = static_cast<uint32_t>(raw_len);
    out_clip.is_valid = false;

    const NativeMotionHeader* hdr = reinterpret_cast<const NativeMotionHeader*>(raw);
    out_clip.num_joints = hdr->num_joints;
    out_clip.duration = hdr->duration;

    if (hdr->num_joints != 81) return false;

    size_t pos = 12;
    out_clip.channels.clear();

    for (uint32_t c = 0; c < hdr->num_channels; ++c) {
        if (pos + 24 > raw_len) return false;
        const NativeChannelHeader* ch_hdr = reinterpret_cast<const NativeChannelHeader*>(raw + pos);
        pos += 24;

        MotionChannel ch;
        ch.channel_id = (ch_hdr->tag >> 8) & 0xFF;
        ch.floats_per_key = (ch_hdr->tag >> 16) & 0xFF;
        uint32_t num_keys = (ch_hdr->tag >> 24) & 0xFF;
        ch.scale_raw = ch_hdr->scale_raw;
        std::memcpy(&ch.scale_val, &ch_hdr->scale_raw, sizeof(float));
        ch.flags[0] = ch_hdr->flag1;
        ch.flags[1] = ch_hdr->flag2;
        ch.flags[2] = ch_hdr->flag3;
        ch.initial_val = ch_hdr->v0;

        // Key 0 is defined at timestamp 0.0 with initial_val
        ch.keys.push_back({0.0f, 0.0f, 0.0f, 0.0f, ch.initial_val});

        // Dense sampling check (e.g. 401 dense sampled keys where low byte was 145)
        if (num_keys == 145 && out_clip.duration == 400) {
            num_keys = 401;
        }

        ch.num_keys = num_keys;
        for (uint32_t k = 1; k < num_keys; ++k) {
            if (pos + 20 > raw_len) break;
            const float* k_floats = reinterpret_cast<const float*>(raw + pos);

            Keyframe kf;
            kf.time = k_floats[0];
            kf.m_in = k_floats[1];
            kf.m_out = k_floats[2];
            kf.extra = k_floats[3];
            kf.val = k_floats[4];

            ch.keys.push_back(kf);
            pos += 20;
        }
        out_clip.channels.push_back(std::move(ch));
    }

    out_clip.is_valid = true;
    return true;
}

// Parses all Section 2 motion clips from the Section 2 payload block
inline bool ParseSection2Clips(const uint8_t* sec2_data, size_t sec2_size, uint32_t res_id, std::vector<MotionClip>& out_clips) {
    out_clips.clear();
    if (!sec2_data || sec2_size < 8) return false;

    uint32_t num_clips = 0;
    std::memcpy(&num_clips, sec2_data, 4);
    if (num_clips == 0 || num_clips > 64) return false;

    size_t header_table_size = 4 + num_clips * 4;
    if (header_table_size > sec2_size) return false;

    const uint32_t* clip_offsets = reinterpret_cast<const uint32_t*>(sec2_data + 4);

    for (uint32_t i = 0; i < num_clips; ++i) {
        uint32_t start_off = clip_offsets[i];
        if (start_off >= sec2_size) continue;

        uint32_t end_off = (i + 1 < num_clips) ? clip_offsets[i + 1] : static_cast<uint32_t>(sec2_size);
        if (end_off > sec2_size || end_off <= start_off) end_off = static_cast<uint32_t>(sec2_size);

        size_t clip_len = end_off - start_off;
        MotionClip clip;
        clip.byte_offset = start_off;
        if (ParseMotionClip(sec2_data + start_off, clip_len, res_id, i, clip)) {
            out_clips.push_back(std::move(clip));
        }
    }

    return !out_clips.empty();
}

} // namespace DW3RE
