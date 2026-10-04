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

// Function: entry_001d48cc
// Address: 0x1d48cc - 0x1d48f0
void entry_001d48cc_0x1d48cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48cc_0x1d48cc");
#endif

    ctx->pc = 0x1d48ccu;

    // 0x1d48cc: 0x8205021f  lb          $a1, 0x21F($s0)
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
    // 0x1d48d0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D48D0u;
    {
        const bool branch_taken_0x1d48d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d48d0) {
            ctx->pc = 0x1D48F0u;
            return;
        }
    }
    ctx->pc = 0x1D48D8u;
    // 0x1d48d8: 0xdc820270  ld          $v0, 0x270($a0)
    ctx->pc = 0x1d48d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1d48dc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1d48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1d48e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48E0u;
    {
        const bool branch_taken_0x1d48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48E0u;
        // 0x1d48e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48e0) {
            ctx->pc = 0x1D48F0u;
            return;
        }
    }
    ctx->pc = 0x1D48E8u;
    // 0x1d48e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D48E8u;
    {
        const bool branch_taken_0x1d48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d48e8) {
            ctx->pc = 0x1D49A0u;
            return;
        }
    }
    ctx->pc = 0x1D48F0u;
}
