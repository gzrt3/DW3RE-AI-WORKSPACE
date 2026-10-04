#pragma once
#include <cstddef>
class PS2Runtime;
namespace fate::recomp {
// Preserve existing translations and reviewed overrides; fill only empty slots.
std::size_t register_generated_resumes(PS2Runtime& runtime);
}
