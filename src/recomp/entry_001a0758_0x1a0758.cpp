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

// Function: entry_001a0758
// Address: 0x1a0758 - 0x1a0784
void entry_001a0758_0x1a0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0758_0x1a0758");
#endif

    ctx->pc = 0x1a0758u;

    // 0x1a0758: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1a0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a075c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1a075cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1a0760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0760u;
    {
        const bool branch_taken_0x1a0760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0760u;
        // 0x1a0764: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0760) {
            ctx->pc = 0x1A0774u;
            goto label_1a0774;
        }
    }
    ctx->pc = 0x1A0768u;
    // 0x1a0768: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1a0768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1a076c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A076Cu;
    {
        const bool branch_taken_0x1a076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A076Cu;
        // 0x1a0770: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a076c) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0774u;
label_1a0774:
    // 0x1a0774: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x1a0774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0778:
    // 0x1a0778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a077c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A077Cu;
    {
        const bool branch_taken_0x1a077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a077c) {
            ctx->pc = 0x1A07ACu;
            return;
        }
    }
    ctx->pc = 0x1A0784u;
}
