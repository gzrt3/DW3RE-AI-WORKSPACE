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

// Function: entry_0012fc64
// Address: 0x12fc64 - 0x12fc94
void entry_0012fc64_0x12fc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc64_0x12fc64");
#endif

    switch (ctx->pc) {
        case 0x12fc6cu: goto label_12fc6c;
        case 0x12fc7cu: goto label_12fc7c;
        case 0x12fc8cu: goto label_12fc8c;
        default: break;
    }

    ctx->pc = 0x12fc64u;

    // 0x12fc64: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC64u;
    SET_GPR_U32(ctx, 31, 0x12FC6Cu);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC64u, 0x12FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC6Cu;
label_12fc6c:
    // 0x12fc6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FC6Cu;
    {
        const bool branch_taken_0x12fc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC6Cu;
        // 0x12fc70: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc6c) {
            ctx->pc = 0x12FC98u;
            return;
        }
    }
    ctx->pc = 0x12FC74u;
    // 0x12fc74: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC74u;
    SET_GPR_U32(ctx, 31, 0x12FC7Cu);
    ctx->pc = 0x12FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC74u;
    // 0x12fc78: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC74u, 0x12FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC7Cu;
label_12fc7c:
    // 0x12fc7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC7Cu;
    {
        const bool branch_taken_0x12fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC7Cu;
        // 0x12fc80: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc7c) {
            ctx->pc = 0x12FC94u;
            return;
        }
    }
    ctx->pc = 0x12FC84u;
    // 0x12fc84: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC84u;
    SET_GPR_U32(ctx, 31, 0x12FC8Cu);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC84u, 0x12FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC8Cu;
label_12fc8c:
    // 0x12fc8c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x12FC8Cu;
    {
        const bool branch_taken_0x12fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc8c) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FC94u;
}
