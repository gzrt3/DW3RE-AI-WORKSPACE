#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include "fate/runtime_app.hpp"
#include "fate/gameplay.hpp"
#include "fate/vfs.hpp"

#include "fate/formats/ps2_model.hpp"
#include "fate/formats/tm3.hpp"
#include "fate/runtime_manifest.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <chrono>
#include <limits>
#include <memory>
#include <span>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace fate::runtime_app {
namespace {

using fate::formats::ps2_model::DecodedMesh;

struct Vec3 {
    float x{};
    float y{};
    float z{};
};

[[nodiscard]] Vec3 add(Vec3 a, Vec3 b) noexcept { return {a.x + b.x, a.y + b.y, a.z + b.z}; }
[[nodiscard]] Vec3 subtract(Vec3 a, Vec3 b) noexcept { return {a.x - b.x, a.y - b.y, a.z - b.z}; }
[[nodiscard]] Vec3 scale(Vec3 value, float factor) noexcept {
    return {value.x * factor, value.y * factor, value.z * factor};
}
[[nodiscard]] float dot(Vec3 a, Vec3 b) noexcept { return a.x * b.x + a.y * b.y + a.z * b.z; }
[[nodiscard]] Vec3 cross(Vec3 a, Vec3 b) noexcept {
    return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
}
[[nodiscard]] Vec3 normalized(Vec3 value) noexcept {
    const float length = std::sqrt(dot(value, value));
    return length > 0.000001F ? scale(value, 1.0F / length) : Vec3{0.0F, 0.0F, 1.0F};
}
[[nodiscard]] Vec3 from_array(const std::array<float, 3>& value, bool reflect_y = false) noexcept {
    return {value[0], reflect_y ? -value[1] : value[1], value[2]};
}
[[nodiscard]] float edge(float ax, float ay, float bx, float by, float px, float py) noexcept {
    return (px - ax) * (by - ay) - (py - ay) * (bx - ax);
}
[[nodiscard]] float wrap_unit(float value) noexcept { return value - std::floor(value); }

struct Texture {
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<std::uint32_t> rgba;
};

struct ProjectedVertex {
    float x{};
    float y{};
    float inverse_z{};
    float u_over_z{};
    float v_over_z{};
    float light_over_z{};
};

class CpuFrameRenderer {
public:
    void initialize(DecodedMesh mesh, std::array<Texture, 4> textures, std::uint32_t texture_height) {
        if (mesh.vertices.empty() || mesh.triangles.empty() || texture_height == 0U) {
            throw std::runtime_error("VIEWPORT_INVALID: model mesh or texture is empty");
        }
        mesh_ = std::move(mesh);
        textures_ = std::move(textures);
        texture_height_ = texture_height;
        std::uint32_t padded_height = 1U;
        while (padded_height < texture_height_) padded_height <<= 1U;
        uv_height_scale_ = static_cast<float>(padded_height) / static_cast<float>(texture_height_);
        const Vec3 low = from_array(mesh_.bounds_min, true);
        const Vec3 high = from_array(mesh_.bounds_max, true);
        target_ = scale(add(low, high), 0.5F);
        const Vec3 extent = subtract(high, low);
        radius_ = std::max(1.0F, std::sqrt(dot(extent, extent)) * 0.5F);
        camera_distance_ = radius_ * 3.0F;
    }

