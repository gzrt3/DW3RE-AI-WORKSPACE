#pragma once
#include <array>
#include <cstdint>
#include <span>

class PS2Runtime;

namespace fate::recomp {
inline constexpr uint32_t WaitSemaResumeStart=0x001b1004u;
inline constexpr uint32_t WaitSemaResumeEnd=0x001b1158u;
inline constexpr std::array<uint32_t,11> WaitSemaResumePcs{
    0x001b1004u,0x001b100cu,0x001b1020u,0x001b1028u,0x001b1058u,
    0x001b106cu,0x001b1070u,0x001b10c4u,0x001b10d0u,0x001b10f8u,0x001b111cu};
std::span<const uint32_t> waitsema_original_words() noexcept;
void register_waitsema_continuations(PS2Runtime& runtime);
}
