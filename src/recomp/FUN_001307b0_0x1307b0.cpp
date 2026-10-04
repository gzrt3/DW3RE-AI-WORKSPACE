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

// Function: FUN_001307b0
// Address: 0x1307b0 - 0x130830
void FUN_001307b0_0x1307b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001307b0_0x1307b0");
#endif

    switch (ctx->pc) {
        case 0x1307e8u: goto label_1307e8;
        case 0x130808u: goto label_130808;
        case 0x130818u: goto label_130818;
        default: break;
    }

    ctx->pc = 0x1307b0u;

    // 0x1307b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1307b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1307b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1307b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1307b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1307b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1307bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1307bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1307c0: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x1307c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x1307c4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1307c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1307C8u;
    {
        const bool branch_taken_0x1307c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1307CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307C8u;
        // 0x1307cc: 0x84900002  lh          $s0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307c8) {
            ctx->pc = 0x1307E8u;
            goto label_1307e8;
        }
    }
    ctx->pc = 0x1307D0u;
    // 0x1307d0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1307d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1307d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1307d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1307d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1307d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1307dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1307e0: 0xc0706f4  jal         func_1C1BD0
    ctx->pc = 0x1307E0u;
    SET_GPR_U32(ctx, 31, 0x1307E8u);
    ctx->pc = 0x1307E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307E0u;
    // 0x1307e4: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BD0u, 0x1307E0u, 0x1307E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307E8u;
label_1307e8:
    // 0x1307e8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1307ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1307ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1307f0: 0x8c22a428  lw          $v0, -0x5BD8($at)
    ctx->pc = 0x1307f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943784)));
    // 0x1307f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1307f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1307f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1307fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130800: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x130800u;
    SET_GPR_U32(ctx, 31, 0x130808u);
    ctx->pc = 0x130804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130800u;
    // 0x130804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x130800u, 0x130808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130808u;
label_130808:
    // 0x130808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130808u;
    {
        const bool branch_taken_0x130808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130808u;
        // 0x13080c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130808) {
            ctx->pc = 0x13082Cu;
            goto label_13082c;
        }
    }
    ctx->pc = 0x130810u;
    // 0x130810: 0xc070700  jal         func_1C1C00
    ctx->pc = 0x130810u;
    SET_GPR_U32(ctx, 31, 0x130818u);
    ctx->pc = 0x1C1C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C00u, 0x130810u, 0x130818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13081c: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130820: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x130820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x130824: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130828: 0xac23a3e0  sw          $v1, -0x5C20($at)
    ctx->pc = 0x130828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
label_13082c:
    // 0x13082c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13082cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x130830u;
}
