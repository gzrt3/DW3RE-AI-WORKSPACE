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

// Function: entry_001a8e34
// Address: 0x1a8e34 - 0x1a8e98
void entry_001a8e34_0x1a8e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e34_0x1a8e34");
#endif

    switch (ctx->pc) {
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e78u: goto label_1a8e78;
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8e90u: goto label_1a8e90;
        default: break;
    }

    ctx->pc = 0x1a8e34u;

    // 0x1a8e34: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1A8E34u;
    SET_GPR_U32(ctx, 31, 0x1A8E3Cu);
    ctx->pc = 0x1A8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E34u;
    // 0x1a8e38: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1A8E34u, 0x1A8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E3Cu;
label_1a8e3c:
    // 0x1a8e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8E3Cu;
    {
        const bool branch_taken_0x1a8e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E3Cu;
        // 0x1a8e40: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e3c) {
            ctx->pc = 0x1A8E50u;
            goto label_1a8e50;
        }
    }
    ctx->pc = 0x1A8E44u;
    // 0x1a8e44: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a8e44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1a8e48: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1a8e4c: 0x26103e80  addiu       $s0, $s0, 0x3E80
    ctx->pc = 0x1a8e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
label_1a8e50:
    // 0x1a8e50: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
    // 0x1a8e54: 0x26a73240  addiu       $a3, $s5, 0x3240
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
    // 0x1a8e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a8e5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e64: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1a8e68: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a8e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e6c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a8e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8e70: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1A8E70u;
    SET_GPR_U32(ctx, 31, 0x1A8E78u);
    ctx->pc = 0x1A8E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E70u;
    // 0x1a8e74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1A8E70u, 0x1A8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E78u;
label_1a8e78:
    // 0x1a8e78: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8E78u;
    {
        const bool branch_taken_0x1a8e78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E78u;
        // 0x1a8e7c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e78) {
            ctx->pc = 0x1A8E98u;
            return;
        }
    }
    ctx->pc = 0x1A8E80u;
    // 0x1a8e80: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A8E80u;
    SET_GPR_U32(ctx, 31, 0x1A8E88u);
    ctx->pc = 0x1A8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E80u;
    // 0x1a8e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A8E80u, 0x1A8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E88u;
label_1a8e88:
    // 0x1a8e88: 0xc06a158  jal         func_1A8560
    ctx->pc = 0x1A8E88u;
    SET_GPR_U32(ctx, 31, 0x1A8E90u);
    ctx->pc = 0x1A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8560u, 0x1A8E88u, 0x1A8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E90u;
label_1a8e90:
    // 0x1a8e90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8E90u;
    {
        const bool branch_taken_0x1a8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E90u;
        // 0x1a8e94: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e90) {
            ctx->pc = 0x1A8EE8u;
            return;
        }
    }
    ctx->pc = 0x1A8E98u;
}
