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

// Function: entry_00145d94
// Address: 0x145d94 - 0x145dc0
void entry_00145d94_0x145d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145d94_0x145d94");
#endif

    switch (ctx->pc) {
        case 0x145d9cu: goto label_145d9c;
        case 0x145da8u: goto label_145da8;
        case 0x145db8u: goto label_145db8;
        default: break;
    }

    ctx->pc = 0x145d94u;

    // 0x145d94: 0xc05562c  jal         func_1558B0
    ctx->pc = 0x145D94u;
    SET_GPR_U32(ctx, 31, 0x145D9Cu);
    ctx->pc = 0x1558B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558B0u, 0x145D94u, 0x145D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D9Cu;
label_145d9c:
    // 0x145d9c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145da0: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145DA0u;
    SET_GPR_U32(ctx, 31, 0x145DA8u);
    ctx->pc = 0x145DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DA0u;
    // 0x145da4: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145DA0u, 0x145DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DA8u;
label_145da8:
    // 0x145da8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145DA8u;
    {
        const bool branch_taken_0x145da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145da8) {
            ctx->pc = 0x145DC0u;
            return;
        }
    }
    ctx->pc = 0x145DB0u;
    // 0x145db0: 0xc055610  jal         func_155840
    ctx->pc = 0x145DB0u;
    SET_GPR_U32(ctx, 31, 0x145DB8u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145DB0u, 0x145DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DB8u;
label_145db8:
    // 0x145db8: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x145DB8u;
    {
        const bool branch_taken_0x145db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DB8u;
        // 0x145dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145db8) {
            ctx->pc = 0x1460D4u;
            return;
        }
    }
    ctx->pc = 0x145DC0u;
}
