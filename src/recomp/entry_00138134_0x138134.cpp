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

// Function: entry_00138134
// Address: 0x138134 - 0x13815c
void entry_00138134_0x138134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138134_0x138134");
#endif

    ctx->pc = 0x138134u;

    // 0x138134: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x138138: 0x332c0  sll         $a2, $v1, 11
    ctx->pc = 0x138138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x13813c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138140: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138144: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x138144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x138148: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x138148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x13814c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13814Cu;
    {
        const bool branch_taken_0x13814c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x138150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13814Cu;
        // 0x138150: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13814c) {
            ctx->pc = 0x13815Cu;
            return;
        }
    }
    ctx->pc = 0x138154u;
    // 0x138154: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138154u;
    {
        const bool branch_taken_0x138154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138154u;
        // 0x138158: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138154) {
            ctx->pc = 0x138174u;
            return;
        }
    }
    ctx->pc = 0x13815Cu;
}
