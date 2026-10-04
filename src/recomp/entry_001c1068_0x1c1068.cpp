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

// Function: entry_001c1068
// Address: 0x1c1068 - 0x1c1094
void entry_001c1068_0x1c1068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1068_0x1c1068");
#endif

    switch (ctx->pc) {
        case 0x1c1080u: goto label_1c1080;
        default: break;
    }

    ctx->pc = 0x1c1068u;

    // 0x1c1068: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x1c106c: 0x28630060  slti        $v1, $v1, 0x60
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1c1070: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C1078u;
    // 0x1c1078: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x1C1078u;
    SET_GPR_U32(ctx, 31, 0x1C1080u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C1078u, 0x1C1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1080u;
label_1c1080:
    // 0x1c1080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C1088u;
    // 0x1c1088: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
    // 0x1c108c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C108Cu;
    {
        const bool branch_taken_0x1c108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c108c) {
            ctx->pc = 0x1C10B4u;
            return;
        }
    }
    ctx->pc = 0x1C1094u;
}
