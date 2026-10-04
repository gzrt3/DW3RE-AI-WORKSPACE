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

// Function: FUN_00239458
// Address: 0x239458 - 0x2394dc
void FUN_00239458_0x239458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239458_0x239458");
#endif

    switch (ctx->pc) {
        case 0x239490u: goto label_239490;
        case 0x2394a8u: goto label_2394a8;
        default: break;
    }

    ctx->pc = 0x239458u;

    // 0x239458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23945c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239460: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x239460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23946c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239470: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x239470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23947c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23947Cu;
    {
        const bool branch_taken_0x23947c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23947Cu;
        // 0x239480: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23947c) {
            ctx->pc = 0x2394C0u;
            goto label_2394c0;
        }
    }
    ctx->pc = 0x239484u;
    // 0x239484: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x239484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
    // 0x239488: 0xc08f33e  jal         func_23CCF8
    ctx->pc = 0x239488u;
    SET_GPR_U32(ctx, 31, 0x239490u);
    ctx->pc = 0x23948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239488u;
    // 0x23948c: 0x2665e3a0  addiu       $a1, $s3, -0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CCF8u, 0x239488u, 0x239490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239490u;
label_239490:
    // 0x239490: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x239490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x239494: 0x24a5e390  addiu       $a1, $a1, -0x1C70
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960016));
    // 0x239498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239498u;
    {
        const bool branch_taken_0x239498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239498) {
            ctx->pc = 0x2394B0u;
            goto label_2394b0;
        }
    }
    ctx->pc = 0x2394A0u;
    // 0x2394a0: 0xc08f33e  jal         func_23CCF8
    ctx->pc = 0x2394A0u;
    SET_GPR_U32(ctx, 31, 0x2394A8u);
    ctx->pc = 0x23CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CCF8u, 0x2394A0u, 0x2394A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394A8u;
label_2394a8:
    // 0x2394a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2394A8u;
    {
        const bool branch_taken_0x2394a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394A8u;
        // 0x2394ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394a8) {
            ctx->pc = 0x2394C8u;
            goto label_2394c8;
        }
    }
    ctx->pc = 0x2394B0u;
label_2394b0:
    // 0x2394b0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2394b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x2394b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2394B4u;
    {
        const bool branch_taken_0x2394b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b4) {
            ctx->pc = 0x2394C4u;
            goto label_2394c4;
        }
    }
    ctx->pc = 0x2394BCu;
    // 0x2394bc: 0x0  nop
    ctx->pc = 0x2394bcu;
    // NOP
label_2394c0:
    // 0x2394c0: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
label_2394c4:
    // 0x2394c4: 0x2662e3a0  addiu       $v0, $s3, -0x1C60
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
label_2394c8:
    // 0x2394c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2394c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2394cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2394ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2394d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2394d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2394d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2394d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2394d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2394d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2394dcu;
}