    [[nodiscard]] std::size_t render(std::uint32_t width, std::uint32_t height,
                                     float yaw, float pitch, float zoom,
                                     std::span<const gameplay::ActorPose> actors = {}) {
        width_ = std::clamp(width, 1U, 2048U);
        height_ = std::clamp(height, 1U, 2048U);
        const std::size_t count = static_cast<std::size_t>(width_) * static_cast<std::size_t>(height_);
        if (frame_.size() != count) {
            frame_.resize(count);
            depth_.resize(count);
        }
        clear_buffers();

        const float cos_pitch = std::cos(pitch);
        const Vec3 eye_offset{
            std::sin(yaw) * cos_pitch,
            std::sin(pitch),
            std::cos(yaw) * cos_pitch
        };
        const float distance = std::max(radius_ * 1.15F, camera_distance_ * zoom);
        const Vec3 eye = add(target_, scale(eye_offset, distance));
        const Vec3 forward = normalized(subtract(target_, eye));
        const Vec3 right = normalized(cross(forward, Vec3{0.0F, 1.0F, 0.0F}));
        const Vec3 up = normalized(cross(right, forward));
        const Vec3 light = normalized(Vec3{-0.35F, 0.82F, -0.44F});
        const float focal = static_cast<float>(std::min(width_, height_)) * 0.92F;
        const float center_x = static_cast<float>(width_) * 0.5F;
        const float center_y = static_cast<float>(height_) * 0.5F;
        std::size_t covered_pixels = 0U;

        const std::array<gameplay::ActorPose, 1> fallback_actor{{
            gameplay::ActorPose{0U, 0.0F, 0.0F, 0.0F, 100.0F, 0.0F, 0U, gameplay::UnitState::idle}}};
        const std::span<const gameplay::ActorPose> render_actors = actors.empty()
            ? std::span<const gameplay::ActorPose>(fallback_actor) : actors;
        for (const auto& actor : render_actors) {
            const float actor_cos = std::cos(actor.yaw);
            const float actor_sin = std::sin(actor.yaw);
            const float actor_scale = radius_ / 6.0F;
            for (std::size_t triangle_index = 0; triangle_index < mesh_.triangles.size(); ++triangle_index) {
            const auto& triangle = mesh_.triangles[triangle_index];
            if (triangle[0] >= mesh_.vertices.size() || triangle[1] >= mesh_.vertices.size() ||
                triangle[2] >= mesh_.vertices.size()) {
                continue;
            }
            std::array<ProjectedVertex, 3> projected{};
            bool visible = true;
            for (std::size_t corner = 0; corner < projected.size(); ++corner) {
                const auto& vertex = mesh_.vertices[triangle[corner]];
                const Vec3 source_position = from_array(vertex.position, true);
                const Vec3 position{
                    source_position.x * actor_cos + source_position.z * actor_sin + actor.x * actor_scale,
                    source_position.y,
                    -source_position.x * actor_sin + source_position.z * actor_cos + actor.z * actor_scale
                };
                const Vec3 relative = subtract(position, eye);
                const float view_x = dot(relative, right);
                const float view_y = dot(relative, up);
                const float view_z = dot(relative, forward);
                if (view_z <= 0.05F || !std::isfinite(view_z)) {
                    visible = false;
                    break;
                }
                const float inverse_z = 1.0F / view_z;
                const Vec3 source_normal = from_array(vertex.normal, true);
                const Vec3 normal = normalized({source_normal.x * actor_cos + source_normal.z * actor_sin,
                    source_normal.y, -source_normal.x * actor_sin + source_normal.z * actor_cos});
                const float illumination = 0.38F + 0.62F * std::max(0.0F, dot(normal, light));
                projected[corner] = {
                    center_x + focal * view_x * inverse_z,
                    center_y - focal * view_y * inverse_z,
                    inverse_z,
                    vertex.uv[0] * inverse_z,
                    (1.0F - vertex.uv[1] * uv_height_scale_) * inverse_z,
                    illumination * inverse_z
                };
            }
            if (!visible) continue;

            const float area = edge(projected[0].x, projected[0].y,
                                    projected[1].x, projected[1].y,
                                    projected[2].x, projected[2].y);
            if (std::abs(area) < 0.0001F || !std::isfinite(area)) continue;
            const float min_x = std::min({projected[0].x, projected[1].x, projected[2].x});
            const float max_x = std::max({projected[0].x, projected[1].x, projected[2].x});
            const float min_y = std::min({projected[0].y, projected[1].y, projected[2].y});
            const float max_y = std::max({projected[0].y, projected[1].y, projected[2].y});
            const int x0 = std::max(0, static_cast<int>(std::floor(min_x)));
            const int y0 = std::max(0, static_cast<int>(std::floor(min_y)));
            const int x1 = std::min(static_cast<int>(width_) - 1, static_cast<int>(std::ceil(max_x)));
            const int y1 = std::min(static_cast<int>(height_) - 1, static_cast<int>(std::ceil(max_y)));
            if (x0 > x1 || y0 > y1) continue;

            const std::uint16_t cbp = triangle_index < mesh_.triangle_cbp_offsets.size()
                ? mesh_.triangle_cbp_offsets[triangle_index] : 0U;
            const std::size_t palette_index = cbp == 0U ? 0U : (cbp == 4U ? 1U : (cbp == 8U ? 2U : 3U));
            const Texture& texture = textures_[palette_index];
            for (int y = y0; y <= y1; ++y) {
                for (int x = x0; x <= x1; ++x) {
                    const float sample_x = static_cast<float>(x) + 0.5F;
                    const float sample_y = static_cast<float>(y) + 0.5F;
                    const float w0 = edge(projected[1].x, projected[1].y, projected[2].x, projected[2].y,
                                          sample_x, sample_y) / area;
                    const float w1 = edge(projected[2].x, projected[2].y, projected[0].x, projected[0].y,
                                          sample_x, sample_y) / area;
                    const float w2 = 1.0F - w0 - w1;
                    if (w0 < -0.0001F || w1 < -0.0001F || w2 < -0.0001F) continue;
                    const float inverse_z = w0 * projected[0].inverse_z + w1 * projected[1].inverse_z +
                                            w2 * projected[2].inverse_z;
                    const std::size_t pixel_index = static_cast<std::size_t>(y) * width_ +
                                                    static_cast<std::size_t>(x);
                    if (inverse_z <= depth_[pixel_index] || inverse_z <= 0.0F) continue;
                    const float u = wrap_unit((w0 * projected[0].u_over_z + w1 * projected[1].u_over_z +
                                               w2 * projected[2].u_over_z) / inverse_z);
                    const float v = wrap_unit((w0 * projected[0].v_over_z + w1 * projected[1].v_over_z +
                                               w2 * projected[2].v_over_z) / inverse_z);
                    const float illumination = std::clamp((w0 * projected[0].light_over_z +
                        w1 * projected[1].light_over_z + w2 * projected[2].light_over_z) / inverse_z,
                        0.0F, 1.0F);
                    std::uint32_t texel = sample_bilinear(texture, u, v);
                    if (actor.team != 0U) {
                        const std::uint32_t green = ((texel >> 8U) & 0xFFU) * 3U / 4U;
                        const std::uint32_t blue = ((texel >> 16U) & 0xFFU) * 3U / 4U;
                        texel = (texel & 0xFF0000FFU) | (green << 8U) | (blue << 16U);
                    }
                    const std::uint32_t alpha = texel >> 24U;
                    if (alpha < 8U) continue;
                    depth_[pixel_index] = inverse_z;
                    frame_[pixel_index] = shade_and_blend(texel, illumination, frame_[pixel_index]);
                    ++covered_pixels;
                }
            }
        }
        }
        return covered_pixels;
    }

