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

// Function: FUN_001b0bc0
// Address: 0x1b0bc0 - 0x1b0d40
void FUN_001b0bc0_0x1b0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0bc0_0x1b0bc0");
#endif

    switch (ctx->pc) {
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0d08u: goto label_1b0d08;
        default: break;
    }

    ctx->pc = 0x1b0bc0u;

    // 0x1b0bc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b0bc4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1b0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1b0bc8: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1b0bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
    // 0x1b0bcc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1b0bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1b0bd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b0bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b0bd4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b0bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b0bdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b0bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0be4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0be8: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x287290u));
    // 0x1b0bec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b0becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bf0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b0bf4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1b0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1b0bf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b0bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1b0bfc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b0c00: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0C00u;
    {
        const bool branch_taken_0x1b0c00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C00u;
        // 0x1b0c04: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c00) {
            ctx->pc = 0x1B0C18u;
            goto label_1b0c18;
        }
    }
    ctx->pc = 0x1B0C08u;
    // 0x1b0c08: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0c0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c10: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0C10u;
    SET_GPR_U32(ctx, 31, 0x1B0C18u);
    ctx->pc = 0x1B0C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C10u;
    // 0x1b0c14: 0x2484ab78  addiu       $a0, $a0, -0x5488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0C10u, 0x1B0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C18u;
label_1b0c18:
    // 0x1b0c18: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b0c1c: 0x8c438cf0  lw          $v1, -0x7310($v0)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x288CF0u));
    // 0x1b0c20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0C20u;
    {
        const bool branch_taken_0x1b0c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C20u;
        // 0x1b0c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c20) {
            ctx->pc = 0x1B0C30u;
            goto label_1b0c30;
        }
    }
    ctx->pc = 0x1B0C28u;
    // 0x1b0c28: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B0C28u;
    {
        const bool branch_taken_0x1b0c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C28u;
        // 0x1b0c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c28) {
            ctx->pc = 0x1B0D18u;
            goto label_1b0d18;
        }
    }
    ctx->pc = 0x1B0C30u;
label_1b0c30:
    // 0x1b0c30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b0c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b0c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c38: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0C38u;
    SET_GPR_U32(ctx, 31, 0x1B0C40u);
    ctx->pc = 0x1B0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C38u;
    // 0x1b0c3c: 0x122ac0  sll         $a1, $s2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0C38u, 0x1B0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C40u;
label_1b0c40:
    // 0x1b0c40: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B0C40u;
    {
        const bool branch_taken_0x1b0c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C40u;
        // 0x1b0c44: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c40) {
            ctx->pc = 0x1B0CECu;
            goto label_1b0cec;
        }
    }
    ctx->pc = 0x1B0C48u;
    // 0x1b0c48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0C48u;
    {
        const bool branch_taken_0x1b0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C48u;
        // 0x1b0c4c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c48) {
            ctx->pc = 0x1B0C64u;
            goto label_1b0c64;
        }
    }
    ctx->pc = 0x1B0C50u;
label_1b0c50:
    // 0x1b0c50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C64u;
            goto label_1b0c64;
        }
    }
    ctx->pc = 0x1B0C58u;
    // 0x1b0c58: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B0C58u;
    {
        const bool branch_taken_0x1b0c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C58u;
        // 0x1b0c5c: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c58) {
            ctx->pc = 0x1B0CD4u;
            goto label_1b0cd4;
        }
    }
    ctx->pc = 0x1B0C60u;
    // 0x1b0c60: 0x1332c0  sll         $a2, $s3, 11
    ctx->pc = 0x1b0c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_1b0c64:
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
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0c50;
        }
    }
    ctx->pc = 0x1B0CD4u;
label_1b0cd4:
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
            goto label_1b0d14;
        }
    }
    ctx->pc = 0x1B0CECu;
label_1b0cec:
    // 0x1b0cec: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf8: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0cfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d00: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0D00u;
    SET_GPR_U32(ctx, 31, 0x1B0D08u);
    ctx->pc = 0x1B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D00u;
    // 0x1b0d04: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0D00u, 0x1B0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x1b0d08u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b0d0c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b0d10: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x1b0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
label_1b0d14:
    // 0x1b0d14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b0d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d18:
    // 0x1b0d18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0d1c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1b0d1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0d20: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1b0d20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0d24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1b0d24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0d28: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b0d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0d2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0d30: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b0d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0d34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b0d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0d38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b0d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b0d40u;
}
