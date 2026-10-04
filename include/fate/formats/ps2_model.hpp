#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace fate::formats::ps2_model {

inline constexpr std::uint32_t kMagicPs2 = 0x20325350U; // "PS2 "
inline constexpr std::uint32_t kVifUnpackV4_32Mask = 0xFF00FFFFU;
inline constexpr std::uint32_t kVifUnpackV4_32Code = 0x6C008000U;
inline constexpr std::uint32_t kMscalInterleavedWeighted = 0x14000002U;
inline constexpr std::uint32_t kMscalPlanarRigidAlt = 0x14000008U;
inline constexpr std::uint32_t kMscalPlanarRigid = 0x1400000AU;

enum class VariantStatus {
    supported_variant,
    unknown_variant
};

enum class PacketEncoding {
    planar_rigid,
    interleaved_weighted
};

struct Header {
    std::uint32_t magic{};
    std::uint32_t section0_offset{};
    std::uint32_t section1_offset{};
    std::uint32_t reserved_0c{};
    std::uint16_t node_count{};
    std::uint16_t secondary_count{};
    std::uint32_t section0_table_a_offset{};
    std::uint32_t section0_table_b_offset{};
    std::uint32_t section0_transforms_offset{};
};

struct NodeTransform9 {
    std::array<float, 3> vec_a{};
    std::array<float, 3> scale{};
    std::array<float, 3> vec_b{};
};

struct VifPacketView {
    std::uint32_t offset{};
    std::uint32_t byte_length{};
    std::uint8_t unpack_qwc{};
    std::uint16_t vertex_count{};
    std::uint32_t gif_low{};
    std::uint32_t gif_mid{};
    std::uint32_t gif_high{};
    std::uint32_t mscal_word{};
    std::uint32_t tex0_word0{};
    std::uint32_t tex0_word1{};
    std::uint8_t tex_psm{};
    std::uint16_t cbp_offset{};
    PacketEncoding encoding{};
};

struct LodSectionView {
    std::uint32_t header_offset{};
    std::uint32_t payload_offset{};
    std::uint32_t byte_length{};
    std::uint32_t sub_count{};
    std::uint32_t payload_qwc{};
    std::uint32_t total_qwc{};
    std::uint32_t reserved{};
    std::vector<VifPacketView> packets;
};

struct ModelView {
    VariantStatus status{VariantStatus::supported_variant};
    Header header{};
    std::vector<std::int32_t> node_table_a;
    std::vector<std::int32_t> node_table_b;
    std::vector<NodeTransform9> node_transforms;
    std::uint32_t lod_count{};
    std::vector<LodSectionView> lods;
};

struct VertexWeight {
    std::array<float, 3> normal{};
    std::array<float, 3> position{};
    std::uint32_t bone_matrix_qwc_offset{};
    float weight{};
};

struct DecodedVertex {
    std::array<float, 3> position{};
    std::array<float, 3> normal{};
    std::array<float, 2> uv{};
    std::uint32_t adc_flag{};
    std::vector<VertexWeight> weights;
};

struct DecodedMesh {
    std::vector<DecodedVertex> vertices;
    std::vector<std::array<std::uint32_t, 3>> triangles;
    std::vector<std::uint16_t> triangle_cbp_offsets;
    std::array<float, 3> bounds_min{};
    std::array<float, 3> bounds_max{};
};

struct Matrix4x4 {
    std::array<float, 16> values{};
};

[[nodiscard]] std::uint32_t expected_section1_offset(std::uint16_t node_count) noexcept;
[[nodiscard]] Header parse_header(std::span<const std::byte> bytes);
[[nodiscard]] ModelView parse_model(std::span<const std::byte> bytes);
[[nodiscard]] std::uint32_t resolve_rid_from_model(std::uint16_t node_count);

[[nodiscard]] DecodedMesh decode_lod_mesh(std::span<const std::byte> bytes, const ModelView& model, std::size_t lod_index);
[[nodiscard]] std::vector<Matrix4x4> compute_bind_pose_matrices(const ModelView& model);
[[nodiscard]] DecodedMesh decode_posed_lod_mesh(std::span<const std::byte> bytes, const ModelView& model, std::size_t lod_index);
[[nodiscard]] std::string export_obj(const DecodedMesh& mesh, std::string_view object_name = "ps2_model");
[[nodiscard]] DecodedMesh import_obj(std::string_view text);
[[nodiscard]] std::string export_textured_obj(const DecodedMesh& mesh, std::string_view object_name,
                                               std::uint32_t primary_height, std::string_view material_file);
[[nodiscard]] std::string export_textured_mtl(const std::array<std::string, 4>& texture_files);

} // namespace fate::formats::ps2_model