    [[nodiscard]] int blit(HDC device_context) const noexcept {
        if (device_context == nullptr || frame_.empty()) return GDI_ERROR;
        BITMAPINFO bitmap{};
        bitmap.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bitmap.bmiHeader.biWidth = static_cast<LONG>(width_);
        bitmap.bmiHeader.biHeight = -static_cast<LONG>(height_);
        bitmap.bmiHeader.biPlanes = 1U;
        bitmap.bmiHeader.biBitCount = 32U;
        bitmap.bmiHeader.biCompression = BI_RGB;
        return StretchDIBits(device_context, 0, 0, static_cast<int>(width_), static_cast<int>(height_),
            0, 0, static_cast<int>(width_), static_cast<int>(height_), frame_.data(), &bitmap,
            DIB_RGB_COLORS, SRCCOPY);
    }

    [[nodiscard]] std::uint32_t texture_width() const noexcept { return textures_[0].width; }
    [[nodiscard]] std::uint32_t texture_height() const noexcept { return textures_[0].height; }

private:
    [[nodiscard]] static std::uint32_t sample_bilinear(const Texture& texture, float u, float v) noexcept {
        if (texture.width == 0U || texture.height == 0U || texture.rgba.empty()) return 0U;
        const float fx = wrap_unit(u) * static_cast<float>(texture.width - 1U);
        const float fy = wrap_unit(v) * static_cast<float>(texture.height - 1U);
        const std::uint32_t x0 = static_cast<std::uint32_t>(fx);
        const std::uint32_t y0 = static_cast<std::uint32_t>(fy);
        const std::uint32_t x1 = (x0 + 1U) % texture.width;
        const std::uint32_t y1 = (y0 + 1U) % texture.height;
        const float tx = fx - static_cast<float>(x0);
        const float ty = fy - static_cast<float>(y0);
        const std::array<std::uint32_t, 4> samples{
            texture.rgba[static_cast<std::size_t>(y0) * texture.width + x0],
            texture.rgba[static_cast<std::size_t>(y0) * texture.width + x1],
            texture.rgba[static_cast<std::size_t>(y1) * texture.width + x0],
            texture.rgba[static_cast<std::size_t>(y1) * texture.width + x1]
        };
        std::uint32_t result = 0U;
        for (std::uint32_t channel_shift : {0U, 8U, 16U, 24U}) {
            const float top = static_cast<float>((samples[0] >> channel_shift) & 0xFFU) * (1.0F - tx) +
                              static_cast<float>((samples[1] >> channel_shift) & 0xFFU) * tx;
            const float bottom = static_cast<float>((samples[2] >> channel_shift) & 0xFFU) * (1.0F - tx) +
                                 static_cast<float>((samples[3] >> channel_shift) & 0xFFU) * tx;
            const auto value = static_cast<std::uint32_t>(std::clamp(top * (1.0F - ty) + bottom * ty, 0.0F, 255.0F));
            result |= value << channel_shift;
        }
        return result;
    }

