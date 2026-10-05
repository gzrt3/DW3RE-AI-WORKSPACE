#pragma once
#include <array>
#include <cstdint>
#include <span>

class PS2Runtime;

namespace fate::recomp {
inline constexpr uint32_t PadBootStart = 0x00170b24u;
inline constexpr uint32_t PadBootEnd = 0x00170cf4u;
inline constexpr std::array<uint32_t,18> PadBootPcs{
    0x170b24u,0x170b48u,0x170b50u,0x170b60u,0x170b94u,0x170ba4u,
    0x170bc0u,0x170bd0u,0x170becu,0x170bf4u,0x170bfcu,0x170c08u,
    0x170c28u,0x170c6cu,0x170c8cu,0x170ca4u,0x170cd8u,0x170cdcu};
std::span<const uint32_t> pad_boot_original_words() noexcept;
void register_pad_boot_continuations(PS2Runtime& runtime);
inline constexpr uint32_t PadInitStart=0x001addd0u,PadInitEnd=0x001adee0u;
inline constexpr std::array<uint32_t,10> PadInitPcs{
    0x1addd0u,0x1addd8u,0x1ade0cu,0x1ade28u,0x1ade30u,
    0x1ade60u,0x1ade74u,0x1ade9cu,0x1adeb8u,0x1adec8u};
std::span<const uint32_t> pad_init_original_words() noexcept;
void register_pad_init_continuations(PS2Runtime& runtime);
inline constexpr uint32_t PadVersionStart=0x001aef98u,PadVersionEnd=0x001aefb4u;
inline constexpr std::array<uint32_t,4> PadVersionPcs{0x1aef98u,0x1aefa0u,0x1aefa4u,0x1aefa8u};
std::span<const uint32_t> pad_version_original_words() noexcept;
void register_pad_version_continuations(PS2Runtime& runtime);
}
