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

// Function: FUN_001e6bd0
// Address: 0x1e6bd0 - 0x1e6d84
void FUN_001e6bd0_0x1e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6bd0_0x1e6bd0");
#endif

    switch (ctx->pc) {
        case 0x1e6c64u: goto label_1e6c64;
        case 0x1e6c7cu: goto label_1e6c7c;
        case 0x1e6cb4u: goto label_1e6cb4;
        case 0x1e6cccu: goto label_1e6ccc;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d80u: goto label_1e6d80;
        default: break;
    }

    ctx->pc = 0x1e6bd0u;

    // 0x1e6bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6be0: 0x8f838dd0  lw          $v1, -0x7230($gp)
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
    // 0x1e6be4: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1E6BE4u;
    {
        const bool branch_taken_0x1e6be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6be4) {
            ctx->pc = 0x1E6D80u;
            goto label_1e6d80;
        }
    }
    ctx->pc = 0x1E6BECu;
    // 0x1e6bec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e6becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e6bf0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1e6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1e6bf4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e6bf8: 0x27848dd8  addiu       $a0, $gp, -0x7228
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
    // 0x1e6bfc: 0x8f838dcc  lw          $v1, -0x7234($gp)
    ctx->pc = 0x1e6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6c00: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
    // 0x1e6c04: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1e6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1e6c08: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e6c0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e6c10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6c14: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1e6c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6c18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6C18u;
    {
        const bool branch_taken_0x1e6c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C18u;
        // 0x1e6c1c: 0xc78821  addu        $s1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c18) {
            ctx->pc = 0x1E6C28u;
            goto label_1e6c28;
        }
    }
    ctx->pc = 0x1E6C20u;
    // 0x1e6c20: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E6C20u;
    {
        const bool branch_taken_0x1e6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C20u;
        // 0x1e6c24: 0xa2000123  sb          $zero, 0x123($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c20) {
            ctx->pc = 0x1E6D5Cu;
            goto label_1e6d5c;
        }
    }
    ctx->pc = 0x1E6C28u;
label_1e6c28:
    // 0x1e6c28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6c2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e6c30: 0xa2020123  sb          $v0, 0x123($s0)
    ctx->pc = 0x1e6c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6c34: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6c38: 0x14850012  bne         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6C38u;
    {
        const bool branch_taken_0x1e6c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c38) {
            ctx->pc = 0x1E6C84u;
            goto label_1e6c84;
        }
    }
    ctx->pc = 0x1E6C40u;
    // 0x1e6c40: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x1e6c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6c48: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C48u;
    {
        const bool branch_taken_0x1e6c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c48) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C50u;
    // 0x1e6c50: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6C50u;
    {
        const bool branch_taken_0x1e6c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c50) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C58u;
    // 0x1e6c58: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6c5c: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C64u);
    ctx->pc = 0x1E6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C5Cu;
    // 0x1e6c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6C5Cu, 0x1E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C64u;
label_1e6c64:
    // 0x1e6c64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6C64u;
    {
        const bool branch_taken_0x1e6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x8f828e80  lw          $v0, -0x7180($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c64) {
            ctx->pc = 0x1E6CD0u;
            goto label_1e6cd0;
        }
    }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    // 0x1e6c70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e6c74: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6C74u;
    SET_GPR_U32(ctx, 31, 0x1E6C7Cu);
    ctx->pc = 0x1E6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C74u;
    // 0x1e6c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6C74u, 0x1E6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C7Cu;
label_1e6c7c:
    // 0x1e6c7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E6C7Cu;
    {
        const bool branch_taken_0x1e6c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c7c) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6C84u;
