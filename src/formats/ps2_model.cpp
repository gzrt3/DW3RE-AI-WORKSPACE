#include "fate/formats/ps2_model.hpp"

#include <algorithm>
#include <bit>
#include <charconv>
#include <cmath>
#include <limits>
#include <optional>
#include <sstream>
#include <stdexcept>

namespace fate::formats::ps2_model {
namespace {

void require_bounds(std::uint64_t offset, std::uint64_t count, std::size_t total_size, const char* msg) {
    if (offset > total_size || count > total_size - offset) {
        throw std::runtime_error(msg);
    }
}

std::uint32_t read_u32(std::span<const std::byte> bytes, std::size_t offset) {
    require_bounds(offset, 4, bytes.size(), "PS2_MODEL_OOB: read_u32");
    return static_cast<std::uint32_t>(bytes[offset]) |
           (static_cast<std::uint32_t>(bytes[offset + 1]) << 8U) |
           (static_cast<std::uint32_t>(bytes[offset + 2]) << 16U) |
           (static_cast<std::uint32_t>(bytes[offset + 3]) << 24U);
}

std::int32_t read_i32(std::span<const std::byte> bytes, std::size_t offset) {
    return static_cast<std::int32_t>(read_u32(bytes, offset));
}

float read_f32(std::span<const std::byte> bytes, std::size_t offset) {
    return std::bit_cast<float>(read_u32(bytes, offset));
}

std::uint32_t align16(std::uint32_t value) noexcept {
    return (value + 15U) & ~15U;
}

struct ObjReference {
    std::size_t position{};
    std::optional<std::size_t> uv;
    std::optional<std::size_t> normal;
};

std::optional<std::size_t> parse_obj_index(std::string_view text, std::size_t available, bool required) {
    if (text.empty()) {
        if (required) throw std::runtime_error("OBJ_INVALID: face is missing a position index");
        return std::nullopt;
    }
    std::int64_t value{};
    const auto parsed = std::from_chars(text.data(), text.data() + text.size(), value);
    if (parsed.ec != std::errc{} || parsed.ptr != text.data() + text.size() || value == 0) {
        throw std::runtime_error("OBJ_INVALID: malformed or zero face index");
    }
    const std::int64_t count = static_cast<std::int64_t>(available);
    const std::int64_t resolved = value > 0 ? value - 1 : count + value;
    if (resolved < 0 || resolved >= count) throw std::runtime_error("OBJ_INVALID: face index out of range");
    return static_cast<std::size_t>(resolved);
}

ObjReference parse_obj_reference(std::string_view token, std::size_t position_count,
                                 std::size_t uv_count, std::size_t normal_count) {
    std::array<std::string_view, 3> fields{};
    std::size_t field_count = 1U;
    std::size_t begin{};
    for (std::size_t index = 0; index <= token.size(); ++index) {
        if (index == token.size() || token[index] == '/') {
            if (field_count > fields.size()) throw std::runtime_error("OBJ_INVALID: too many face index fields");
            fields[field_count - 1U] = token.substr(begin, index - begin);
            if (index < token.size()) {
                if (field_count == fields.size()) throw std::runtime_error("OBJ_INVALID: too many face index fields");
                ++field_count;
                begin = index + 1U;
            }
        }
    }
    ObjReference result{};
    result.position = *parse_obj_index(fields[0], position_count, true);
    if (field_count > 1U) result.uv = parse_obj_index(fields[1], uv_count, false);
    if (field_count > 2U) result.normal = parse_obj_index(fields[2], normal_count, false);
    return result;
}

std::array<float, 3> obj_face_normal(const std::array<float, 3>& a,
                                     const std::array<float, 3>& b,
                                     const std::array<float, 3>& c) noexcept {
    const float ab_x = b[0] - a[0];
    const float ab_y = b[1] - a[1];
    const float ab_z = b[2] - a[2];
    const float ac_x = c[0] - a[0];
    const float ac_y = c[1] - a[1];
    const float ac_z = c[2] - a[2];
    float nx = ab_y * ac_z - ab_z * ac_y;
    float ny = ab_z * ac_x - ab_x * ac_z;
    float nz = ab_x * ac_y - ab_y * ac_x;
    const float length = std::sqrt(nx * nx + ny * ny + nz * nz);
    if (length > 0.000001F && std::isfinite(length)) {
        nx /= length;
        ny /= length;
        nz /= length;
    } else {
        nx = 0.0F;
        ny = 1.0F;
        nz = 0.0F;
    }
    return {nx, ny, nz};
}

} // namespace

std::uint32_t expected_section1_offset(std::uint16_t node_count) noexcept {
    const std::uint32_t n = static_cast<std::uint32_t>(node_count);
    return 16U + align16(4U + 44U * n);
}

[[nodiscard]] std::uint32_t resolve_rid_from_model(std::uint16_t node_count) {
    // Placeholder implementation: returns a fixed RID for testing.
    (void)node_count;
    return 0x00123456u;
}

Header parse_header(std::span<const std::byte> bytes) {
    if (bytes.size() < 64U || (bytes.size() % 16U) != 0U) {
        throw std::runtime_error("PS2_MODEL_INVALID: payload size too small or not 16-byte aligned");
    }
    Header h{};
    h.magic = read_u32(bytes, 0);
    if (h.magic != kMagicPs2) {
        throw std::runtime_error("PS2_MODEL_INVALID: bad magic (expected 'PS2 ')");
    }
    h.section0_offset = read_u32(bytes, 4);
    h.section1_offset = read_u32(bytes, 8);
    h.reserved_0c = read_u32(bytes, 12);
    if (h.section0_offset != 16U || h.reserved_0c != 0U) {
        throw std::runtime_error("PS2_MODEL_INVALID: unexpected section0_offset or reserved_0c");
    }
    const std::uint32_t counts_word = read_u32(bytes, 16);
    h.node_count = static_cast<std::uint16_t>(counts_word & 0xFFFFU);
    h.secondary_count = static_cast<std::uint16_t>((counts_word >> 16U) & 0xFFFFU);
    if (h.node_count == 0U || h.node_count > 512U || h.secondary_count == 0U || h.secondary_count > h.node_count) {
        throw std::runtime_error("PS2_MODEL_INVALID: node_count/secondary_count out of valid range");
    }
    const std::uint32_t expected_sec1 = expected_section1_offset(h.node_count);
    if (h.section1_offset != expected_sec1) {
        throw std::runtime_error("PS2_MODEL_INVALID: section1_offset does not match formula 16 + align16(4 + 44*N)");
    }
    require_bounds(h.section1_offset, 32U, bytes.size(), "PS2_MODEL_OOB: section1_offset exceeds payload");
    const std::uint32_t n = h.node_count;
    h.section0_table_a_offset = 20U;
    h.section0_table_b_offset = 20U + 4U * n;
    h.section0_transforms_offset = 20U + 8U * n;
    return h;
}

ModelView parse_model(std::span<const std::byte> bytes) {
    ModelView model{};
    model.header = parse_header(bytes);

    const std::uint32_t n = model.header.node_count;
    model.node_table_a.reserve(n);
    model.node_table_b.reserve(n);
    for (std::uint32_t i = 0; i < n; ++i) {
        const std::int32_t a = read_i32(bytes, static_cast<std::size_t>(model.header.section0_table_a_offset) + i * 4U);
        const std::int32_t b = read_i32(bytes, static_cast<std::size_t>(model.header.section0_table_b_offset) + i * 4U);
        if (a < -1 || a >= static_cast<std::int32_t>(n) || b < -1 || b >= static_cast<std::int32_t>(n)) {
            throw std::runtime_error("PS2_MODEL_INVALID: Section 0 node index out of range [-1, N-1]");
        }
        model.node_table_a.push_back(a);
        model.node_table_b.push_back(b);
    }

    model.node_transforms.reserve(n);
    for (std::uint32_t i = 0; i < n; ++i) {
        const std::size_t off = static_cast<std::size_t>(model.header.section0_transforms_offset) + i * 36U;
        NodeTransform9 tr{};
        for (std::size_t k = 0; k < 3U; ++k) {
            tr.vec_a[k] = read_f32(bytes, off + k * 4U);
            tr.scale[k] = read_f32(bytes, off + 12U + k * 4U);
            tr.vec_b[k] = read_f32(bytes, off + 24U + k * 4U);
            if (!std::isfinite(tr.vec_a[k]) || !std::isfinite(tr.scale[k]) || !std::isfinite(tr.vec_b[k])) {
                throw std::runtime_error("PS2_MODEL_INVALID: non-finite float in Section 0 node transform");
            }
        }
        model.node_transforms.push_back(tr);
    }

    const std::size_t pad_start = static_cast<std::size_t>(model.header.section0_transforms_offset) + n * 36U;
    const std::size_t pad_end = model.header.section1_offset;
    for (std::size_t p = pad_start; p < pad_end; ++p) {
        if (bytes[p] != std::byte{0}) {
            throw std::runtime_error("PS2_MODEL_INVALID: nonzero tail padding in Section 0");
        }
    }

    const std::size_t sec1_off = model.header.section1_offset;
    model.lod_count = read_u32(bytes, sec1_off);
    if (model.lod_count == 0U || model.lod_count > 8U) {
        throw std::runtime_error("PS2_MODEL_INVALID: lod_count out of range [1, 8]");
    }
    if (read_u32(bytes, sec1_off + 4U) != 0U ||
        read_u32(bytes, sec1_off + 8U) != 0U ||
        read_u32(bytes, sec1_off + 12U) != 0U) {
        throw std::runtime_error("PS2_MODEL_INVALID: nonzero padding in Section 1 header");
    }

    std::size_t s0 = sec1_off + 16U;
    model.lods.reserve(model.lod_count);
    for (std::uint32_t lod_idx = 0; lod_idx < model.lod_count; ++lod_idx) {
        require_bounds(s0, 16U, bytes.size(), "PS2_MODEL_OOB: LOD header exceeds payload");
        LodSectionView lod{};
        lod.header_offset = static_cast<std::uint32_t>(s0);
        lod.payload_offset = static_cast<std::uint32_t>(s0 + 16U);
        lod.sub_count = read_u32(bytes, s0);
        lod.payload_qwc = read_u32(bytes, s0 + 4U);
        lod.total_qwc = read_u32(bytes, s0 + 8U);
        lod.reserved = read_u32(bytes, s0 + 12U);
        if (lod.sub_count != 1U || lod.total_qwc != lod.payload_qwc + 1U || lod.reserved != 0U) {
            throw std::runtime_error("PS2_MODEL_INVALID: malformed LOD block header");
        }
        const std::uint64_t lod_bytes = static_cast<std::uint64_t>(lod.total_qwc) * 16ULL;
        require_bounds(s0, lod_bytes, bytes.size(), "PS2_MODEL_OOB: LOD block exceeds payload");
        lod.byte_length = static_cast<std::uint32_t>(lod_bytes);

        const std::size_t lod_end = s0 + static_cast<std::size_t>(lod_bytes);
        std::size_t t1 = s0 + 16U;
        std::uint32_t t3_words = 0U;

        while (((t3_words + 3U) >> 2U) < lod.payload_qwc) {
            if (t1 + 8U > lod_end) {
                throw std::runtime_error("PS2_MODEL_OOB: truncated VIF1 packet header");
            }
            const std::uint32_t vif_cmd = read_u32(bytes, t1);
            if ((vif_cmd & kVifUnpackV4_32Mask) != kVifUnpackV4_32Code) {
                throw std::runtime_error("PS2_MODEL_INVALID: expected VIF1 UNPACK V4-32 (0x6Cxx8000)");
            }
            const std::uint8_t unpack_qwc = static_cast<std::uint8_t>((vif_cmd >> 16U) & 0xFFU);
            if (unpack_qwc < 7U) {
                throw std::runtime_error("PS2_MODEL_INVALID: unpack_qwc too small for VU1 header + vertex");
            }
            const std::uint32_t pkt_words = static_cast<std::uint32_t>(unpack_qwc) * 4U + 2U;
            const std::uint32_t pkt_bytes = pkt_words * 4U;
            if (t1 + pkt_bytes > lod_end) {
                throw std::runtime_error("PS2_MODEL_OOB: VIF1 packet exceeds LOD boundary");
            }

            const std::uint32_t gif_low = read_u32(bytes, t1 + 0x34U);
            const std::uint32_t gif_mid = read_u32(bytes, t1 + 0x38U);
            const std::uint32_t gif_high = read_u32(bytes, t1 + 0x3CU);
            const std::uint32_t mscal_word = read_u32(bytes, t1 + pkt_bytes - 4U);
            const std::uint16_t nloop = static_cast<std::uint16_t>(gif_low & 0x7FFFU);
            if ((gif_low & 0x8000U) == 0U || nloop == 0U) {
                throw std::runtime_error("PS2_MODEL_INVALID: GS GIFtag missing EOP or zero NLOOP");
            }

            VifPacketView pkt{};
            pkt.offset = static_cast<std::uint32_t>(t1);
            pkt.byte_length = pkt_bytes;
            pkt.unpack_qwc = unpack_qwc;
            pkt.vertex_count = nloop;
            pkt.gif_low = gif_low;
            pkt.gif_mid = gif_mid;
            pkt.gif_high = gif_high;
            pkt.mscal_word = mscal_word;
            pkt.tex0_word0 = read_u32(bytes, t1 + 0x24U);
            pkt.tex0_word1 = read_u32(bytes, t1 + 0x28U);
            pkt.tex_psm = static_cast<std::uint8_t>((pkt.tex0_word0 >> 20U) & 0x3FU);
            pkt.cbp_offset = static_cast<std::uint16_t>((pkt.tex0_word1 & 0x0007FFE0U) >> 5U);

            if ((mscal_word == kMscalPlanarRigid || mscal_word == kMscalPlanarRigidAlt) &&
                static_cast<std::uint32_t>(unpack_qwc) == 4U + 3U * static_cast<std::uint32_t>(nloop)) {
                pkt.encoding = PacketEncoding::planar_rigid;
            } else if (mscal_word == kMscalInterleavedWeighted) {
                std::uint32_t qpos = 4U;
                for (std::uint16_t v = 0; v < nloop; ++v) {
                    if (qpos >= unpack_qwc) {
                        throw std::runtime_error("PS2_MODEL_INVALID: interleaved vertex exceeds unpack_qwc");
                    }
                    const std::uint32_t w_cnt = read_u32(bytes, t1 + 4U + qpos * 16U + 12U);
                    if (w_cnt < 1U || w_cnt > 4U || qpos + 1U + 2U * w_cnt > unpack_qwc) {
                        throw std::runtime_error("PS2_MODEL_INVALID: invalid skinning weight count in packet");
                    }
                    qpos += 1U + 2U * w_cnt;
                }
                if (qpos != unpack_qwc) {
                    throw std::runtime_error("PS2_MODEL_INVALID: interleaved vertex QWC sum mismatch");
                }
                pkt.encoding = PacketEncoding::interleaved_weighted;
            } else {
                throw std::runtime_error("PS2_MODEL_INVALID: unsupported MSCAL or QWC/NLOOP layout");
            }

            lod.packets.push_back(pkt);
            t3_words += pkt_words;
            t1 += pkt_bytes;
        }

        if (((t3_words + 3U) >> 2U) != lod.payload_qwc) {
            throw std::runtime_error("PS2_MODEL_INVALID: consumed QWC mismatch at end of LOD");
        }
        const std::size_t trailing = lod_end - t1;
        if (trailing != 0U && trailing != 8U) {
            throw std::runtime_error("PS2_MODEL_INVALID: unexpected trailing bytes at end of LOD");
        }
        if (trailing == 8U && (read_u32(bytes, t1) != 0U || read_u32(bytes, t1 + 4U) != 0U)) {
            throw std::runtime_error("PS2_MODEL_INVALID: nonzero 8-byte alignment tail at end of LOD");
        }

        model.lods.push_back(std::move(lod));
        s0 = lod_end;
    }

    if (s0 != bytes.size()) {
        throw std::runtime_error("PS2_MODEL_INVALID: LOD sections do not cover exact payload size");
    }

    return model;
}

DecodedMesh decode_lod_mesh(std::span<const std::byte> bytes, const ModelView& model, std::size_t lod_index) {
    if (lod_index >= model.lods.size()) {
        throw std::out_of_range("PS2_MODEL_OOB: lod_index out of range");
    }
    const auto& lod = model.lods[lod_index];
    DecodedMesh mesh{};
    mesh.bounds_min = {
        std::numeric_limits<float>::max(),
        std::numeric_limits<float>::max(),
        std::numeric_limits<float>::max()
    };
    mesh.bounds_max = {
        std::numeric_limits<float>::lowest(),
        std::numeric_limits<float>::lowest(),
        std::numeric_limits<float>::lowest()
    };

    const auto update_bounds = [&](const std::array<float, 3>& pos) {
        for (std::size_t a = 0; a < 3U; ++a) {
            mesh.bounds_min[a] = std::min(mesh.bounds_min[a], pos[a]);
            mesh.bounds_max[a] = std::max(mesh.bounds_max[a], pos[a]);
        }
    };

    for (const auto& pkt : lod.packets) {
        const std::uint32_t base_v = static_cast<std::uint32_t>(mesh.vertices.size());
        const std::size_t t1 = pkt.offset;
        const std::uint16_t nloop = pkt.vertex_count;

        if (pkt.encoding == PacketEncoding::planar_rigid) {
            const std::size_t uv_base = t1 + 4U + 4U * 16U;
            const std::size_t np_base = uv_base + static_cast<std::size_t>(nloop) * 16U;
            for (std::uint16_t i = 0; i < nloop; ++i) {
                DecodedVertex v{};
                v.uv[0] = read_f32(bytes, uv_base + i * 16U);
                v.uv[1] = read_f32(bytes, uv_base + i * 16U + 4U);
                v.normal[0] = read_f32(bytes, np_base + i * 32U);
                v.normal[1] = read_f32(bytes, np_base + i * 32U + 4U);
                v.normal[2] = read_f32(bytes, np_base + i * 32U + 8U);
                v.adc_flag = read_u32(bytes, np_base + i * 32U + 12U);
                v.position[0] = read_f32(bytes, np_base + i * 32U + 16U);
                v.position[1] = read_f32(bytes, np_base + i * 32U + 20U);
                v.position[2] = read_f32(bytes, np_base + i * 32U + 24U);
                if (!std::isfinite(v.position[0]) || !std::isfinite(v.position[1]) || !std::isfinite(v.position[2]) ||
                    !std::isfinite(v.normal[0]) || !std::isfinite(v.normal[1]) || !std::isfinite(v.normal[2]) ||
                    !std::isfinite(v.uv[0]) || !std::isfinite(v.uv[1])) {
                    throw std::runtime_error("PS2_MODEL_INVALID: non-finite vertex attribute in planar_rigid packet");
                }
                update_bounds(v.position);
                mesh.vertices.push_back(std::move(v));
            }
        } else {
            std::size_t qpos = 4U;
            for (std::uint16_t i = 0; i < nloop; ++i) {
                const std::size_t v_off = t1 + 4U + qpos * 16U;
                DecodedVertex v{};
                v.uv[0] = read_f32(bytes, v_off);
                v.uv[1] = read_f32(bytes, v_off + 4U);
                v.adc_flag = read_u32(bytes, v_off + 8U);
                const std::uint32_t w_cnt = read_u32(bytes, v_off + 12U);
                v.weights.reserve(w_cnt);
                for (std::uint32_t w = 0; w < w_cnt; ++w) {
                    const std::size_t w_off = v_off + 16U + w * 32U;
                    VertexWeight vw{};
                    vw.normal[0] = read_f32(bytes, w_off);
                    vw.normal[1] = read_f32(bytes, w_off + 4U);
                    vw.normal[2] = read_f32(bytes, w_off + 8U);
                    vw.bone_matrix_qwc_offset = read_u32(bytes, w_off + 12U);
                    vw.position[0] = read_f32(bytes, w_off + 16U);
                    vw.position[1] = read_f32(bytes, w_off + 20U);
                    vw.position[2] = read_f32(bytes, w_off + 24U);
                    vw.weight = read_f32(bytes, w_off + 28U);
                    if (!std::isfinite(vw.position[0]) || !std::isfinite(vw.position[1]) || !std::isfinite(vw.position[2]) ||
                        !std::isfinite(vw.normal[0]) || !std::isfinite(vw.normal[1]) || !std::isfinite(vw.normal[2]) ||
                        !std::isfinite(vw.weight)) {
                        throw std::runtime_error("PS2_MODEL_INVALID: non-finite vertex attribute in interleaved_weighted packet");
                    }
                    v.weights.push_back(vw);
                }
                v.position = v.weights.front().position;
                v.normal = v.weights.front().normal;
                update_bounds(v.position);
                mesh.vertices.push_back(std::move(v));
                qpos += 1U + 2U * w_cnt;
            }
        }

        for (std::uint16_t i = 2; i < nloop; ++i) {
            const auto& v_curr = mesh.vertices[base_v + i];
                if ((v_curr.adc_flag & 0x8000U) == 0U) {
                    if ((i % 2U) == 0U) {
                        mesh.triangles.push_back({base_v + i - 2U, base_v + i - 1U, base_v + i});
                    } else {
                        mesh.triangles.push_back({base_v + i - 1U, base_v + i - 2U, base_v + i});
                    }
                    mesh.triangle_cbp_offsets.push_back(pkt.cbp_offset);
                }
        }
    }

    return mesh;
}

std::vector<Matrix4x4> compute_bind_pose_matrices(const ModelView& model) {
    const std::size_t count = model.node_transforms.size();
    if (count == 0U || model.node_table_a.size() != count) {
        throw std::runtime_error("PS2_MODEL_INVALID: incomplete bind-pose skeleton");
    }
    std::vector<Matrix4x4> world(count);
    std::vector<std::uint8_t> state(count, 0U);

    const auto multiply = [](const Matrix4x4& lhs, const Matrix4x4& rhs) {
        Matrix4x4 out{};
        for (std::size_t row = 0; row < 4U; ++row) {
            for (std::size_t col = 0; col < 4U; ++col) {
                float value = 0.0F;
                for (std::size_t k = 0; k < 4U; ++k) {
                    value += lhs.values[row * 4U + k] * rhs.values[k * 4U + col];
                }
                out.values[row * 4U + col] = value;
            }
        }
        return out;
    };

    const auto visit = [&](const auto& self, std::size_t index) -> void {
        if (state[index] == 2U) return;
        if (state[index] == 1U) throw std::runtime_error("PS2_MODEL_INVALID: cycle in node_table_a hierarchy");
        state[index] = 1U;
        const auto& tr = model.node_transforms[index];
        const float sx = std::sin(tr.vec_a[0]);
        const float cx = std::cos(tr.vec_a[0]);
        const float sy = std::sin(tr.vec_a[1]);
        const float cy = std::cos(tr.vec_a[1]);
        const float sz = std::sin(tr.vec_a[2]);
        const float cz = std::cos(tr.vec_a[2]);

        Matrix4x4 rx{};
        rx.values = {1.0F, 0.0F, 0.0F, 0.0F,
                     0.0F, cx, -sx, 0.0F,
                     0.0F, sx, cx, 0.0F,
                     0.0F, 0.0F, 0.0F, 1.0F};
        Matrix4x4 ry{};
        ry.values = {cy, 0.0F, sy, 0.0F,
                     0.0F, 1.0F, 0.0F, 0.0F,
                     -sy, 0.0F, cy, 0.0F,
                     0.0F, 0.0F, 0.0F, 1.0F};
        Matrix4x4 rz{};
        rz.values = {cz, -sz, 0.0F, 0.0F,
                     sz, cz, 0.0F, 0.0F,
                     0.0F, 0.0F, 1.0F, 0.0F,
                     0.0F, 0.0F, 0.0F, 1.0F};
        Matrix4x4 translation{};
        translation.values = {1.0F, 0.0F, 0.0F, tr.vec_b[0],
                              0.0F, 1.0F, 0.0F, tr.vec_b[1],
                              0.0F, 0.0F, 1.0F, tr.vec_b[2],
                              0.0F, 0.0F, 0.0F, 1.0F};
        const Matrix4x4 local = multiply(multiply(multiply(translation, rz), ry), rx);
        const std::int32_t parent = model.node_table_a[index];
        if (parent < -1 || parent >= static_cast<std::int32_t>(count)) {
            throw std::runtime_error("PS2_MODEL_INVALID: parent index outside bind-pose skeleton");
        }
        if (parent == -1) world[index] = local;
        else {
            self(self, static_cast<std::size_t>(parent));
            world[index] = multiply(world[static_cast<std::size_t>(parent)], local);
        }
        state[index] = 2U;
    };

    for (std::size_t i = 0; i < count; ++i) visit(visit, i);
    return world;
}

DecodedMesh decode_posed_lod_mesh(std::span<const std::byte> bytes, const ModelView& model, std::size_t lod_index) {
    DecodedMesh mesh = decode_lod_mesh(bytes, model, lod_index);
    const auto matrices = compute_bind_pose_matrices(model);
    mesh.bounds_min = {std::numeric_limits<float>::max(), std::numeric_limits<float>::max(), std::numeric_limits<float>::max()};
    mesh.bounds_max = {std::numeric_limits<float>::lowest(), std::numeric_limits<float>::lowest(), std::numeric_limits<float>::lowest()};
    for (auto& vertex : mesh.vertices) {
        std::array<float, 3> position{};
        std::array<float, 3> normal{};
        const auto accumulate = [&](const Matrix4x4& matrix, const std::array<float, 3>& source_position,
                                    const std::array<float, 3>& source_normal, float weight) {
            for (std::size_t row = 0; row < 3U; ++row) {
                position[row] += matrix.values[row * 4U] * source_position[0] +
                                 matrix.values[row * 4U + 1U] * source_position[1] +
                                 matrix.values[row * 4U + 2U] * source_position[2] +
                                 matrix.values[row * 4U + 3U] * weight;
                normal[row] += matrix.values[row * 4U] * source_normal[0] +
                               matrix.values[row * 4U + 1U] * source_normal[1] +
                               matrix.values[row * 4U + 2U] * source_normal[2];
            }
        };
        if (vertex.weights.empty()) {
            // Planar rigid packets are attached to the model root in this stream.
            accumulate(matrices.front(), vertex.position, vertex.normal, 1.0F);
        } else {
            float total_weight = 0.0F;
            for (const auto& weight : vertex.weights) {
                if ((weight.bone_matrix_qwc_offset & 3U) != 0U) {
                    throw std::runtime_error("PS2_MODEL_INVALID: bone matrix QWC offset is not four-QW aligned");
                }
                const std::size_t bone_index = weight.bone_matrix_qwc_offset / 4U;
                if (bone_index >= model.header.secondary_count || bone_index >= matrices.size()) {
                    throw std::runtime_error("PS2_MODEL_INVALID: bone matrix QWC offset exceeds uploaded matrix palette");
                }
                accumulate(matrices[bone_index], weight.position, weight.normal, weight.weight);
                total_weight += weight.weight;
            }
            if (total_weight <= 0.0F || !std::isfinite(total_weight)) {
                throw std::runtime_error("PS2_MODEL_INVALID: vertex has invalid total skinning weight");
            }
        }
        const float normal_length = std::sqrt(normal[0] * normal[0] + normal[1] * normal[1] + normal[2] * normal[2]);
        if (normal_length > 0.0F) {
            for (float& component : normal) component /= normal_length;
        }
        vertex.position = position;
        vertex.normal = normal;
        for (std::size_t axis = 0; axis < 3U; ++axis) {
            mesh.bounds_min[axis] = std::min(mesh.bounds_min[axis], position[axis]);
            mesh.bounds_max[axis] = std::max(mesh.bounds_max[axis], position[axis]);
        }
    }
    return mesh;
}

std::string export_obj(const DecodedMesh& mesh, std::string_view object_name) {
    std::ostringstream out;
    out.setf(std::ios::fixed);
    out.precision(6);
    out << "# Fate Soldiers 3 clean-room PS2 model export\n";
    out << "o " << object_name << "\n";
    for (const auto& v : mesh.vertices) {
        out << "v " << v.position[0] << ' ' << v.position[1] << ' ' << v.position[2] << "\n";
    }
    for (const auto& v : mesh.vertices) {
        out << "vt " << v.uv[0] << ' ' << (1.0f - v.uv[1]) << "\n";
    }
    for (const auto& v : mesh.vertices) {
        out << "vn " << v.normal[0] << ' ' << v.normal[1] << ' ' << v.normal[2] << "\n";
    }
    for (const auto& tri : mesh.triangles) {
        const std::uint32_t i0 = tri[0] + 1U;
        const std::uint32_t i1 = tri[1] + 1U;
        const std::uint32_t i2 = tri[2] + 1U;
        out << "f " << i0 << '/' << i0 << '/' << i0 << ' '
            << i1 << '/' << i1 << '/' << i1 << ' '
            << i2 << '/' << i2 << '/' << i2 << "\n";
    }
    return out.str();
}

DecodedMesh import_obj(std::string_view text) {
    constexpr std::size_t max_obj_bytes = 128U * 1024U * 1024U;
    constexpr std::size_t max_source_records = 2'000'000U;
    constexpr std::size_t max_output_triangles = 1'000'000U;
    if (text.empty() || text.size() > max_obj_bytes) throw std::runtime_error("OBJ_INVALID: empty or oversized input");

    std::vector<std::array<float, 3>> positions;
    std::vector<std::array<float, 2>> uvs;
    std::vector<std::array<float, 3>> normals;
    DecodedMesh mesh{};
    bool has_bounds = false;
    std::istringstream input{std::string(text)};
    std::string line;
    std::size_t line_number{};
    while (std::getline(input, line)) {
        ++line_number;
        if (line.size() > 1024U * 1024U) throw std::runtime_error("OBJ_INVALID: line exceeds limit");
        std::istringstream row(line);
        std::string directive;
        if (!(row >> directive) || directive.starts_with('#')) continue;
        if (directive == "v") {
            std::array<float, 3> value{};
            if (!(row >> value[0] >> value[1] >> value[2]) ||
                !std::isfinite(value[0]) || !std::isfinite(value[1]) || !std::isfinite(value[2])) {
                throw std::runtime_error("OBJ_INVALID: malformed position at line " + std::to_string(line_number));
            }
            if (positions.size() >= max_source_records) throw std::runtime_error("OBJ_INVALID: too many positions");
            positions.push_back(value);
        } else if (directive == "vt") {
            std::array<float, 2> value{};
            if (!(row >> value[0] >> value[1]) || !std::isfinite(value[0]) || !std::isfinite(value[1])) {
                throw std::runtime_error("OBJ_INVALID: malformed texture coordinate at line " + std::to_string(line_number));
            }
            if (uvs.size() >= max_source_records) throw std::runtime_error("OBJ_INVALID: too many texture coordinates");
            uvs.push_back(value);
        } else if (directive == "vn") {
            std::array<float, 3> value{};
            if (!(row >> value[0] >> value[1] >> value[2]) ||
                !std::isfinite(value[0]) || !std::isfinite(value[1]) || !std::isfinite(value[2])) {
                throw std::runtime_error("OBJ_INVALID: malformed normal at line " + std::to_string(line_number));
            }
            if (normals.size() >= max_source_records) throw std::runtime_error("OBJ_INVALID: too many normals");
            normals.push_back(value);
        } else if (directive == "f") {
            std::vector<ObjReference> face;
            std::string token;
            while (row >> token) {
                if (token.starts_with('#')) break;
                if (face.size() >= max_source_records) throw std::runtime_error("OBJ_INVALID: face has too many vertices");
                face.push_back(parse_obj_reference(token, positions.size(), uvs.size(), normals.size()));
            }
            if (face.size() < 3U) throw std::runtime_error("OBJ_INVALID: face has fewer than three vertices");
            for (std::size_t fan = 1U; fan + 1U < face.size(); ++fan) {
                if (mesh.triangles.size() >= max_output_triangles ||
                    mesh.vertices.size() > static_cast<std::size_t>(std::numeric_limits<std::uint32_t>::max()) - 3U) {
                    throw std::runtime_error("OBJ_INVALID: converted mesh exceeds limits");
                }
                const std::array<ObjReference, 3> triangle_refs{face[0], face[fan], face[fan + 1U]};
                const auto face_normal = obj_face_normal(positions[triangle_refs[0].position],
                    positions[triangle_refs[1].position], positions[triangle_refs[2].position]);
                std::array<std::uint32_t, 3> triangle{};
                for (std::size_t corner = 0; corner < triangle_refs.size(); ++corner) {
                    const ObjReference& reference = triangle_refs[corner];
                    const auto& source_position = positions[reference.position];
                    DecodedVertex vertex{};
                    vertex.position = {source_position[0], -source_position[1], source_position[2]};
                    if (reference.normal) {
                        const auto& source_normal = normals[*reference.normal];
                        vertex.normal = {source_normal[0], -source_normal[1], source_normal[2]};
                    } else {
                        vertex.normal = {face_normal[0], -face_normal[1], face_normal[2]};
                    }
                    if (reference.uv) {
                        const auto& source_uv = uvs[*reference.uv];
                        vertex.uv = {source_uv[0], 1.0F - source_uv[1]};
                    }
                    for (std::size_t axis = 0; axis < 3U; ++axis) {
                        if (!has_bounds) {
                            mesh.bounds_min[axis] = vertex.position[axis];
                            mesh.bounds_max[axis] = vertex.position[axis];
                        } else {
                            mesh.bounds_min[axis] = std::min(mesh.bounds_min[axis], vertex.position[axis]);
                            mesh.bounds_max[axis] = std::max(mesh.bounds_max[axis], vertex.position[axis]);
                        }
                    }
                    has_bounds = true;
                    triangle[corner] = static_cast<std::uint32_t>(mesh.vertices.size());
                    mesh.vertices.push_back(std::move(vertex));
                }
                mesh.triangles.push_back(triangle);
                mesh.triangle_cbp_offsets.push_back(0U);
            }
        }
    }
    if (mesh.vertices.empty() || mesh.triangles.empty()) throw std::runtime_error("OBJ_INVALID: no triangular geometry found");
    return mesh;
}

std::string export_textured_obj(const DecodedMesh& mesh, std::string_view object_name,
                                std::uint32_t primary_height, std::string_view material_file) {
    if (primary_height == 0U) throw std::invalid_argument("TM3 primary height must be positive");
    std::uint32_t texture_height = 1U;
    while (texture_height < primary_height) texture_height <<= 1U;
    const float uv_scale = static_cast<float>(texture_height) / static_cast<float>(primary_height);
    std::ostringstream out;
    out.setf(std::ios::fixed);
    out.precision(6);
    out << "# Fate Soldiers 3 clean-room textured PS2 export\nmtllib " << material_file << "\no " << object_name << "\n";
    // PS2 character data uses a downward-positive vertical basis. Reflect Y for
    // conventional Y-up interchange files; faces below reverse winding with it.
    for (const auto& v : mesh.vertices) out << "v " << v.position[0] << ' ' << -v.position[1] << ' ' << v.position[2] << "\n";
    for (const auto& v : mesh.vertices) out << "vt " << v.uv[0] << ' ' << (1.0F - v.uv[1] * uv_scale) << "\n";
    for (const auto& v : mesh.vertices) out << "vn " << v.normal[0] << ' ' << -v.normal[1] << ' ' << v.normal[2] << "\n";
    std::uint16_t active_cbp = 0xFFFFU;
    for (std::size_t ti = 0; ti < mesh.triangles.size(); ++ti) {
        const std::uint16_t cbp = (ti < mesh.triangle_cbp_offsets.size()) ? mesh.triangle_cbp_offsets[ti] : 0U;
        if (cbp != 0U && cbp != 4U && cbp != 8U && cbp != 12U) {
            throw std::runtime_error("PS2_MODEL_INVALID: unsupported TM3 subpalette CBP offset");
        }
        if (cbp != active_cbp) {
            out << "usemtl subpalette_" << cbp << "\n";
            active_cbp = cbp;
        }
        const auto& tri = mesh.triangles[ti];
        for (std::size_t corner = 0; corner < 3U; ++corner) {
            if (tri[corner] >= mesh.vertices.size()) throw std::runtime_error("PS2_MODEL_INVALID: triangle index out of range during OBJ export");
        }
        const std::uint32_t i0 = tri[0] + 1U, i1 = tri[1] + 1U, i2 = tri[2] + 1U;
        out << "f " << i0 << '/' << i0 << '/' << i0 << ' ' << i2 << '/' << i2 << '/' << i2 << ' '
            << i1 << '/' << i1 << '/' << i1 << "\n";
    }
    return out.str();
}

std::string export_textured_mtl(const std::array<std::string, 4>& texture_files) {
    std::ostringstream out;
    out << "# Fate Soldiers 3 TM3 palette materials\n";
    constexpr std::array<std::uint16_t, 4> cbps{0U, 4U, 8U, 12U};
    for (std::size_t i = 0; i < cbps.size(); ++i) {
        out << "newmtl subpalette_" << cbps[i] << "\nKa 1.000000 1.000000 1.000000\nKd 1.000000 1.000000 1.000000\n"
            << "d 1.000000\nmap_Kd " << texture_files[i] << "\n\n";
    }
    return out.str();
}

} // namespace fate::formats::ps2_model
