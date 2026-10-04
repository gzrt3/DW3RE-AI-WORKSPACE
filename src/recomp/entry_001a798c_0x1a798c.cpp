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

// Function: entry_001a798c
// Address: 0x1a798c - 0x1a7a64
void entry_001a798c_0x1a798c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a798c_0x1a798c");
#endif

    switch (ctx->pc) {
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a7a04u: goto label_1a7a04;
        case 0x1a7a30u: goto label_1a7a30;
        case 0x1a7a40u: goto label_1a7a40;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a58u: goto label_1a7a58;
        case 0x1a7a60u: goto label_1a7a60;
        default: break;
    }

    ctx->pc = 0x1a798cu;

    // 0x1a798c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1a798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x1a7990: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7990u;
    {
        const bool branch_taken_0x1a7990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7990) {
            ctx->pc = 0x1A7994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7990u;
            // 0x1a7994: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A79E4u;
            goto label_1a79e4;
        }
    }
    ctx->pc = 0x1A7998u;
    // 0x1a7998: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7998u;
    {
        const bool branch_taken_0x1a7998 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7998u;
        // 0x1a799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7998) {
            ctx->pc = 0x1A79A8u;
            goto label_1a79a8;
        }
    }
    ctx->pc = 0x1A79A0u;
    // 0x1a79a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A79A0u;
    {
        const bool branch_taken_0x1a79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79A0u;
        // 0x1a79a4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79a0) {
            ctx->pc = 0x1A79ACu;
            goto label_1a79ac;
        }
    }
    ctx->pc = 0x1A79A8u;
label_1a79a8:
    // 0x1a79a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1a79ac:
    // 0x1a79ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a79b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a79b4: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a79b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a79b8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a79c0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79c4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a79c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1a79c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79cc: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A79CCu;
    SET_GPR_U32(ctx, 31, 0x1A79D4u);
    ctx->pc = 0x1A79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79CCu;
    // 0x1a79d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A79CCu, 0x1A79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79D4u;
label_1a79d4:
    // 0x1a79d4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A79D4u;
    {
        const bool branch_taken_0x1a79d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79d4) {
            ctx->pc = 0x1A7A64u;
            return;
        }
    }
    ctx->pc = 0x1A79DCu;
    // 0x1a79dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A79DCu;
    {
        const bool branch_taken_0x1a79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a79dc) {
            ctx->pc = 0x1A7A40u;
            goto label_1a7a40;
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a79e8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1a79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1a79ec: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7A0Cu;
            goto label_1a7a0c;
        }
    }
    ctx->pc = 0x1A79FCu;
    // 0x1a79fc: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A79FCu;
    SET_GPR_U32(ctx, 31, 0x1A7A04u);
    ctx->pc = 0x1A7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79FCu;
    // 0x1a7a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A79FCu, 0x1A7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A04u;
label_1a7a04:
    // 0x1a7a04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7A04u;
    {
        const bool branch_taken_0x1a7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A04u;
        // 0x1a7a08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a04) {
            ctx->pc = 0x1A7A64u;
            return;
        }
    }
    ctx->pc = 0x1A7A0Cu;
label_1a7a0c:
    // 0x1a7a0c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1a7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x1a7a10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7a14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a7a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a18: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a1c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a7a20: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1a7a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a28: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7A28u;
    SET_GPR_U32(ctx, 31, 0x1A7A30u);
    ctx->pc = 0x1A7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A28u;
    // 0x1a7a2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7A28u, 0x1A7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A30u;
label_1a7a30:
    // 0x1a7a30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7A30u;
    {
        const bool branch_taken_0x1a7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a30) {
            ctx->pc = 0x1A7A50u;
            goto label_1a7a50;
        }
    }
    ctx->pc = 0x1A7A38u;
    // 0x1a7a38: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7A38u;
    SET_GPR_U32(ctx, 31, 0x1A7A40u);
    ctx->pc = 0x1A7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A38u;
    // 0x1a7a3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7A38u, 0x1A7A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A40u;
label_1a7a40:
    // 0x1a7a40: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7A40u;
    SET_GPR_U32(ctx, 31, 0x1A7A48u);
    ctx->pc = 0x1A7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A40u;
    // 0x1a7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7A40u, 0x1A7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A48u;
label_1a7a48:
    // 0x1a7a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7A48u;
    {
        const bool branch_taken_0x1a7a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A48u;
        // 0x1a7a4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a48) {
            ctx->pc = 0x1A7A64u;
            return;
        }
    }
    ctx->pc = 0x1A7A50u;
label_1a7a50:
    // 0x1a7a50: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A7A50u;
    SET_GPR_U32(ctx, 31, 0x1A7A58u);
    ctx->pc = 0x1A7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A50u;
    // 0x1a7a54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A7A50u, 0x1A7A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A58u;
label_1a7a58:
    // 0x1a7a58: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7A58u;
    SET_GPR_U32(ctx, 31, 0x1A7A60u);
    ctx->pc = 0x1A7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A58u;
    // 0x1a7a5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7A58u, 0x1A7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A60u;
label_1a7a60:
    // 0x1a7a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7a64u;
}
