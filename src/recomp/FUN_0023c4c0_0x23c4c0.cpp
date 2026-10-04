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

// Function: FUN_0023c4c0
// Address: 0x23c4c0 - 0x23c538
void FUN_0023c4c0_0x23c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c4c0_0x23c4c0");
#endif

    switch (ctx->pc) {
        case 0x23c50cu: goto label_23c50c;
        default: break;
    }

    ctx->pc = 0x23c4c0u;

    // 0x23c4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c4c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4cc: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x23c4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23c4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c4d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23c4e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C4E0u;
    {
        const bool branch_taken_0x23c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4e0) {
            ctx->pc = 0x23C4F8u;
            goto label_23c4f8;
        }
    }
    ctx->pc = 0x23C4E8u;
    // 0x23c4e8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x23c4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c4f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23C4F0u;
    {
        const bool branch_taken_0x23c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F0u;
        // 0x23c4f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f0) {
            ctx->pc = 0x23C528u;
            goto label_23c528;
        }
    }
    ctx->pc = 0x23C4F8u;
label_23c4f8:
    // 0x23c4f8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c4fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C51Cu;
            goto label_23c51c;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0xc08f114  jal         func_23C450
    ctx->pc = 0x23C504u;
    SET_GPR_U32(ctx, 31, 0x23C50Cu);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C504u, 0x23C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C50Cu;
label_23c50c:
    // 0x23c50c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C50Cu;
    {
        const bool branch_taken_0x23c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C50Cu;
        // 0x23c510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c50c) {
            ctx->pc = 0x23C528u;
            goto label_23c528;
        }
    }
    ctx->pc = 0x23C514u;
    // 0x23c514: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x23c518: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23c51c:
    // 0x23c51c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23c524: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x23c524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_23c528:
    // 0x23c528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c52c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c534: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x23c538u;
}
