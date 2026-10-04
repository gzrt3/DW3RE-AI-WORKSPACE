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

// Function: entry_001a2650
// Address: 0x1a2650 - 0x1a26c0
void entry_001a2650_0x1a2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2650_0x1a2650");
#endif

    ctx->pc = 0x1a2650u;

    // 0x1a2650: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1a2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1a2654: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2658: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A2658u;
    {
        const bool branch_taken_0x1a2658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2658) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A2660u;
    // 0x1a2660: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a2660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1a2664: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2668: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A2668u;
    {
        const bool branch_taken_0x1a2668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2668) {
            ctx->pc = 0x1A26C8u;
            return;
        }
    }
    ctx->pc = 0x1A2670u;
    // 0x1a2670: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1a2674: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2678: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2678u;
    {
        const bool branch_taken_0x1a2678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2678) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A2680u;
    // 0x1a2680: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1a2684: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2688: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2688u;
    {
        const bool branch_taken_0x1a2688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2688) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A2690u;
    // 0x1a2690: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1a2694: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2698: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2698u;
    {
        const bool branch_taken_0x1a2698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2698) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A26A0u;
    // 0x1a26a0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1a26a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a26a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A26A8u;
    {
        const bool branch_taken_0x1a26a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a26a8) {
            ctx->pc = 0x1A26C0u;
            return;
        }
    }
    ctx->pc = 0x1A26B0u;
    // 0x1a26b0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1a26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1a26b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a26b8: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A26B8u;
    {
        const bool branch_taken_0x1a26b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a26b8) {
            ctx->pc = 0x1A2710u;
            return;
        }
    }
    ctx->pc = 0x1A26C0u;
}
