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

// Function: FUN_002401b0
// Address: 0x2401b0 - 0x2401d0
void FUN_002401b0_0x2401b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002401b0_0x2401b0");
#endif

    ctx->pc = 0x2401b0u;

    // 0x2401b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2401b4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2401b8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2401b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2401bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2401bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2401c0: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x2401c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x2401c4: 0x24a52330  addiu       $a1, $a1, 0x2330
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9008));
    // 0x2401c8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2401C8u;
    SET_GPR_U32(ctx, 31, 0x2401D0u);
    ctx->pc = 0x2401CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401C8u;
    // 0x2401cc: 0x34068f70  ori         $a2, $zero, 0x8F70 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36720);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2401C8u, 0x2401D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401D0u;
}
