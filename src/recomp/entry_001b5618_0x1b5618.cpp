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

// Function: entry_001b5618
// Address: 0x1b5618 - 0x1b5668
void entry_001b5618_0x1b5618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5618_0x1b5618");
#endif

    ctx->pc = 0x1b5618u;

    // 0x1b5618: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1b5618u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b561c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1b561cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1b5620: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1b5620u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1b5624: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1b5624u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b5628: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1b5628u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1b562c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1b562cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b5630: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1b5630u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1b5634: 0x150000e2  bnez        $t0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1B5634u;
    {
        const bool branch_taken_0x1b5634 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5634u;
        // 0x1b5638: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5634) {
            ctx->pc = 0x1B59C0u;
            return;
        }
    }
    ctx->pc = 0x1B563Cu;
    // 0x1b563c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5640: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B5640u;
    {
        const bool branch_taken_0x1b5640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5640u;
        // 0x1b5644: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5640) {
            ctx->pc = 0x1B5780u;
            return;
        }
    }
    ctx->pc = 0x1B5648u;
    // 0x1b5648: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b5648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b564c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B564Cu;
    {
        const bool branch_taken_0x1b564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B564Cu;
        // 0x1b5650: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b564c) {
            ctx->pc = 0x1B5668u;
            return;
        }
    }
    ctx->pc = 0x1B5654u;
    // 0x1b5654: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b5654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b5658: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b565c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B565Cu;
    {
        const bool branch_taken_0x1b565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B565Cu;
        // 0x1b5660: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b565c) {
            ctx->pc = 0x1B567Cu;
            return;
        }
    }
    ctx->pc = 0x1B5664u;
    // 0x1b5664: 0x0  nop
    ctx->pc = 0x1b5664u;
    // NOP
    ctx->pc = 0x1b5668u;
}
