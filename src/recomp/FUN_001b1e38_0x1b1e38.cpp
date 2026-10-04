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

// Function: FUN_001b1e38
// Address: 0x1b1e38 - 0x1b1eb4
void FUN_001b1e38_0x1b1e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1e38_0x1b1e38");
#endif

    switch (ctx->pc) {
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e80u: goto label_1b1e80;
        case 0x1b1e9cu: goto label_1b1e9c;
        default: break;
    }

    ctx->pc = 0x1b1e38u;

    // 0x1b1e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1e3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b1e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b1e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b1e4c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1E4Cu;
    {
        const bool branch_taken_0x1b1e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E4Cu;
        // 0x1b1e50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e4c) {
            ctx->pc = 0x1B1EA4u;
            goto label_1b1ea4;
        }
    }
    ctx->pc = 0x1B1E54u;
    // 0x1b1e54: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1b1e54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1b1e58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1e5c: 0x264367c0  addiu       $v1, $s2, 0x67C0
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 26560));
    // 0x1b1e60: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1b1e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1e64: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x1B1E64u;
    SET_GPR_U32(ctx, 31, 0x1B1E6Cu);
    ctx->pc = 0x1B1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E64u;
    // 0x1b1e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x1B1E64u, 0x1B1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E6Cu;
label_1b1e6c:
    // 0x1b1e6c: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x1b1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b1e70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1E70u;
    {
        const bool branch_taken_0x1b1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e70) {
            ctx->pc = 0x1B1E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E70u;
            // 0x1b1e74: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1E78u;
    // 0x1b1e78: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x1B1E78u;
    SET_GPR_U32(ctx, 31, 0x1B1E80u);
    ctx->pc = 0x1B1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E78u;
    // 0x1b1e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x1B1E78u, 0x1B1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E80u;
label_1b1e80:
    // 0x1b1e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e84:
    // 0x1b1e84: 0x264267c0  addiu       $v0, $s2, 0x67C0
    ctx->pc = 0x1b1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26560));
    // 0x1b1e88: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1e8c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1b1e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b1e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e94: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1B1E94u;
    SET_GPR_U32(ctx, 31, 0x1B1E9Cu);
    ctx->pc = 0x1B1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E94u;
    // 0x1b1e98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1B1E94u, 0x1B1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E9Cu;
label_1b1e9c:
    // 0x1b1e9c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1b1ea0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b1ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b1ea4:
    // 0x1b1ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1ea8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1eac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b1eb4u;
}
