#include "fate/canonical_spec.hpp"
#include "fate/formats/audio_iecs.hpp"
#include "fate/formats/common.hpp"
#include "fate/formats/hud_ui.hpp"
#include "fate/formats/mot_anim.hpp"
#include "fate/formats/ps2_model.hpp"
#include "fate/formats/stage_gb2_cb2.hpp"
#include "fate/formats/tim2.hpp"
#include "fate/formats/tm3.hpp"
#include "fate/runtime.hpp"
#include "fate/runtime_manifest.hpp"

#include <cstdlib>
#include <iostream>
#include <string>
#include <string_view>

int main(int argc, char** argv) {
    std::string game = "dw3";
    std::uint32_t rid = 0;
    std::string evidence_path = "C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json";
    std::string root_path = "C:/DW3";

    for (int i = 1; i < argc; ++i) {
        const std::string_view arg(argv[i]);
        if (arg == "--game" && i + 1 < argc) {
            game = argv[++i];
        } else if (arg == "--rid" && i + 1 < argc) {
            rid = static_cast<std::uint32_t>(std::strtoul(argv[++i], nullptr, 10));
        } else if (arg == "--evidence" && i + 1 < argc) {
            evidence_path = argv[++i];
        } else if (arg == "--root" && i + 1 < argc) {
            root_path = argv[++i];
        }
    }

    try {
        using namespace fate::runtime;
        const auto registry = load_precomputed(evidence_path, root_path);
        RuntimeResourceService service(64ULL * 1024U * 1024U);
        service.publish(registry, numeric_mappings(registry));

        const auto gid = game_id(game);

        auto handle = service.open(Key{gid, rid});
        const auto bytes = handle.view.read(0, handle.view.size(), 8U * 1024U * 1024U);
        fate::formats::BoundedCursor cur(bytes);
        const std::uint32_t magic = (bytes.size() >= 4U) ? cur.read_u32_le(0U) : 0U;

        std::cout << "{\n"
                  << "  \"game\": \"" << game << "\",\n"
                  << "  \"rid\": " << rid << ",\n"
                  << "  \"payload_size\": " << bytes.size() << ",\n"
                  << "  \"magic_u32\": " << magic << ",\n";

        if (magic == fate::formats::ps2_model::kMagicPs2) {
            const auto m = fate::formats::ps2_model::parse_model(bytes);
            std::cout << "  \"detected_format\": \"PS2_MODEL\",\n"
                      << "  \"evidence_status\": \"FACT\",\n"
                      << "  \"node_count\": " << m.header.node_count << ",\n"
                      << "  \"secondary_count\": " << m.header.secondary_count << ",\n"
                      << "  \"lod_count\": " << m.lod_count << "\n";
        } else if (magic == fate::formats::tm3::kMagicTm3) {
            const auto t = fate::formats::tm3::parse_tm3(bytes);
            std::cout << "  \"detected_format\": \"TM3_TEXTURE\",\n"
                      << "  \"evidence_status\": \"FACT\",\n"
                      << "  \"primary_width\": " << t.header.primary_width << ",\n"
                      << "  \"primary_height\": " << t.header.primary_height << ",\n"
                      << "  \"secondary_banks\": " << t.banks.size() << "\n";
        } else if (magic == fate::formats::stage::kMagicGb2 || magic == fate::formats::stage::kMagicCb2) {
            const auto s = fate::formats::stage::inspect_stage_resource(bytes);
            std::cout << "  \"detected_format\": \"" << (s.kind == fate::formats::stage::StageFormatKind::Gb2 ? "STAGE_GB2" : "STAGE_CB2") << "\",\n"
                      << "  \"signature_status\": \"" << fate::formats::to_string(s.signature_status) << "\",\n"
                      << "  \"internal_grid_status\": \"" << fate::formats::to_string(s.internal_grid_status) << "\",\n"
                      << "  \"word1_version_like\": " << s.word1_version_like << "\n";
        } else if (magic == fate::formats::audio::kMagicIecs) {
            const auto a = fate::formats::audio::inspect_iecs_resource(bytes);
            std::cout << "  \"detected_format\": \"AUDIO_IECS\",\n"
                      << "  \"signature_status\": \"" << fate::formats::to_string(a.signature_status) << "\",\n"
                      << "  \"adpcm_stream_status\": \"" << fate::formats::to_string(a.adpcm_stream_status) << "\",\n"
                      << "  \"discovered_tags\": " << a.discovered_tags.size() << "\n";
        } else if (bytes.size() >= 48U && magic == 0x324D4954U) {
            const auto u = fate::formats::hud_ui::inspect_tim2_for_catalog(bytes);
            std::cout << "  \"detected_format\": \"TIM2_TEXTURE\",\n"
                      << "  \"format_status\": \"" << fate::formats::to_string(u.format_status) << "\",\n"
                      << "  \"role_status\": \"" << fate::formats::to_string(u.role_status) << "\",\n"
                      << "  \"width\": " << u.width << ",\n"
                      << "  \"height\": " << u.height << "\n";
        } else {
            const auto mv = fate::formats::mot_anim::inspect_motion_resource(bytes);
            std::cout << "  \"detected_format\": \"OPAQUE_OR_MOTION\",\n"
                      << "  \"container_layout_status\": \"" << fate::formats::to_string(mv.container_layout_status) << "\",\n"
                      << "  \"first_word\": " << mv.first_word << "\n";
        }
        std::cout << "}\n";
        return 0;
    } catch (const std::exception& ex) {
        std::cerr << "inspect_resource error: " << ex.what() << "\n";
        return 1;
    }
}
