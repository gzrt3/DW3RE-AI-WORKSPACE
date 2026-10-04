#pragma once
#include <cstdint>

struct R5900Context;
class PS2Runtime;

namespace fate {
namespace dispatch {

typedef void (*RecompiledFunc)(uint8_t*, R5900Context*, PS2Runtime*);

void init_dispatcher();
RecompiledFunc get_function(uint32_t pc);
void execute_indirect_jump(uint32_t target_pc, uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);

} // namespace dispatch
} // namespace fate
