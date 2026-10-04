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

// Function: FUN_001a4e68
// Address: 0x1a4e68 - 0x1a4ed4
void FUN_001a4e68_0x1a4e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4e68_0x1a4e68");
#endif

    switch (ctx->pc) {
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4eb8u: goto label_1a4eb8;
        default: break;
    }

    ctx->pc = 0x1a4e68u;

    // 0x1a4e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4e6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a4e70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a4e74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a4e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4e7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e80: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4E80u;
    {
        const bool branch_taken_0x1a4e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E80u;
        // 0x1a4e84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e80) {
            ctx->pc = 0x1A4EC0u;
            goto label_1a4ec0;
        }
    }
    ctx->pc = 0x1A4E88u;
    // 0x1a4e88: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a4e8c: 0x8e025b50  lw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285B50u));
    // 0x1a4e90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4EB0u;
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0xc0697b0  jal         func_1A5EC0
    ctx->pc = 0x1A4E98u;
    SET_GPR_U32(ctx, 31, 0x1A4EA0u);
    ctx->pc = 0x1A5EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC0u, 0x1A4E98u, 0x1A4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4EA0u;
    {
        const bool branch_taken_0x1a4ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA0u;
        // 0x1a4ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea0) {
            ctx->pc = 0x1A4EC0u;
            goto label_1a4ec0;
        }
    }
    ctx->pc = 0x1A4EA8u;
    // 0x1a4ea8: 0xae025b50  sw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23376), GPR_U32(ctx, 2));
    // 0x1a4eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4eb0:
    // 0x1a4eb0: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x1A4EB0u;
    SET_GPR_U32(ctx, 31, 0x1A4EB8u);
    ctx->pc = 0x1A4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EB0u;
    // 0x1a4eb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1A4EB0u, 0x1A4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB8u;
label_1a4eb8:
    // 0x1a4eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB8u;
        // 0x1a4ebc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EC8u;
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4ec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4ec8:
    // 0x1a4ec8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4ecc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a4ed4u;
}
