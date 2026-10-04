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

// Function: entry_0024aa68
// Address: 0x24aa68 - 0x24aa90
void entry_0024aa68_0x24aa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aa68_0x24aa68");
#endif

    switch (ctx->pc) {
        case 0x24aa84u: goto label_24aa84;
        default: break;
    }

    ctx->pc = 0x24aa68u;

    // 0x24aa68: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24aa70: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x24aa70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24aa74: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x24AA74u;
    {
        const bool branch_taken_0x24aa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa74) {
            ctx->pc = 0x24AA04u;
            return;
        }
    }
    ctx->pc = 0x24AA7Cu;
    // 0x24aa7c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA7Cu;
    SET_GPR_U32(ctx, 31, 0x24AA84u);
    ctx->pc = 0x24AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA7Cu;
    // 0x24aa80: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA7Cu, 0x24AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA84u;
label_24aa84:
    // 0x24aa84: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x24aa8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24aa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24aa90u;
}
