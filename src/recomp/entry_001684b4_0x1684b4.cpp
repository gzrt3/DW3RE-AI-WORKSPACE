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

// Function: entry_001684b4
// Address: 0x1684b4 - 0x168500
void entry_001684b4_0x1684b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001684b4_0x1684b4");
#endif

    ctx->pc = 0x1684b4u;

    // 0x1684b4: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1684b8: 0xa2202  srl         $a0, $t2, 8
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1684bc: 0x314e00ff  andi        $t6, $t2, 0xFF
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1684c0: 0x3098001f  andi        $t8, $a0, 0x1F
    ctx->pc = 0x1684c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1684c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1684c8: 0xa2342  srl         $a0, $t2, 13
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
    // 0x1684cc: 0xa5482  srl         $t2, $t2, 18
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
    // 0x1684d0: 0x314f3fff  andi        $t7, $t2, 0x3FFF
    ctx->pc = 0x1684d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16383);
    // 0x1684d4: 0x1c6502b  sltu        $t2, $t6, $a2
    ctx->pc = 0x1684d4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1684d8: 0x15400048  bnez        $t2, . + 4 + (0x48 << 2)
    ctx->pc = 0x1684D8u;
    {
        const bool branch_taken_0x1684d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D8u;
        // 0x1684dc: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d8) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1684E0u;
    // 0x1684e0: 0xee082b  sltu        $at, $a3, $t6
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1684e4: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1684E4u;
    {
        const bool branch_taken_0x1684e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684e4) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1684ECu;
    // 0x1684ec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x168500u;
            return;
        }
    }
    ctx->pc = 0x1684F4u;
    // 0x1684f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1684f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1684f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1684F8u;
    {
        const bool branch_taken_0x1684f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684f8) {
            ctx->pc = 0x168590u;
            return;
        }
    }
    ctx->pc = 0x168500u;
}
