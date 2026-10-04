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

// Function: entry_0023b668
// Address: 0x23b668 - 0x23b688
void entry_0023b668_0x23b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b668_0x23b668");
#endif

    ctx->pc = 0x23b668u;

    // 0x23b668: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b674: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x23b674u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x23b678: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x23b678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x23b67c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23B680u;
    {
        const bool branch_taken_0x23b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B680u;
        // 0x23b684: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b680) {
            ctx->pc = 0x23B6A8u;
            return;
        }
    }
    ctx->pc = 0x23B688u;
}