    [[nodiscard]] static std::uint32_t shade_and_blend(std::uint32_t rgba, float light,
                                                        std::uint32_t background) noexcept {
        const float alpha = static_cast<float>(rgba >> 24U) / 255.0F;
        const float inverse_alpha = 1.0F - alpha;
        std::array<std::uint32_t, 3> channels{};
        for (std::size_t index = 0; index < channels.size(); ++index) {
            const std::uint32_t shift = static_cast<std::uint32_t>(index) * 8U;
            const float source = static_cast<float>((rgba >> shift) & 0xFFU) * light;
            const float dest = static_cast<float>((background >> shift) & 0xFFU);
            channels[index] = static_cast<std::uint32_t>(std::clamp(source * alpha + dest * inverse_alpha, 0.0F, 255.0F));
        }
        return channels[0] | (channels[1] << 8U) | (channels[2] << 16U);
    }

    void clear_buffers() {
        for (std::uint32_t y = 0; y < height_; ++y) {
            const float shade = static_cast<float>(y) / static_cast<float>(std::max(1U, height_ - 1U));
            const std::uint32_t red = static_cast<std::uint32_t>(12.0F + 7.0F * shade);
            const std::uint32_t green = static_cast<std::uint32_t>(17.0F + 8.0F * shade);
            const std::uint32_t blue = static_cast<std::uint32_t>(31.0F + 13.0F * shade);
            const std::uint32_t color = red | (green << 8U) | (blue << 16U);
            const std::size_t row = static_cast<std::size_t>(y) * width_;
            std::fill(frame_.begin() + static_cast<std::ptrdiff_t>(row),
                      frame_.begin() + static_cast<std::ptrdiff_t>(row + width_), color);
        }
        std::fill(depth_.begin(), depth_.end(), 0.0F);
    }

    DecodedMesh mesh_;
    std::array<Texture, 4> textures_;
    std::vector<std::uint32_t> frame_;
    std::vector<float> depth_;
    std::uint32_t width_{960U};
    std::uint32_t height_{720U};
    std::uint32_t texture_height_{};
    float uv_height_scale_{1.0F};
    Vec3 target_{};
    float radius_{100.0F};
    float camera_distance_{300.0F};
};

} // namespace

struct NativeRuntimeApp::Impl {
    StartupReport startup;
    CpuFrameRenderer renderer;
    gameplay::ActiveUnits units;
    gameplay::FixedStepGameLoop game_loop;
    vfs::DualIsoVfs dual_vfs;
    HWND window{};
    bool interactive{};
    bool running{};
    bool game_mode{};
    bool normal_pressed{};
    bool charge_pressed{};
    bool musou_pressed{};
    float yaw{0.35F};
    float pitch{0.08F};
    float zoom{1.0F};

    static constexpr wchar_t kWindowClass[] = L"FateSoldiers3NativeViewport";

