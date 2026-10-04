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

// Function: FUN_0023d940
// Address: 0x23d940 - 0x23d9b4
void FUN_0023d940_0x23d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d940_0x23d940");
#endif

    switch (ctx->pc) {
        case 0x23d98cu: goto label_23d98c;
        default: break;
    }

    ctx->pc = 0x23d940u;

    // 0x23d940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23d944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23d950: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23d950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23d958: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23d958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d95c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23d960: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23d964: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D964u;
    {
        const bool branch_taken_0x23d964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D964u;
        // 0x23d968: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d964) {
            ctx->pc = 0x23D978u;
            goto label_23d978;
        }
    }
    ctx->pc = 0x23D96Cu;
    // 0x23d96c: 0x8c420818  lw          $v0, 0x818($v0)
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x23d970: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x23d970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x23d974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d978:
    // 0x23d978: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x23d97c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23D994u;
            goto label_23d994;
        }
    }
    ctx->pc = 0x23D984u;
    // 0x23d984: 0xc08e29c  jal         func_238A70
    ctx->pc = 0x23D984u;
    SET_GPR_U32(ctx, 31, 0x23D98Cu);
    ctx->pc = 0x238A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A70u, 0x23D984u, 0x23D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D98Cu;
label_23d98c:
    // 0x23d98c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x23d990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d994:
    // 0x23d994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d9a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23d9a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d9a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d9ac: 0x808f66e  j           func_23D9B8
    ctx->pc = 0x23D9ACu;
    ctx->pc = 0x23D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9ACu;
    // 0x23d9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9B8u;
    FUN_0023d9b8_0x23d9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23D9B4u;
}