label_1e6c84:
    // 0x1e6c84: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e6c88: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6C88u;
    {
        const bool branch_taken_0x1e6c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c88) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6C90u;
    // 0x1e6c90: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
    // 0x1e6c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6c98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C98u;
    {
        const bool branch_taken_0x1e6c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c98) {
            ctx->pc = 0x1E6CBCu;
            goto label_1e6cbc;
        }
    }
    ctx->pc = 0x1E6CA0u;
    // 0x1e6ca0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6CA0u;
    {
        const bool branch_taken_0x1e6ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6ca0) {
            ctx->pc = 0x1E6CBCu;
            goto label_1e6cbc;
        }
    }
    ctx->pc = 0x1E6CA8u;
    // 0x1e6ca8: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6cac: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6CACu;
    SET_GPR_U32(ctx, 31, 0x1E6CB4u);
    ctx->pc = 0x1E6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CACu;
    // 0x1e6cb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6CACu, 0x1E6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CB4u;
label_1e6cb4:
    // 0x1e6cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6CB4u;
    {
        const bool branch_taken_0x1e6cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cb4) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6CBCu;
label_1e6cbc:
    // 0x1e6cbc: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    // 0x1e6cc0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e6cc4: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6CC4u;
    SET_GPR_U32(ctx, 31, 0x1E6CCCu);
    ctx->pc = 0x1E6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CC4u;
    // 0x1e6cc8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6CC4u, 0x1E6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CCCu;
label_1e6ccc:
    // 0x1e6ccc: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e6cd0:
    // 0x1e6cd0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E6CD0u;
    {
        const bool branch_taken_0x1e6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cd0) {
            ctx->pc = 0x1E6D50u;
            goto label_1e6d50;
        }
    }
    ctx->pc = 0x1E6CD8u;
    // 0x1e6cd8: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6cdc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e6ce0: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x1e6ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6ce8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6cec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e6cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6cf0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E6CF0u;
    {
        const bool branch_taken_0x1e6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cf0) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6CF8u;
    // 0x1e6cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6cfc: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6CFCu;
    {
        const bool branch_taken_0x1e6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cfc) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D04u;
    // 0x1e6d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6D04u;
    {
        const bool branch_taken_0x1e6d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D04u;
        // 0x1e6d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d04) {
            ctx->pc = 0x1E6D18u;
            goto label_1e6d18;
        }
    }
    ctx->pc = 0x1E6D0Cu;
    // 0x1e6d0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D0Cu;
    {
        const bool branch_taken_0x1e6d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D0Cu;
        // 0x1e6d10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d0c) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D14u;
    // 0x1e6d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e6d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d18:
    // 0x1e6d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6D18u;
    {
        const bool branch_taken_0x1e6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d18) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D20u;
    // 0x1e6d20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6d24:
    // 0x1e6d24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e6d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d2c: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1e6d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6d38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D38u;
    {
        const bool branch_taken_0x1e6d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d38) {
            ctx->pc = 0x1E6D50u;
            goto label_1e6d50;
        }
    }
    ctx->pc = 0x1E6D40u;
    // 0x1e6d40: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1E6D40u;
    SET_GPR_U32(ctx, 31, 0x1E6D48u);
    ctx->pc = 0x1E6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D40u;
    // 0x1e6d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1E6D40u, 0x1E6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D48u;
label_1e6d48:
    // 0x1e6d48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D48u;
    {
        const bool branch_taken_0x1e6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D48u;
        // 0x1e6d4c: 0x83828dc8  lb          $v0, -0x7238($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d48) {
            ctx->pc = 0x1E6D60u;
            goto label_1e6d60;
        }
    }
    ctx->pc = 0x1E6D50u;
label_1e6d50:
    // 0x1e6d50: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6d54: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1E6D54u;
    SET_GPR_U32(ctx, 31, 0x1E6D5Cu);
    ctx->pc = 0x1E6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D54u;
    // 0x1e6d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1E6D54u, 0x1E6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D5Cu;
label_1e6d5c:
    // 0x1e6d5c: 0x83828dc8  lb          $v0, -0x7238($gp)
    ctx->pc = 0x1e6d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1e6d60:
    // 0x1e6d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d68: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d78: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E6D78u;
    SET_GPR_U32(ctx, 31, 0x1E6D80u);
    ctx->pc = 0x1E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D78u;
    // 0x1e6d7c: 0xa2020263  sb          $v0, 0x263($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 611), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E6D78u, 0x1E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D80u;
label_1e6d80:
    // 0x1e6d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1e6d84u;
}
