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

// Function: entry_0010046c
// Address: 0x10046c - 0x1004b0
void entry_0010046c_0x10046c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010046c_0x10046c");
#endif

    switch (ctx->pc) {
        case 0x1004a8u: goto label_1004a8;
        default: break;
    }

    ctx->pc = 0x10046cu;

    // 0x10046c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100470: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100470u;
    {
        const bool branch_taken_0x100470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x100474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100470u;
        // 0x100474: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100470) {
            ctx->pc = 0x1004B0u;
            return;
        }
    }
    ctx->pc = 0x100478u;
    // 0x100478: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x10047c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x10047cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100480: 0x2442e748  addiu       $v0, $v0, -0x18B8
    ctx->pc = 0x100480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960968));
    // 0x100484: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x100484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x100488: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10048c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100490: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10049c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10049cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004a0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004A0u;
    // 0x1004a4: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1004A0u, 0x1004A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1004A8u;
label_1004a8:
    // 0x1004a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1004A8u;
    {
        const bool branch_taken_0x1004a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1004a8) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x1004B0u;
}
