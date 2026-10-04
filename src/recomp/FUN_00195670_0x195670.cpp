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

// Function: FUN_00195670
// Address: 0x195670 - 0x1956d4
void FUN_00195670_0x195670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195670_0x195670");
#endif

    switch (ctx->pc) {
        case 0x19568cu: goto label_19568c;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956bcu: goto label_1956bc;
        default: break;
    }

    ctx->pc = 0x195670u;

    // 0x195670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19567c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195684: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x195688: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_19568c:
    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
    // 0x195690: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195694u;
    {
        const bool branch_taken_0x195694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195694) {
            ctx->pc = 0x1956A4u;
            goto label_1956a4;
        }
    }
    ctx->pc = 0x19569Cu;
    // 0x19569c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x19569Cu;
    SET_GPR_U32(ctx, 31, 0x1956A4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x19569Cu, 0x1956A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
    // 0x1956a8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1956ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1956ACu;
    {
        const bool branch_taken_0x1956ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956ac) {
            ctx->pc = 0x1956BCu;
            goto label_1956bc;
        }
    }
    ctx->pc = 0x1956B4u;
    // 0x1956b4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1956B4u, 0x1956BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956BCu;
label_1956bc:
    // 0x1956bc: 0x0  nop
    ctx->pc = 0x1956bcu;
    // NOP
    // 0x1956c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1956c4: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x1956c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1956c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1956C8u;
    {
        const bool branch_taken_0x1956c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956c8) {
            ctx->pc = 0x19568Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19568c;
        }
    }
    ctx->pc = 0x1956D0u;
    // 0x1956d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1956d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1956d4u;
}
