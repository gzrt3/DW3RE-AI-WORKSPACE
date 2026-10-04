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

// Function: entry_001055e8
// Address: 0x1055e8 - 0x105614
void entry_001055e8_0x1055e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055e8_0x1055e8");
#endif

    switch (ctx->pc) {
        case 0x105600u: goto label_105600;
        default: break;
    }

    ctx->pc = 0x1055e8u;

    // 0x1055e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1055ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1055f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1055f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1055f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1055f8: 0xc06c0ea  jal         func_1B03A8
    ctx->pc = 0x1055F8u;
    SET_GPR_U32(ctx, 31, 0x105600u);
    ctx->pc = 0x1055FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055F8u;
    // 0x1055fc: 0x27878010  addiu       $a3, $gp, -0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B03A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03A8u, 0x1055F8u, 0x105600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105600u;
label_105600:
    // 0x105600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105604: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x105604u;
    {
        const bool branch_taken_0x105604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x105608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105604u;
        // 0x105608: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105604) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x10560Cu;
    // 0x10560c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10560Cu;
    {
        const bool branch_taken_0x10560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10560Cu;
        // 0x105610: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10560c) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105614u;
}
