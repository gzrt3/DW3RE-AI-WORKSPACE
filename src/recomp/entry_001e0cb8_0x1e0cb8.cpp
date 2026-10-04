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

// Function: entry_001e0cb8
// Address: 0x1e0cb8 - 0x1e0d20
void entry_001e0cb8_0x1e0cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0cb8_0x1e0cb8");
#endif

    ctx->pc = 0x1e0cb8u;

    // 0x1e0cb8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0cbc: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1e0cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e0cc0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0CD0u;
            goto label_1e0cd0;
        }
    }
    ctx->pc = 0x1E0CC8u;
    // 0x1e0cc8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1e0ccc: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cd0:
    // 0x1e0cd0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD8u;
    // 0x1e0cd8: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1e0cdc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1e0ce0:
    // 0x1e0ce0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1e0ce4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CE4u;
    {
        const bool branch_taken_0x1e0ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce4) {
            ctx->pc = 0x1E0CF4u;
            goto label_1e0cf4;
        }
    }
    ctx->pc = 0x1E0CECu;
    // 0x1e0cec: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1e0cf0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0cf4:
    // 0x1e0cf4: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1e0cf8: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x1e0cf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cfc: 0x1833823  subu        $a3, $t4, $v1
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1e0d00: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1e0d04: 0x1674823  subu        $t1, $t3, $a3
    ctx->pc = 0x1e0d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1e0d08: 0x24e70280  addiu       $a3, $a3, 0x280
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
    // 0x1e0d0c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1e0d10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e0d14: 0x252f6c00  addiu       $t7, $t1, 0x6C00
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
    // 0x1e0d18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0D18u;
    {
        const bool branch_taken_0x1e0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d18) {
            ctx->pc = 0x1E0D74u;
            return;
        }
    }
    ctx->pc = 0x1E0D20u;
}
