#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00240820
// Address: 0x240820 - 0x240834
void FUN_00240820_0x240820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240820_0x240820");
#endif

    ctx->pc = 0x240820u;

    // 0x240820: 0x938492f4  lbu         $a0, -0x6D0C($gp)
    ctx->pc = 0x240820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x240824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240828: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x24082c: 0xa423187e  sh          $v1, 0x187E($at)
    ctx->pc = 0x24082cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B187Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B187Eu, _value); } while (0);
    // 0x240830: 0x34830020  ori         $v1, $a0, 0x20
    ctx->pc = 0x240830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    ctx->pc = 0x240834u;
}
