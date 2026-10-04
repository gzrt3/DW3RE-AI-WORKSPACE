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

// Function: entry_0019e120
// Address: 0x19e120 - 0x19e148
void entry_0019e120_0x19e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e120_0x19e120");
#endif

    ctx->pc = 0x19e120u;

    // 0x19e120: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19e124: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E148u;
            return;
        }
    }
    ctx->pc = 0x19E12Cu;
    // 0x19e12c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19e130: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19e134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E134u;
    {
        const bool branch_taken_0x19e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E134u;
        // 0x19e138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e134) {
            ctx->pc = 0x19E148u;
            return;
        }
    }
    ctx->pc = 0x19E13Cu;
    // 0x19e13c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e140: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E140u;
    SET_GPR_U32(ctx, 31, 0x19E148u);
    ctx->pc = 0x19E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E140u;
    // 0x19e144: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E140u, 0x19E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E148u;
}
