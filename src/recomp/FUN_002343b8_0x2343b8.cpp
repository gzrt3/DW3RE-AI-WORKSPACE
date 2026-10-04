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

// Function: FUN_002343b8
// Address: 0x2343b8 - 0x234400
void FUN_002343b8_0x2343b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002343b8_0x2343b8");
#endif

    switch (ctx->pc) {
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        default: break;
    }

    ctx->pc = 0x2343b8u;

label_2343b8:
    // 0x2343b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2343b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2343bc:
    // 0x2343bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2343c0:
    // 0x2343c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2343c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2343c4:
    // 0x2343c4: 0x8c50ac70  lw          $s0, -0x5390($v0)
    ctx->pc = 0x2343c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945904)));
label_2343c8:
    // 0x2343c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2343c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2343cc:
    // 0x2343cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2343ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2343d0:
    // 0x2343d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2343d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2343d4:
    // 0x2343d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2343d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2343d8:
    // 0x2343d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2343d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2343dc:
    // 0x2343dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2343dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2343e0:
    // 0x2343e0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2343e4:
    if (ctx->pc == 0x2343E4u) {
        ctx->pc = 0x2343E8u;
        goto label_2343e8;
    }
    ctx->pc = 0x2343E0u;
    {
        const bool branch_taken_0x2343e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343e0) {
            ctx->pc = 0x2343FCu;
            goto label_2343fc;
        }
    }
    ctx->pc = 0x2343E8u;
label_2343e8:
    // 0x2343e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2343e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2343ec:
    // 0x2343ec: 0x40f809  jalr        $v0
label_2343f0:
    if (ctx->pc == 0x2343F0u) {
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343F4u;
        goto label_2343f4;
    }
    ctx->pc = 0x2343ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2343F4u);
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343ECu, 0x2343F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2343F4u;
label_2343f4:
    // 0x2343f4: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
label_2343f8:
    if (ctx->pc == 0x2343F8u) {
        ctx->pc = 0x2343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343F4u;
        // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343FCu;
        goto label_2343fc;
    }
    ctx->pc = 0x2343F4u;
    {
        const bool branch_taken_0x2343f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2343f4) {
            ctx->pc = 0x2343F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2343F4u;
            // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2343E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2343e0;
        }
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0xf  sync
    ctx->pc = 0x2343fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x234400u;
}
