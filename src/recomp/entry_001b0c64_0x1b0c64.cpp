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

// Function: entry_001b0c64
// Address: 0x1b0c64 - 0x1b0cec
void entry_001b0c64_0x1b0c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c64_0x1b0c64");
#endif

    switch (ctx->pc) {
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0ce4u: goto label_1b0ce4;
        default: break;
    }

    ctx->pc = 0x1b0c64u;

    // 0x1b0c64: 0x2532823  subu        $a1, $s2, $s3
    ctx->pc = 0x1b0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1b0c68: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1b0c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1b0c6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0c74: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0C74u;
    SET_GPR_U32(ctx, 31, 0x1B0C7Cu);
    ctx->pc = 0x1B0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C74u;
    // 0x1b0c78: 0x26a861d8  addiu       $t0, $s5, 0x61D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 25048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0C74u, 0x1B0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C7Cu;
label_1b0c7c:
    // 0x1b0c7c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1b0c7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0c80: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1b0c80u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b0c84: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B0C84u;
    {
        const bool branch_taken_0x1b0c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C84u;
        // 0x1b0c88: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c84) {
            ctx->pc = 0x1B0CBCu;
            goto label_1b0cbc;
        }
    }
    ctx->pc = 0x1B0C8Cu;
    // 0x1b0c8c: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b0c90: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B0C90u;
    {
        const bool branch_taken_0x1b0c90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C90u;
        // 0x1b0c94: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c90) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0C98u;
    // 0x1b0c98: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ca0: 0x2484aba8  addiu       $a0, $a0, -0x5458
    ctx->pc = 0x1b0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945704));
    // 0x1b0ca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ca8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cac: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0CACu;
    SET_GPR_U32(ctx, 31, 0x1B0CB4u);
    ctx->pc = 0x1B0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CACu;
    // 0x1b0cb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0CACu, 0x1B0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CB4u;
label_1b0cb4:
    // 0x1b0cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0CB4u;
    {
        const bool branch_taken_0x1b0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cb4) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0CBCu;
label_1b0cbc:
    // 0x1b0cbc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0CBCu;
    {
        const bool branch_taken_0x1b0cbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cbc) {
            ctx->pc = 0x1B0CCCu;
            goto label_1b0ccc;
        }
    }
    ctx->pc = 0x1B0CC4u;
    // 0x1b0cc4: 0xc06bc12  jal         func_1AF048
    ctx->pc = 0x1B0CC4u;
    SET_GPR_U32(ctx, 31, 0x1B0CCCu);
    ctx->pc = 0x1B0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CC4u;
    // 0x1b0cc8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF048u, 0x1B0CC4u, 0x1B0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CCCu;
label_1b0ccc:
    // 0x1b0ccc: 0x1672ffe0  bne         $s3, $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B0CCCu;
    {
        const bool branch_taken_0x1b0ccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CCCu;
        // 0x1b0cd0: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ccc) {
            ctx->pc = 0x1B0C50u;
            return;
        }
    }
    ctx->pc = 0x1B0CD4u;
    // 0x1b0cd4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0CD4u;
    {
        const bool branch_taken_0x1b0cd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD4u;
        // 0x1b0cd8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cd4) {
            ctx->pc = 0x1B0CE4u;
            goto label_1b0ce4;
        }
    }
    ctx->pc = 0x1B0CDCu;
    // 0x1b0cdc: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0CDCu;
    SET_GPR_U32(ctx, 31, 0x1B0CE4u);
    ctx->pc = 0x1B0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CDCu;
    // 0x1b0ce0: 0x2484abf0  addiu       $a0, $a0, -0x5410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0CDCu, 0x1B0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CE4u;
label_1b0ce4:
    // 0x1b0ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B0CE4u;
    {
        const bool branch_taken_0x1b0ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CE4u;
        // 0x1b0ce8: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ce4) {
            ctx->pc = 0x1B0D14u;
            return;
        }
    }
    ctx->pc = 0x1B0CECu;
}
