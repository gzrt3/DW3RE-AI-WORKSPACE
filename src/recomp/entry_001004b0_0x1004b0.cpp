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

// Function: entry_001004b0
// Address: 0x1004b0 - 0x1004f0
void entry_001004b0_0x1004b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004b0_0x1004b0");
#endif

    switch (ctx->pc) {
        case 0x1004e8u: goto label_1004e8;
        default: break;
    }

    ctx->pc = 0x1004b0u;

    // 0x1004b0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1004B0u;
    {
        const bool branch_taken_0x1004b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1004b0) {
            ctx->pc = 0x1004F0u;
            return;
        }
    }
    ctx->pc = 0x1004B8u;
    // 0x1004b8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1004b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1004bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1004bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1004c0: 0x24421b30  addiu       $v0, $v0, 0x1B30
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6960));
    // 0x1004c4: 0x24a518d0  addiu       $a1, $a1, 0x18D0
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
    // 0x1004c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1004cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1004ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1004d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1004d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1004d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1004dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004e0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1004E0u;
    SET_GPR_U32(ctx, 31, 0x1004E8u);
    ctx->pc = 0x1004E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004E0u;
    // 0x1004e4: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1004E0u, 0x1004E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004E8u;
label_1004e8:
    // 0x1004e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1004E8u;
    {
        const bool branch_taken_0x1004e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004e8) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x1004F0u;
}
