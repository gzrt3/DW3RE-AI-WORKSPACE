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

// Function: entry_0022f898
// Address: 0x22f898 - 0x22f8bc
void entry_0022f898_0x22f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f898_0x22f898");
#endif

    ctx->pc = 0x22f898u;

    // 0x22f898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8a4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f8a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f8ac: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f8b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f8b4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f8b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x22f8bcu;
}
