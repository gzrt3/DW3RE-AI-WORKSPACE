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

// Function: FUN_00196320
// Address: 0x196320 - 0x196360
void FUN_00196320_0x196320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196320_0x196320");
#endif

    switch (ctx->pc) {
        case 0x196358u: goto label_196358;
        default: break;
    }

    ctx->pc = 0x196320u;

    // 0x196320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196330: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196330) {
            ctx->pc = 0x19635Cu;
            goto label_19635c;
        }
    }
    ctx->pc = 0x196338u;
    // 0x196338: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19633c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x196340: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
    // 0x196344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196348) {
            ctx->pc = 0x196358u;
            goto label_196358;
        }
    }
    ctx->pc = 0x196350u;
    // 0x196350: 0xc0658b0  jal         func_1962C0
    ctx->pc = 0x196350u;
    SET_GPR_U32(ctx, 31, 0x196358u);
    ctx->pc = 0x1962C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1962C0u, 0x196350u, 0x196358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196358u;
label_196358:
    // 0x196358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19635c:
    // 0x19635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x196360u;
}
