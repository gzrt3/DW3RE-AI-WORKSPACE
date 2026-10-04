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

// Function: entry_001e0b4c
// Address: 0x1e0b4c - 0x1e0b78
void entry_001e0b4c_0x1e0b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b4c_0x1e0b4c");
#endif

    ctx->pc = 0x1e0b4cu;

    // 0x1e0b4c: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1e0b50: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b54: 0x1823823  subu        $a3, $t4, $v0
    ctx->pc = 0x1e0b54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1e0b58: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1e0b5c: 0x74823  negu        $t1, $a3
    ctx->pc = 0x1e0b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1e0b60: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1e0b64: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1e0b68: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e0b6c: 0x252e6c00  addiu       $t6, $t1, 0x6C00
    ctx->pc = 0x1e0b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
    // 0x1e0b70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0B70u;
    {
        const bool branch_taken_0x1e0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B70u;
        // 0x1e0b74: 0x24ef6c00  addiu       $t7, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b70) {
            ctx->pc = 0x1E0BCCu;
            return;
        }
    }
    ctx->pc = 0x1E0B78u;
}
