#pragma once

#include <cstddef>
#include <memory>

namespace fate::runtime_app {

struct StartupReport {
    bool window_created{};
    std::size_t vertex_count{};
    std::size_t triangle_count{};
    std::size_t texture_pixel_count{};
    std::size_t rasterized_pixel_count{};
    bool dual_iso_mounted{};
    std::size_t base_iso_files{};
    std::size_t xl_iso_files{};
    std::size_t base_resource_count{};
    std::size_t xl_resource_count{};
    std::size_t unit_count{};
    std::size_t mod_overrides_used{};
};

class NativeRuntimeApp {
public:
    NativeRuntimeApp();
    ~NativeRuntimeApp();

    NativeRuntimeApp(const NativeRuntimeApp&) = delete;
    NativeRuntimeApp& operator=(const NativeRuntimeApp&) = delete;
    NativeRuntimeApp(NativeRuntimeApp&&) = delete;
    NativeRuntimeApp& operator=(NativeRuntimeApp&&) = delete;

    [[nodiscard]] StartupReport initialize(bool show_window,
        const char* project_root = "C:/DW3",
        const char* evidence_path = "C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json",
        const char* mod_root = "C:/Fate Soldiers 3/mods");
    [[nodiscard]] StartupReport initialize_game(bool show_window,
        const char* base_iso = "C:/DW3/sources/Isos/DW3PS2.iso",
        const char* xl_iso = "C:/DW3/sources/Isos/DW3XL.iso",
        const char* mod_root = "C:/Fate Soldiers 3/mods");
    [[nodiscard]] int run();
    [[nodiscard]] int run_game();
    [[nodiscard]] const StartupReport& report() const noexcept;

private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};

} // namespace fate::runtime_app
