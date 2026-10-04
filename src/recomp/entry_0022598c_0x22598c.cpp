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

// Function: entry_0022598c
// Address: 0x22598c - 0x2259d8
void entry_0022598c_0x22598c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022598c_0x22598c");
#endif

    switch (ctx->pc) {
        case 0x2259c8u: goto label_2259c8;
        default: break;
    }

    ctx->pc = 0x22598cu;

    // 0x22598c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x225990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x225994: 0x1443005b  bne         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x225994u;
    {
        const bool branch_taken_0x225994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225994) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x22599Cu;
    // 0x22599c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x22599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2259a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2259a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2259a4: 0x14430057  bne         $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2259A4u;
    {
        const bool branch_taken_0x2259a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2259a4) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x2259ACu;
    // 0x2259ac: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x2259acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x2259b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2259b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2259b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2259b8: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2259B8u;
    {
        const bool branch_taken_0x2259b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2259b8) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x2259C0u;
    // 0x2259c0: 0xc089884  jal         func_226210
    ctx->pc = 0x2259C0u;
    SET_GPR_U32(ctx, 31, 0x2259C8u);
    ctx->pc = 0x226210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226210u, 0x2259C0u, 0x2259C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C8u;
label_2259c8:
    // 0x2259c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2259cc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2259CCu;
    {
        const bool branch_taken_0x2259cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259CCu;
        // 0x2259d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259cc) {
            ctx->pc = 0x225BE8u;
            return;
        }
    }
    ctx->pc = 0x2259D4u;
    // 0x2259d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2259d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x2259d8u;
}
