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

// Function: FUN_001b7940
// Address: 0x1b7940 - 0x1b7aa4
void FUN_001b7940_0x1b7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7940_0x1b7940");
#endif

    switch (ctx->pc) {
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7a40u: goto label_1b7a40;
        default: break;
    }

    ctx->pc = 0x1b7940u;

    // 0x1b7940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b7944: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1b7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1b7948: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b794c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1b794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1b7950: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1b7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1b7954: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1b7958: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7958u, 0x1B7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7964: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b7968: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7968u;
    SET_GPR_U32(ctx, 31, 0x1B7970u);
    ctx->pc = 0x1B796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7968u;
    // 0x1b796c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7968u, 0x1B7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7970u;
label_1b7970:
    // 0x1b7970: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7974: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1b7974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7978: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1b7978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b797c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1B797Cu;
    {
        const bool branch_taken_0x1b797c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B797Cu;
        // 0x1b7980: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b797c) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7984u;
    // 0x1b7984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b7984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7988: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b7988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b798c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B798Cu;
    {
        const bool branch_taken_0x1b798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B798Cu;
        // 0x1b7990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b798c) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7994u;
    // 0x1b7994: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7998: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x1b7998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x1b799c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b79a0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b79a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b79a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B79A4u;
    {
        const bool branch_taken_0x1b79a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A4u;
        // 0x1b79a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79a4) {
            ctx->pc = 0x1B79B8u;
            goto label_1b79b8;
        }
    }
    ctx->pc = 0x1B79ACu;
    // 0x1b79ac: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1b79acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x1b79b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B79B0u;
    {
        const bool branch_taken_0x1b79b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79B0u;
        // 0x1b79b4: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79b0) {
            ctx->pc = 0x1B79D0u;
            goto label_1b79d0;
        }
    }
    ctx->pc = 0x1B79B8u;
label_1b79b8:
    // 0x1b79b8: 0x54c50038  bnel        $a2, $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1B79B8u;
    {
        const bool branch_taken_0x1b79b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b79b8) {
            ctx->pc = 0x1B79BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B79B8u;
            // 0x1b79bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79C0u;
    // 0x1b79c0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b79c4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B79C4u;
    {
        const bool branch_taken_0x1b79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C4u;
        // 0x1b79c8: 0x2444b6b0  addiu       $a0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79c4) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79CCu;
    // 0x1b79cc: 0x0  nop
    ctx->pc = 0x1b79ccu;
    // NOP
label_1b79d0:
    // 0x1b79d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B79D0u;
    {
        const bool branch_taken_0x1b79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79d0) {
            ctx->pc = 0x1B79E8u;
            goto label_1b79e8;
        }
    }
    ctx->pc = 0x1B79D8u;
    // 0x1b79d8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1b79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1b79dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79e0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B79E0u;
    {
        const bool branch_taken_0x1b79e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E0u;
        // 0x1b79e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e0) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79E8u;
label_1b79e8:
    // 0x1b79e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B79E8u;
    {
        const bool branch_taken_0x1b79e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E8u;
        // 0x1b79ec: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e8) {
            ctx->pc = 0x1B7A00u;
            goto label_1b7a00;
        }
    }
    ctx->pc = 0x1B79F0u;
    // 0x1b79f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b79f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B79F8u;
    {
        const bool branch_taken_0x1b79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F8u;
        // 0x1b79fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f8) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7A00u;
label_1b7a00:
    // 0x1b7a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7a04: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a08: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x1b7a08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7a0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7a10: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b7a14: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A14u;
    {
        const bool branch_taken_0x1b7a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A14u;
        // 0x1b7a18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a14) {
            ctx->pc = 0x1B7A2Cu;
            goto label_1b7a2c;
        }
    }
    ctx->pc = 0x1B7A1Cu;
    // 0x1b7a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b7a20: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1b7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1b7a24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1b7a28: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b7a2c:
    // 0x1b7a2c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b7a30: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1b7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1b7a34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A34u;
    {
        const bool branch_taken_0x1b7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A34u;
        // 0x1b7a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a34) {
            ctx->pc = 0x1B7A48u;
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7A3Cu;
    // 0x1b7a3c: 0x0  nop
    ctx->pc = 0x1b7a3cu;
    // NOP
label_1b7a40:
    // 0x1b7a40: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b7a44: 0x0  nop
    ctx->pc = 0x1b7a44u;
    // NOP
label_1b7a48:
    // 0x1b7a48: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A48u;
    {
        const bool branch_taken_0x1b7a48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a48) {
            ctx->pc = 0x1B7A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A48u;
            // 0x1b7a4c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A5Cu;
            goto label_1b7a5c;
        }
    }
    ctx->pc = 0x1B7A50u;
    // 0x1b7a50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b7a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b7a54: 0x87202f  dsubu       $a0, $a0, $a3
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
    // 0x1b7a58: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1b7a5c:
    // 0x1b7a5c: 0x0  nop
    ctx->pc = 0x1b7a5cu;
    // NOP
    // 0x1b7a60: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B7A60u;
    {
        const bool branch_taken_0x1b7a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A60u;
        // 0x1b7a64: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a60) {
            ctx->pc = 0x1B7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B7A68u;
    // 0x1b7a68: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b7a6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b7a70: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7A70u;
    {
        const bool branch_taken_0x1b7a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7a70) {
            ctx->pc = 0x1B7A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A70u;
            // 0x1b7a74: 0xfd060010  sd          $a2, 0x10($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A98u;
            goto label_1b7a98;
        }
    }
    ctx->pc = 0x1B7A78u;
    // 0x1b7a78: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1b7a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x64c20080  daddiu      $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A90u;
            goto label_1b7a90;
        }
    }
    ctx->pc = 0x1B7A84u;
    // 0x1b7a84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7A84u;
    {
        const bool branch_taken_0x1b7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A84u;
        // 0x1b7a88: 0x64c60080  daddiu      $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a84) {
            ctx->pc = 0x1B7A94u;
            goto label_1b7a94;
        }
    }
    ctx->pc = 0x1B7A8Cu;
    // 0x1b7a8c: 0x0  nop
    ctx->pc = 0x1b7a8cu;
    // NOP
label_1b7a90:
    // 0x1b7a90: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x1b7a90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1b7a94:
    // 0x1b7a94: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x1b7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
label_1b7a98:
    // 0x1b7a98: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b7a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a9c:
    // 0x1b7a9c: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7AA4u);
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7A9Cu, 0x1B7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AA4u;
}
