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

// Function: entry_00168134
// Address: 0x168134 - 0x168184
void entry_00168134_0x168134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168134_0x168134");
#endif

    ctx->pc = 0x168134u;

    // 0x168134: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x168134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x168138: 0xf6a02  srl         $t5, $t7, 8
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x16813c: 0xf3b42  srl         $a3, $t7, 13
    ctx->pc = 0x16813cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 13));
    // 0x168140: 0x31b8001f  andi        $t8, $t5, 0x1F
    ctx->pc = 0x168140u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31);
    // 0x168144: 0x30f90007  andi        $t9, $a3, 0x7
    ctx->pc = 0x168144u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x168148: 0xf6c82  srl         $t5, $t7, 18
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 18));
    // 0x16814c: 0x31e700ff  andi        $a3, $t7, 0xFF
    ctx->pc = 0x16814cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x168150: 0x31af3fff  andi        $t7, $t5, 0x3FFF
    ctx->pc = 0x168150u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16383);
    // 0x168154: 0x14e00044  bnez        $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x168154u;
    {
        const bool branch_taken_0x168154 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168154u;
        // 0x168158: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168154) {
            ctx->pc = 0x168268u;
            return;
        }
    }
    ctx->pc = 0x16815Cu;
    // 0x16815c: 0x2f070003  sltiu       $a3, $t8, 0x3
    ctx->pc = 0x16815cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x168160: 0x14e00041  bnez        $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x168160u;
    {
        const bool branch_taken_0x168160 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168160u;
        // 0x168164: 0x2f010006  sltiu       $at, $t8, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168160) {
            ctx->pc = 0x168268u;
            return;
        }
    }
    ctx->pc = 0x168168u;
    // 0x168168: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168168) {
            ctx->pc = 0x168268u;
            return;
        }
    }
    ctx->pc = 0x168170u;
    // 0x168170: 0x17200004  bnez        $t9, . + 4 + (0x4 << 2)
    ctx->pc = 0x168170u;
    {
        const bool branch_taken_0x168170 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x168170) {
            ctx->pc = 0x168184u;
            return;
        }
    }
    ctx->pc = 0x168178u;
    // 0x168178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16817c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x16817Cu;
    {
        const bool branch_taken_0x16817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16817c) {
            ctx->pc = 0x168218u;
            return;
        }
    }
    ctx->pc = 0x168184u;
}
