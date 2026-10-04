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

// Function: FUN_001cc6c0
// Address: 0x1cc6c0 - 0x1cc724
void FUN_001cc6c0_0x1cc6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc6c0_0x1cc6c0");
#endif

    switch (ctx->pc) {
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc720u: goto label_1cc720;
        default: break;
    }

    ctx->pc = 0x1cc6c0u;

    // 0x1cc6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc6c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc6cc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC6CCu;
    {
        const bool branch_taken_0x1cc6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6CCu;
        // 0x1cc6d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6cc) {
            ctx->pc = 0x1CC70Cu;
            goto label_1cc70c;
        }
    }
    ctx->pc = 0x1CC6D4u;
    // 0x1cc6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cc6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6dc:
    // 0x1cc6dc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cc6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6e4: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x1cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
    // 0x1cc6e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6ec: 0xc0731d0  jal         func_1CC740
    ctx->pc = 0x1CC6ECu;
    SET_GPR_U32(ctx, 31, 0x1CC6F4u);
    ctx->pc = 0x1CC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6ECu;
    // 0x1cc6f0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC740u, 0x1CC6ECu, 0x1CC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6F4u;
label_1cc6f4:
    // 0x1cc6f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cc6f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cc6fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC6FCu;
    {
        const bool branch_taken_0x1cc6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6FCu;
        // 0x1cc700: 0x26311430  addiu       $s1, $s1, 0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6fc) {
            ctx->pc = 0x1CC6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC704u;
    // 0x1cc704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC724u;
            return;
        }
    }
    ctx->pc = 0x1CC70Cu;
label_1cc70c:
    // 0x1cc70c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cc710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc714: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
    // 0x1cc718: 0xc0731d0  jal         func_1CC740
    ctx->pc = 0x1CC718u;
    SET_GPR_U32(ctx, 31, 0x1CC720u);
    ctx->pc = 0x1CC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC718u;
    // 0x1cc71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC740u, 0x1CC718u, 0x1CC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC720u;
label_1cc720:
    // 0x1cc720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cc724u;
}
