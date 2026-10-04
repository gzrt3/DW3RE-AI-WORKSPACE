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

// Function: FUN_00181d50
// Address: 0x181d50 - 0x181da4
void FUN_00181d50_0x181d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181d50_0x181d50");
#endif

    switch (ctx->pc) {
        case 0x181da0u: goto label_181da0;
        default: break;
    }

    ctx->pc = 0x181d50u;

    // 0x181d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181d58: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x181d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x181d5c: 0x30e30040  andi        $v1, $a3, 0x40
    ctx->pc = 0x181d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x181d60: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x181D60u;
    {
        const bool branch_taken_0x181d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D60u;
        // 0x181d64: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d60) {
            ctx->pc = 0x181DA0u;
            goto label_181da0;
        }
    }
    ctx->pc = 0x181D68u;
    // 0x181d68: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x181D68u;
    {
        const bool branch_taken_0x181d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181d68) {
            ctx->pc = 0x181DA0u;
            goto label_181da0;
        }
    }
    ctx->pc = 0x181D70u;
    // 0x181d70: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x181d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x181d74: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x181d78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x181d7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x181d80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x181d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181d84: 0x24e20d80  addiu       $v0, $a3, 0xD80
    ctx->pc = 0x181d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
    // 0x181d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181d8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181d90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x181d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d94: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x181d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x181d98: 0xc066e26  jal         func_19B898
    ctx->pc = 0x181D98u;
    SET_GPR_U32(ctx, 31, 0x181DA0u);
    ctx->pc = 0x181D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D98u;
    // 0x181d9c: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x181D98u, 0x181DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DA0u;
label_181da0:
    // 0x181da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x181da4u;
}