    static LRESULT CALLBACK window_proc(HWND handle, UINT message, WPARAM wparam, LPARAM lparam) {
        Impl* self = reinterpret_cast<Impl*>(GetWindowLongPtrW(handle, GWLP_USERDATA));
        if (message == WM_NCCREATE) {
            const auto* create = reinterpret_cast<const CREATESTRUCTW*>(lparam);
            self = static_cast<Impl*>(create->lpCreateParams);
            SetWindowLongPtrW(handle, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(self));
        }
        if (self == nullptr) return DefWindowProcW(handle, message, wparam, lparam);

        switch (message) {
            case WM_ERASEBKGND:
                return 1;
            case WM_SIZE:
                InvalidateRect(handle, nullptr, FALSE);
                return 0;
            case WM_KEYDOWN:
                if (wparam == VK_ESCAPE) {
                    DestroyWindow(handle);
                    return 0;
                }
                if (self->game_mode) {
                    const bool first_press = (static_cast<std::uint32_t>(lparam) & 0x40000000U) == 0U;
                    if (first_press && wparam == 'J') self->normal_pressed = true;
                    else if (first_press && wparam == 'K') self->charge_pressed = true;
                    else if (first_press && wparam == 'L') self->musou_pressed = true;
                    return 0;
                }
                if (wparam == VK_LEFT) self->yaw -= 0.08F;
                else if (wparam == VK_RIGHT) self->yaw += 0.08F;
                else if (wparam == VK_UP) self->pitch = std::min(0.8F, self->pitch + 0.06F);
                else if (wparam == VK_DOWN) self->pitch = std::max(-0.65F, self->pitch - 0.06F);
                else if (wparam == VK_OEM_PLUS || wparam == VK_ADD) self->zoom = std::max(0.55F, self->zoom * 0.9F);
                else if (wparam == VK_OEM_MINUS || wparam == VK_SUBTRACT) self->zoom = std::min(2.5F, self->zoom * 1.1F);
                InvalidateRect(handle, nullptr, FALSE);
                return 0;
            case WM_PAINT: {
                PAINTSTRUCT paint{};
                HDC device_context = BeginPaint(handle, &paint);
                RECT client{};
                if (GetClientRect(handle, &client) != 0) {
                    const LONG width = std::max(1L, client.right - client.left);
                    const LONG height = std::max(1L, client.bottom - client.top);
                    const auto actors = self->game_mode ? self->units.actors() : std::vector<gameplay::ActorPose>{};
                    (void)self->renderer.render(static_cast<std::uint32_t>(width),
                        static_cast<std::uint32_t>(height), self->yaw, self->pitch, self->zoom, actors);
                    (void)self->renderer.blit(device_context);
                    if (self->game_mode && self->units.size() > 0U) {
                        const auto player = self->units.view(self->units.player_index());
                        SetBkMode(device_context, TRANSPARENT);
                        SetTextColor(device_context, RGB(244, 244, 232));
                        const std::wstring status = L"Life " + std::to_wstring(static_cast<int>(player.life)) +
                            L"   Musou " + std::to_wstring(static_cast<int>(player.musou)) +
                            L"   Enemies " + std::to_wstring(self->units.alive_count(1U)) +
                            L"   " + std::wstring(player.state == gameplay::UnitState::attack ? L"ATTACK" :
                                player.state == gameplay::UnitState::march ? L"MARCH" : L"IDLE");
                        (void)TextOutW(device_context, 18, 16, status.c_str(), static_cast<int>(status.size()));
                        constexpr wchar_t controls[] = L"WASD Move   J Square   K Charge   L Musou   Esc Exit";
                        (void)TextOutW(device_context, 18, 40, controls,
                            static_cast<int>(sizeof(controls) / sizeof(controls[0]) - 1U));
                    }
                }
                EndPaint(handle, &paint);
                return 0;
            }
            case WM_DESTROY:
                self->window = nullptr;
                self->running = false;
                if (self->interactive) PostQuitMessage(0);
                return 0;
            default:
                break;
        }
        (void)wparam;
        (void)lparam;
        return DefWindowProcW(handle, message, wparam, lparam);
    }

