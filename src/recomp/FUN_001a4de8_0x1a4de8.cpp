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

// Function: FUN_001a4de8
// Address: 0x1a4de8 - 0x1a4e5c
void FUN_001a4de8_0x1a4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4de8_0x1a4de8");
#endif

    switch (ctx->pc) {
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e40u: goto label_1a4e40;
        default: break;
    }

    ctx->pc = 0x1a4de8u;

    // 0x1a4de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4dec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a4df0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a4df4: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a4df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a4dfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a4dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a4e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e08: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4E08u;
    {
        const bool branch_taken_0x1a4e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E08u;
        // 0x1a4e0c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e08) {
            ctx->pc = 0x1A4E48u;
            goto label_1a4e48;
        }
    }
    ctx->pc = 0x1A4E10u;
    // 0x1a4e10: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a4e14: 0x8e025b50  lw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285B50u));
    // 0x1a4e18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4E18u;
    {
        const bool branch_taken_0x1a4e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E18u;
        // 0x1a4e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e18) {
            ctx->pc = 0x1A4E38u;
            goto label_1a4e38;
        }
    }
    ctx->pc = 0x1A4E20u;
    // 0x1a4e20: 0xc0697b0  jal         func_1A5EC0
    ctx->pc = 0x1A4E20u;
    SET_GPR_U32(ctx, 31, 0x1A4E28u);
    ctx->pc = 0x1A5EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EC0u, 0x1A4E20u, 0x1A4E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E28u;
label_1a4e28:
    // 0x1a4e28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4E28u;
    {
        const bool branch_taken_0x1a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E28u;
        // 0x1a4e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e28) {
            ctx->pc = 0x1A4E48u;
            goto label_1a4e48;
        }
    }
    ctx->pc = 0x1A4E30u;
    // 0x1a4e30: 0xae025b50  sw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23376), GPR_U32(ctx, 2));
    // 0x1a4e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e38:
    // 0x1a4e38: 0xc069728  jal         func_1A5CA0
    ctx->pc = 0x1A4E38u;
    SET_GPR_U32(ctx, 31, 0x1A4E40u);
    ctx->pc = 0x1A4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E38u;
    // 0x1a4e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5CA0u, 0x1A4E38u, 0x1A4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E40u;
label_1a4e40:
    // 0x1a4e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E40u;
    {
        const bool branch_taken_0x1a4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E40u;
        // 0x1a4e44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e40) {
            ctx->pc = 0x1A4E50u;
            goto label_1a4e50;
        }
    }
    ctx->pc = 0x1A4E48u;
label_1a4e48:
    // 0x1a4e48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a4e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4e50:
    // 0x1a4e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4e54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a4e5cu;
}
