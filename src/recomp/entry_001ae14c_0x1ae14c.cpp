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

// Function: entry_001ae14c
// Address: 0x1ae14c - 0x1ae1b4
void entry_001ae14c_0x1ae14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae14c_0x1ae14c");
#endif

    ctx->pc = 0x1ae14cu;

    // 0x1ae14c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AE14Cu;
    {
        const bool branch_taken_0x1ae14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae14c) {
            ctx->pc = 0x1AE1B4u;
            return;
        }
    }
    ctx->pc = 0x1AE154u;
    // 0x1ae154: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ae158: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1ae15c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae160: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae164: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1ae168: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x1ae16c: 0x27c45cd0  addiu       $a0, $fp, 0x5CD0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
    // 0x1ae170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae174: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1ae178: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ae17c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ae180: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae184: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ae188: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1ae18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ae198: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae19c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1ae1a0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x1ae1a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1ae1ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ae1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1ae1b4u;
}
