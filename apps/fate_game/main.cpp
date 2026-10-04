#include "fate/runtime_app.hpp"

#include <exception>
#include <iostream>
#include <string>
#include <string_view>

int main(int argc, char** argv) {
    bool self_test = false;
    std::string base_iso = "C:/DW3/sources/Isos/DW3PS2.iso";
    std::string xl_iso = "C:/DW3/sources/Isos/DW3XL.iso";
    std::string mod_root = "C:/Fate Soldiers 3/mods";
    for (int index = 1; index < argc; ++index) {
        const std::string_view argument(argv[index]);
        if (argument == "--self-test") {
            self_test = true;
        } else if (argument == "--base-iso" && index + 1 < argc) {
            base_iso = argv[++index];
        } else if (argument == "--xl-iso" && index + 1 < argc) {
            xl_iso = argv[++index];
        } else if (argument == "--mods" && index + 1 < argc) {
            mod_root = argv[++index];
        } else if (argument == "--help") {
            std::cout << "fate_game [--base-iso FILE] [--xl-iso FILE] [--mods DIR] [--self-test]\n"
                      << "Controls: WASD move, J normal chain, K C1-C6, L Musou, Esc exits.\n";
            return 0;
        } else {
            std::cerr << "Unknown or incomplete argument: " << argument << '\n';
            return 2;
        }
    }
    try {
        fate::runtime_app::NativeRuntimeApp app;
        const auto startup = app.initialize_game(!self_test, base_iso.c_str(), xl_iso.c_str(), mod_root.c_str());
        if (!startup.dual_iso_mounted || startup.base_resource_count == 0U || startup.xl_resource_count == 0U ||
            startup.vertex_count == 0U || startup.triangle_count == 0U || startup.unit_count < 2U ||
            startup.rasterized_pixel_count == 0U) {
            std::cerr << "phase14_native_game_startup: invariant failure\n";
            return 1;
        }
        if (self_test) {
            std::cout << "{\"status\":\"PASS\",\"base_resources\":" << startup.base_resource_count
                      << ",\"xl_resources\":" << startup.xl_resource_count
                      << ",\"units\":" << startup.unit_count << ",\"vertices\":" << startup.vertex_count
                      << ",\"triangles\":" << startup.triangle_count
                      << ",\"mod_overrides\":" << startup.mod_overrides_used
                      << ",\"rasterized_pixels\":" << startup.rasterized_pixel_count << "}\n";
            return 0;
        }
        std::cout << "Native combat prototype initialized from both DW3 discs.\n"
                  << "WASD moves; J attacks; K cycles Charge 1-6; L spends Musou; Esc exits.\n";
        return app.run_game();
    } catch (const std::exception& error) {
        std::cerr << "fate_game: " << error.what() << '\n';
        return 1;
    }
}
