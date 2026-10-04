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

// Function: entry_001feccc
// Address: 0x1feccc - 0x1fecf4
void entry_001feccc_0x1feccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feccc_0x1feccc");
#endif

    ctx->pc = 0x1fecccu;

    // 0x1feccc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fecccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecd8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1fecdc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1fece0: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1fece4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1fece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x1fece8: 0x24844ae0  addiu       $a0, $a0, 0x4AE0
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19168));
    // 0x1fecec: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
    // 0x1fecf0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1fecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x1fecf4u;
}
