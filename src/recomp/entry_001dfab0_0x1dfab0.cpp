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

// Function: entry_001dfab0
// Address: 0x1dfab0 - 0x1dfae0
void entry_001dfab0_0x1dfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfab0_0x1dfab0");
#endif

    ctx->pc = 0x1dfab0u;

    // 0x1dfab0: 0xb51c0  sll         $t2, $t3, 7
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 7));
    // 0x1dfab4: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x1dfab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1dfab8: 0xa3fc2  srl         $a3, $t2, 31
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
    // 0x1dfac0: 0x3010  mfhi        $a2
    ctx->pc = 0x1dfac0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1dfac4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1dfac8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x1dfacc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1dfad0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFAD0u;
    {
        const bool branch_taken_0x1dfad0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD0u;
        // 0x1dfad4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfad0) {
            ctx->pc = 0x1DFAE0u;
            return;
        }
    }
    ctx->pc = 0x1DFAD8u;
    // 0x1dfad8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dfadc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    ctx->pc = 0x1dfae0u;
}