    void create_window(bool show, const wchar_t* title = L"Fate Soldiers 3 — Zhao Yun (Bind Pose)") {
        const HINSTANCE instance = GetModuleHandleW(nullptr);
        WNDCLASSEXW window_class{};
        window_class.cbSize = sizeof(window_class);
        window_class.style = CS_HREDRAW | CS_VREDRAW;
        window_class.lpfnWndProc = &Impl::window_proc;
        window_class.hInstance = instance;
        window_class.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));
        window_class.hbrBackground = nullptr;
        window_class.lpszClassName = kWindowClass;
        if (RegisterClassExW(&window_class) == 0U && GetLastError() != ERROR_CLASS_ALREADY_EXISTS) {
            throw std::runtime_error("VIEWPORT_WINDOW: RegisterClassExW failed");
        }

        RECT rectangle{0, 0, 960, 720};
        if (AdjustWindowRect(&rectangle, WS_OVERLAPPEDWINDOW, FALSE) == 0) {
            throw std::runtime_error("VIEWPORT_WINDOW: AdjustWindowRect failed");
        }
        interactive = show;
        window = CreateWindowExW(0U, kWindowClass, title,
            WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
            rectangle.right - rectangle.left, rectangle.bottom - rectangle.top,
            nullptr, nullptr, instance, this);
        if (window == nullptr) throw std::runtime_error("VIEWPORT_WINDOW: CreateWindowExW failed");
        startup.window_created = true;
        if (show) {
            ShowWindow(window, SW_SHOW);
            UpdateWindow(window);
        }
    }

    void load_assets(const char* project_root, const char* evidence_path, const char* mod_root) {
        using namespace fate::runtime;
        using namespace fate::formats;
        dual_vfs.mount_mods(mod_root);
        const RuntimeSourceRegistry registry = load_precomputed(evidence_path, project_root);
        RuntimeResourceService service(64ULL * 1024ULL * 1024ULL);
        service.publish(registry, numeric_mappings(registry));

        DecodedMesh mesh{};
        if (auto obj = dual_vfs.read_mod_asset(dual::GameVersion::base, 207U, ".obj")) {
            if (obj->empty()) throw std::runtime_error("MOD_INVALID: empty OBJ override for RID 207");
            const std::string_view obj_text(reinterpret_cast<const char*>(obj->data()), obj->size());
            mesh = ps2_model::import_obj(obj_text);
            ++startup.mod_overrides_used;
        } else {
            std::vector<std::byte> model_bytes;
            if (auto override_bytes = dual_vfs.read_mod_resource(dual::GameVersion::base, 207U)) {
                model_bytes = std::move(*override_bytes);
                ++startup.mod_overrides_used;
            } else {
                const auto model_handle = service.open(Key{game_id("dw3"), 207U});
                model_bytes = *service.raw(model_handle, 0U, model_handle.view.size());
            }
            const auto model = ps2_model::parse_model(model_bytes);
            mesh = ps2_model::decode_posed_lod_mesh(model_bytes, model, 0U);
        }

        std::array<Texture, 4> palette_textures{};
        std::uint32_t texture_height{};
        if (auto bmp = dual_vfs.read_mod_asset(dual::GameVersion::base, 150U, ".bmp")) {
            const auto image = tm3::import_bmp(*bmp);
            texture_height = image.height;
            for (auto& decoded : palette_textures) {
                decoded.width = image.width;
                decoded.height = image.height;
                decoded.rgba = image.pixels;
            }
            ++startup.mod_overrides_used;
        } else {
            std::vector<std::byte> texture_bytes;
            if (auto override_bytes = dual_vfs.read_mod_resource(dual::GameVersion::base, 150U)) {
                texture_bytes = std::move(*override_bytes);
                ++startup.mod_overrides_used;
            } else {
                const auto texture_handle = service.open(Key{game_id("dw3"), 150U});
                texture_bytes = *service.raw(texture_handle, 0U, texture_handle.view.size());
            }
            const auto texture = tm3::parse_tm3(texture_bytes);
            texture_height = texture.header.primary_height;
            for (std::size_t quadrant = 0; quadrant < palette_textures.size(); ++quadrant) {
                auto& decoded = palette_textures[quadrant];
                decoded.width = texture.header.primary_width;
                decoded.height = texture.header.primary_height;
                decoded.rgba = tm3::decode_rgba(texture, 0U, static_cast<std::uint32_t>(quadrant) * 4U);
            }
        }
        startup.vertex_count = mesh.vertices.size();
        startup.triangle_count = mesh.triangles.size();
        startup.texture_pixel_count = palette_textures[0].rgba.size() * palette_textures.size();
        renderer.initialize(std::move(mesh), std::move(palette_textures), texture_height);
    }

    void load_game_assets(const char* base_iso, const char* xl_iso, const char* mod_root) {
        using namespace fate::formats;
        dual_vfs.mount_mods(mod_root);
        dual_vfs.mount(base_iso, xl_iso);
        // The canonical Zhao Yun RID/name anchor is verified in DW3 Base; RID overlap alone
        // does not prove that the XL payload has the same logical identity or format.
        DecodedMesh mesh{};
        if (auto obj = dual_vfs.read_mod_asset(dual::GameVersion::base, 207U, ".obj")) {
            if (obj->empty()) throw std::runtime_error("MOD_INVALID: empty OBJ override for RID 207");
            const std::string_view obj_text(reinterpret_cast<const char*>(obj->data()), obj->size());
            mesh = ps2_model::import_obj(obj_text);
            ++startup.mod_overrides_used;
        } else {
            auto model_payload = dual_vfs.read_resource(207U, dual::GameVersion::base);
            if (model_payload.origin == vfs::PayloadOrigin::mod_override) ++startup.mod_overrides_used;
            const auto model = ps2_model::parse_model(model_payload.bytes);
            mesh = ps2_model::decode_posed_lod_mesh(model_payload.bytes, model, 0U);
        }

        std::array<Texture, 4> palette_textures{};
        std::uint32_t texture_height{};
        if (auto bmp = dual_vfs.read_mod_asset(dual::GameVersion::base, 150U, ".bmp")) {
            const auto image = tm3::import_bmp(*bmp);
            texture_height = image.height;
            for (auto& decoded : palette_textures) {
                decoded.width = image.width;
                decoded.height = image.height;
                decoded.rgba = image.pixels;
            }
            ++startup.mod_overrides_used;
        } else {
            auto texture_payload = dual_vfs.read_resource(150U, dual::GameVersion::base);
            if (texture_payload.origin == vfs::PayloadOrigin::mod_override) ++startup.mod_overrides_used;
            const auto texture = tm3::parse_tm3(texture_payload.bytes);
            texture_height = texture.header.primary_height;
            for (std::size_t bank = 0; bank < palette_textures.size(); ++bank) {
                auto& decoded = palette_textures[bank];
                decoded.width = texture.header.primary_width;
                decoded.height = texture.header.primary_height;
                decoded.rgba = tm3::decode_rgba(texture, 0U, static_cast<std::uint32_t>(bank) * 4U);
            }
        }
        startup.vertex_count = mesh.vertices.size();
        startup.triangle_count = mesh.triangles.size();
        startup.texture_pixel_count = palette_textures[0].rgba.size() * palette_textures.size();
        renderer.initialize(std::move(mesh), std::move(palette_textures), texture_height);
        (void)units.spawn(207U, 0U, 0.0F, 0.0F, 0.0F, false, true);
        (void)units.spawn(1001U, 1U, -1.0F, 0.0F, 4.2F);
        (void)units.spawn(1002U, 1U, 2.6F, 0.0F, 6.2F, true);
        (void)units.spawn(1003U, 1U, -3.0F, 0.0F, 7.0F);
        const auto& mount = dual_vfs.report();
        startup.dual_iso_mounted = dual_vfs.mounted();
        startup.base_iso_files = mount.base_files;
        startup.xl_iso_files = mount.xl_files;
        startup.base_resource_count = mount.base_resources;
        startup.xl_resource_count = mount.xl_resources;
        startup.unit_count = units.size();
    }
};

