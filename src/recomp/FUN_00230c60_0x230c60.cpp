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

// Function: FUN_00230c60
// Address: 0x230c60 - 0x230d04
void FUN_00230c60_0x230c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00230c60_0x230c60");
#endif

    switch (ctx->pc) {
        case 0x230c60u: goto label_230c60;
        case 0x230c64u: goto label_230c64;
        case 0x230c68u: goto label_230c68;
        case 0x230c6cu: goto label_230c6c;
        case 0x230c70u: goto label_230c70;
        case 0x230c74u: goto label_230c74;
        case 0x230c78u: goto label_230c78;
        case 0x230c7cu: goto label_230c7c;
        case 0x230c80u: goto label_230c80;
        case 0x230c84u: goto label_230c84;
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        case 0x230cb0u: goto label_230cb0;
        case 0x230cb4u: goto label_230cb4;
        case 0x230cb8u: goto label_230cb8;
        case 0x230cbcu: goto label_230cbc;
        case 0x230cc0u: goto label_230cc0;
        case 0x230cc4u: goto label_230cc4;
        case 0x230cc8u: goto label_230cc8;
        case 0x230cccu: goto label_230ccc;
        case 0x230cd0u: goto label_230cd0;
        case 0x230cd4u: goto label_230cd4;
        case 0x230cd8u: goto label_230cd8;
        case 0x230cdcu: goto label_230cdc;
        case 0x230ce0u: goto label_230ce0;
        case 0x230ce4u: goto label_230ce4;
        case 0x230ce8u: goto label_230ce8;
        case 0x230cecu: goto label_230cec;
        case 0x230cf0u: goto label_230cf0;
        case 0x230cf4u: goto label_230cf4;
        case 0x230cf8u: goto label_230cf8;
        case 0x230cfcu: goto label_230cfc;
        case 0x230d00u: goto label_230d00;
        default: break;
    }

    ctx->pc = 0x230c60u;

label_230c60:
    // 0x230c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_230c64:
    // 0x230c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_230c68:
    // 0x230c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_230c6c:
    // 0x230c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_230c70:
    // 0x230c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_230c74:
    // 0x230c74: 0xc08c448  jal         func_231120
label_230c78:
    if (ctx->pc == 0x230C78u) {
        ctx->pc = 0x230C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C74u;
        // 0x230c78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C7Cu;
        goto label_230c7c;
    }
    ctx->pc = 0x230C74u;
    SET_GPR_U32(ctx, 31, 0x230C7Cu);
    ctx->pc = 0x230C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C74u;
    // 0x230c78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231120u, 0x230C74u, 0x230C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C7Cu;
label_230c7c:
    // 0x230c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230c80:
    // 0x230c80: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230c84:
    // 0x230c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c88:
    // 0x230c88: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_230c8c:
    if (ctx->pc == 0x230C8Cu) {
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C90u;
        goto label_230c90;
    }
    ctx->pc = 0x230C88u;
    {
        const bool branch_taken_0x230c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c88) {
            ctx->pc = 0x230CE8u;
            goto label_230ce8;
        }
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_230c94:
    // 0x230c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_230c98:
    if (ctx->pc == 0x230C98u) {
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C9Cu;
        goto label_230c9c;
    }
    ctx->pc = 0x230C94u;
    {
        const bool branch_taken_0x230c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c94) {
            ctx->pc = 0x230CA8u;
            goto label_230ca8;
        }
    }
    ctx->pc = 0x230C9Cu;
label_230c9c:
    // 0x230c9c: 0x40f809  jalr        $v0
label_230ca0:
    if (ctx->pc == 0x230CA0u) {
        ctx->pc = 0x230CA4u;
        goto label_230ca4;
    }
    ctx->pc = 0x230C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C9Cu, 0x230CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0x8f8682d0  lw          $a2, -0x7D30($gp)
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230ca8:
    // 0x230ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230cac:
    // 0x230cac: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_230cb0:
    // 0x230cb0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_230cb4:
    // 0x230cb4: 0x8ce71274  lw          $a3, 0x1274($a3)
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4724)));
label_230cb8:
    // 0x230cb8: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_230cbc:
    // 0x230cbc: 0x34a51158  ori         $a1, $a1, 0x1158
    ctx->pc = 0x230cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4440);
label_230cc0:
    // 0x230cc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_230cc4:
    // 0x230cc4: 0xc08c358  jal         func_230D60
label_230cc8:
    if (ctx->pc == 0x230CC8u) {
        ctx->pc = 0x230CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CC4u;
        // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CCCu;
        goto label_230ccc;
    }
    ctx->pc = 0x230CC4u;
    SET_GPR_U32(ctx, 31, 0x230CCCu);
    ctx->pc = 0x230CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CC4u;
    // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D60u, 0x230CC4u, 0x230CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CCCu;
label_230ccc:
    // 0x230ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230cd0:
    // 0x230cd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_230cd4:
    // 0x230cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230cd8:
    if (ctx->pc == 0x230CD8u) {
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CDCu;
        goto label_230cdc;
    }
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230CE4u;
            goto label_230ce4;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x40f809  jalr        $v0
label_230ce0:
    if (ctx->pc == 0x230CE0u) {
        ctx->pc = 0x230CE4u;
        goto label_230ce4;
    }
    ctx->pc = 0x230CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CE4u;
label_230ce4:
    // 0x230ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230ce8:
    // 0x230ce8: 0xc08c62e  jal         func_2318B8
label_230cec:
    if (ctx->pc == 0x230CECu) {
        ctx->pc = 0x230CF0u;
        goto label_230cf0;
    }
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x2318B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318B8u, 0x230CE8u, 0x230CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230cf4:
    // 0x230cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230cf8:
    // 0x230cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230cfc:
    // 0x230cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_230d00:
    // 0x230d00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x230d04u;
}
