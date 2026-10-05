#pragma once
#include <cstdint>
#include <span>
class PS2Runtime;
namespace fate::recomp {
std::span<const uint32_t> irq_return_original_words() noexcept;
void register_irq_return_continuation(PS2Runtime& runtime);
}