constexpr wchar_t NativeRuntimeApp::Impl::kWindowClass[];

NativeRuntimeApp::NativeRuntimeApp() : impl_(std::make_unique<Impl>()) {}
NativeRuntimeApp::~NativeRuntimeApp() {
    if (impl_ != nullptr && impl_->window != nullptr) DestroyWindow(impl_->window);
}
StartupReport NativeRuntimeApp::initialize(bool show_window, const char* project_root, const char* evidence_path,
                                           const char* mod_root) {
    if (impl_ == nullptr) throw std::runtime_error("VIEWPORT_INVALID: moved-from app");
    impl_->load_assets(project_root, evidence_path, mod_root);
    impl_->create_window(show_window);
    impl_->startup.rasterized_pixel_count = impl_->renderer.render(960U, 720U,
        impl_->yaw, impl_->pitch, impl_->zoom);
    if (impl_->startup.rasterized_pixel_count == 0U) {
        throw std::runtime_error("VIEWPORT_INVALID: initial frame did not rasterize any textured pixels");
    }
    HDC device_context = GetDC(impl_->window);
    if (device_context == nullptr) throw std::runtime_error("VIEWPORT_GRAPHICS: GetDC failed");
    const int blit_result = impl_->renderer.blit(device_context);
    (void)ReleaseDC(impl_->window, device_context);
    if (blit_result == GDI_ERROR) throw std::runtime_error("VIEWPORT_GRAPHICS: initial GDI framebuffer upload failed");
    return impl_->startup;
}

