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

// Function: entry_0013d650
// Address: 0x13d650 - 0x13d698
void entry_0013d650_0x13d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d650_0x13d650");
#endif

    ctx->pc = 0x13d650u;

    // 0x13d650: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d650u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d654: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D654u;
    {
        const bool branch_taken_0x13d654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d654) {
            ctx->pc = 0x13D6D0u;
            return;
        }
    }
    ctx->pc = 0x13D65Cu;
    // 0x13d65c: 0x94e5001c  lhu         $a1, 0x1C($a3)
    ctx->pc = 0x13d65cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d660: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x13d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13d664: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D664u;
    {
        const bool branch_taken_0x13d664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D664u;
        // 0x13d668: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d664) {
            ctx->pc = 0x13D698u;
            return;
        }
    }
    ctx->pc = 0x13D66Cu;
    // 0x13d66c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D66Cu;
    {
        const bool branch_taken_0x13d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d66c) {
            ctx->pc = 0x13D698u;
            return;
        }
    }
    ctx->pc = 0x13D674u;
    // 0x13d674: 0x30a3fffd  andi        $v1, $a1, 0xFFFD
    ctx->pc = 0x13d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65533);
    // 0x13d678: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d678u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d67c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d67cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d680: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13d680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13d684: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d684u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d688: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d68c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13d690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13D690u;
    {
        const bool branch_taken_0x13d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D690u;
        // 0x13d694: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d690) {
            ctx->pc = 0x13D6D0u;
            return;
        }
    }
    ctx->pc = 0x13D698u;
}
