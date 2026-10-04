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

// Function: entry_0013d5a8
// Address: 0x13d5a8 - 0x13d5f0
void entry_0013d5a8_0x13d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5a8_0x13d5a8");
#endif

    ctx->pc = 0x13d5a8u;

    // 0x13d5a8: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d5a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d5ac: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D5ACu;
    {
        const bool branch_taken_0x13d5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d5ac) {
            ctx->pc = 0x13D628u;
            return;
        }
    }
    ctx->pc = 0x13D5B4u;
    // 0x13d5b4: 0x94e8001c  lhu         $t0, 0x1C($a3)
    ctx->pc = 0x13d5b4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5b8: 0x31030002  andi        $v1, $t0, 0x2
    ctx->pc = 0x13d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x13d5bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D5BCu;
    {
        const bool branch_taken_0x13d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5BCu;
        // 0x13d5c0: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5bc) {
            ctx->pc = 0x13D5F0u;
            return;
        }
    }
    ctx->pc = 0x13D5C4u;
    // 0x13d5c4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D5C4u;
    {
        const bool branch_taken_0x13d5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d5c4) {
            ctx->pc = 0x13D5F0u;
            return;
        }
    }
    ctx->pc = 0x13D5CCu;
    // 0x13d5cc: 0x3103fffd  andi        $v1, $t0, 0xFFFD
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65533);
    // 0x13d5d0: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d5d4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d5d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5d8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d5dc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d5e0: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d5e4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13d5e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13D5E8u;
    {
        const bool branch_taken_0x13d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5E8u;
        // 0x13d5ec: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5e8) {
            ctx->pc = 0x13D628u;
            return;
        }
    }
    ctx->pc = 0x13D5F0u;
}
