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

// Function: entry_0013d698
// Address: 0x13d698 - 0x13d6d0
void entry_0013d698_0x13d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d698_0x13d698");
#endif

    ctx->pc = 0x13d698u;

    // 0x13d698: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x13d698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x13d69c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D69Cu;
    {
        const bool branch_taken_0x13d69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D69Cu;
        // 0x13d6a0: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d69c) {
            ctx->pc = 0x13D6D0u;
            return;
        }
    }
    ctx->pc = 0x13D6A4u;
    // 0x13d6a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D6A4u;
    {
        const bool branch_taken_0x13d6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d6a4) {
            ctx->pc = 0x13D6D0u;
            return;
        }
    }
    ctx->pc = 0x13D6ACu;
    // 0x13d6ac: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6b0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13d6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13d6b4: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d6b8: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6bc: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13d6c0: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d6c4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d6c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d6c8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d6cc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d6d0u;
}
