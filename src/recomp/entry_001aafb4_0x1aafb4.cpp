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

// Function: entry_001aafb4
// Address: 0x1aafb4 - 0x1ab018
void entry_001aafb4_0x1aafb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafb4_0x1aafb4");
#endif

    switch (ctx->pc) {
        case 0x1aafbcu: goto label_1aafbc;
        case 0x1aaff8u: goto label_1aaff8;
        case 0x1ab008u: goto label_1ab008;
        case 0x1ab010u: goto label_1ab010;
        default: break;
    }

    ctx->pc = 0x1aafb4u;

    // 0x1aafb4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AAFB4u;
    SET_GPR_U32(ctx, 31, 0x1AAFBCu);
    ctx->pc = 0x1AAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFB4u;
    // 0x1aafb8: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AAFB4u, 0x1AAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFBCu;
label_1aafbc:
    // 0x1aafbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAFBCu;
    {
        const bool branch_taken_0x1aafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafbc) {
            ctx->pc = 0x1AAFD0u;
            goto label_1aafd0;
        }
    }
    ctx->pc = 0x1AAFC4u;
    // 0x1aafc4: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1aafc8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aafc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1aafcc: 0x26103e80  addiu       $s0, $s0, 0x3E80
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
label_1aafd0:
    // 0x1aafd0: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
    // 0x1aafd4: 0x26a73240  addiu       $a3, $s5, 0x3240
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
    // 0x1aafd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aafdc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1aafe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aafe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafe4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1aafe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1aafe8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aafe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aafecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aaff0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AAFF0u;
    SET_GPR_U32(ctx, 31, 0x1AAFF8u);
    ctx->pc = 0x1AAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFF0u;
    // 0x1aaff4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AAFF0u, 0x1AAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFF8u;
label_1aaff8:
    // 0x1aaff8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAFF8u;
    {
        const bool branch_taken_0x1aaff8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF8u;
        // 0x1aaffc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff8) {
            ctx->pc = 0x1AB018u;
            return;
        }
    }
    ctx->pc = 0x1AB000u;
    // 0x1ab000: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AB000u;
    SET_GPR_U32(ctx, 31, 0x1AB008u);
    ctx->pc = 0x1AB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB000u;
    // 0x1ab004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AB000u, 0x1AB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB008u;
label_1ab008:
    // 0x1ab008: 0xc06a158  jal         func_1A8560
    ctx->pc = 0x1AB008u;
    SET_GPR_U32(ctx, 31, 0x1AB010u);
    ctx->pc = 0x1A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8560u, 0x1AB008u, 0x1AB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB010u;
label_1ab010:
    // 0x1ab010: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB010u;
    {
        const bool branch_taken_0x1ab010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB010u;
        // 0x1ab014: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab010) {
            ctx->pc = 0x1AB068u;
            return;
        }
    }
    ctx->pc = 0x1AB018u;
}