StartupReport NativeRuntimeApp::initialize_game(bool show_window, const char* base_iso, const char* xl_iso,
                                                const char* mod_root) {
    if (impl_ == nullptr) throw std::runtime_error("GAME_INVALID: moved-from app");
    impl_->game_mode = true;
    impl_->load_game_assets(base_iso, xl_iso, mod_root);
    impl_->create_window(show_window, L"Fate Soldiers 3 — Native Combat Prototype");
    const auto actors = impl_->units.actors();
    impl_->startup.rasterized_pixel_count = impl_->renderer.render(960U, 720U,
        impl_->yaw, impl_->pitch, impl_->zoom, actors);
    if (impl_->startup.rasterized_pixel_count == 0U)
        throw std::runtime_error("GAME_INVALID: initial battlefield frame rendered no pixels");
    HDC device_context = GetDC(impl_->window);
    if (device_context == nullptr) throw std::runtime_error("GAME_GRAPHICS: GetDC failed");
    const int blit_result = impl_->renderer.blit(device_context);
    (void)ReleaseDC(impl_->window, device_context);
    if (blit_result == GDI_ERROR) throw std::runtime_error("GAME_GRAPHICS: framebuffer upload failed");
    return impl_->startup;
}

int NativeRuntimeApp::run() {
    if (impl_ == nullptr || impl_->window == nullptr || !impl_->interactive) {
        throw std::runtime_error("VIEWPORT_INVALID: interactive window was not initialized");
    }
    impl_->running = true;
    MSG message{};
    while (impl_->running) {
        while (PeekMessageW(&message, nullptr, 0U, 0U, PM_REMOVE) != 0) {
            if (message.message == WM_QUIT) {
                impl_->running = false;
                break;
            }
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
        if (impl_->window != nullptr) {
            InvalidateRect(impl_->window, nullptr, FALSE);
            Sleep(16U);
        }
    }
    return 0;
}

int NativeRuntimeApp::run_game() {
    if (impl_ == nullptr || impl_->window == nullptr || !impl_->interactive || !impl_->game_mode)
        throw std::runtime_error("GAME_INVALID: native game window was not initialized");
    impl_->running = true;
    MSG message{};
    auto previous = std::chrono::steady_clock::now();
    while (impl_->running) {
        while (PeekMessageW(&message, nullptr, 0U, 0U, PM_REMOVE) != 0) {
            if (message.message == WM_QUIT) {
                impl_->running = false;
                break;
            }
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
        if (impl_->window == nullptr) break;
        const auto now = std::chrono::steady_clock::now();
        const double elapsed = std::chrono::duration<double>(now - previous).count();
        previous = now;
        bool first_step = true;
        const std::size_t steps = impl_->game_loop.advance(elapsed, [this, &first_step](float fixed) {
            gameplay::PlayerInput input{};
            if ((GetAsyncKeyState('A') & 0x8000) != 0) input.move_x -= 1.0F;
            if ((GetAsyncKeyState('D') & 0x8000) != 0) input.move_x += 1.0F;
            if ((GetAsyncKeyState('W') & 0x8000) != 0) input.move_z += 1.0F;
            if ((GetAsyncKeyState('S') & 0x8000) != 0) input.move_z -= 1.0F;
            if (first_step) {
                input.normal_attack = impl_->normal_pressed;
                input.charge_attack = impl_->charge_pressed;
                input.musou_attack = impl_->musou_pressed;
                impl_->normal_pressed = false;
                impl_->charge_pressed = false;
                impl_->musou_pressed = false;
                first_step = false;
            }
            impl_->units.update(fixed, input);
        });
        if (steps > 0U) InvalidateRect(impl_->window, nullptr, FALSE);
        Sleep(1U);
    }
    return 0;
}

const StartupReport& NativeRuntimeApp::report() const noexcept {
    static const StartupReport empty{};
    return impl_ == nullptr ? empty : impl_->startup;
}

} // namespace fate::runtime_app
