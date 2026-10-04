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

// Function: FUN_001966a0
// Address: 0x1966a0 - 0x1966ec
void FUN_001966a0_0x1966a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001966a0_0x1966a0");
#endif

    switch (ctx->pc) {
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        default: break;
    }

    ctx->pc = 0x1966a0u;

label_1966a0:
    // 0x1966a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1966a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1966a4:
    // 0x1966a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1966a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1966a8:
    // 0x1966a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1966a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1966ac:
    // 0x1966ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1966b0:
    // 0x1966b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1966b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1966b4:
    // 0x1966b4: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1966b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966b8:
    // 0x1966b8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1966bc:
    if (ctx->pc == 0x1966BCu) {
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966C0u;
        goto label_1966c0;
    }
    ctx->pc = 0x1966B8u;
    {
        const bool branch_taken_0x1966b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966b8) {
            ctx->pc = 0x1966E4u;
            goto label_1966e4;
        }
    }
    ctx->pc = 0x1966C0u;
label_1966c0:
    // 0x1966c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1966c4:
    // 0x1966c4: 0x40f809  jalr        $v0
label_1966c8:
    if (ctx->pc == 0x1966C8u) {
        ctx->pc = 0x1966CCu;
        goto label_1966cc;
    }
    ctx->pc = 0x1966C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966C4u, 0x1966CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1966d0:
    // 0x1966d0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1966d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966d4:
    // 0x1966d4: 0x0  nop
    ctx->pc = 0x1966d4u;
    // NOP
label_1966d8:
    // 0x1966d8: 0x0  nop
    ctx->pc = 0x1966d8u;
    // NOP
label_1966dc:
    // 0x1966dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1966e0:
    if (ctx->pc == 0x1966E0u) {
        ctx->pc = 0x1966E4u;
        goto label_1966e4;
    }
    ctx->pc = 0x1966DCu;
    {
        const bool branch_taken_0x1966dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966dc) {
            ctx->pc = 0x1966C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966c0;
        }
    }
    ctx->pc = 0x1966E4u;
label_1966e4:
    // 0x1966e4: 0x0  nop
    ctx->pc = 0x1966e4u;
    // NOP
label_1966e8:
    // 0x1966e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1966e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1966ecu;
}
