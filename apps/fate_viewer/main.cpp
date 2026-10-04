#include "fate/runtime_app.hpp"

#include <exception>
#include <iostream>
#include <string>
#include <string_view>

int main(int argc, char** argv) {
    bool self_test = false;
    std::string root = "C:/DW3";
    std::string evidence = "C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json";
    std::string mods = "C:/Fate Soldiers 3/mods";
    for (int index = 1; index < argc; ++index) {
        const std::string_view argument(argv[index]);
        if (argument == "--self-test") {
            self_test = true;
        } else if (argument == "--root" && index + 1 < argc) {
            root = argv[++index];
        } else if (argument == "--evidence" && index + 1 < argc) {
            evidence = argv[++index];
        } else if (argument == "--mods" && index + 1 < argc) {
            mods = argv[++index];
        } else if (argument == "--help") {
            std::cout << "fate_viewport [--self-test] [--root DIR] [--evidence JSON] [--mods DIR]\n"
                      << "Without --self-test, opens the native Zhao Yun bind-pose viewport.\n";
            return 0;
        } else {
            std::cerr << "Unknown or incomplete argument: " << argument << '\n';
            return 2;
        }
    }

    try {
        fate::runtime_app::NativeRuntimeApp app;
        const auto report = app.initialize(!self_test, root.c_str(), evidence.c_str(), mods.c_str());
        if (self_test) {
            if (!report.window_created || report.vertex_count == 0U || report.triangle_count == 0U ||
                report.texture_pixel_count == 0U || report.rasterized_pixel_count == 0U) {
                std::cerr << "phase13_runtime_window_init: startup invariant failed\n";
                return 1;
            }
            std::cout << "{\"status\":\"PASS\",\"window_created\":true,\"character\":\"Zhao Yun\","
                      << "\"vertices\":" << report.vertex_count << ",\"triangles\":" << report.triangle_count
                      << ",\"mod_overrides\":" << report.mod_overrides_used
                      << ",\"texture_pixels\":" << report.texture_pixel_count << ",\"rasterized_pixels\":"
                      << report.rasterized_pixel_count << "}\n";
            return 0;
        }
        std::cout << "Fate Soldiers 3 viewport ready: Zhao Yun bind pose, " << report.vertex_count
                  << " vertices, " << report.triangle_count << " triangles.\n"
                  << "Controls: arrows orbit, +/- zoom, Esc close.\n";
        return app.run();
    } catch (const std::exception& error) {
        std::cerr << "fate_viewport: " << error.what() << '\n';
        return 1;
    }
}
