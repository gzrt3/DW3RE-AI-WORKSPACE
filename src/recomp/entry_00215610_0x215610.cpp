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

// Function: entry_00215610
// Address: 0x215610 - 0x215650
void entry_00215610_0x215610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215610_0x215610");
#endif

    ctx->pc = 0x215610u;

    // 0x215610: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x215610u;
    {
        const bool branch_taken_0x215610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215610u;
        // 0x215614: 0x28610061  slti        $at, $v1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215610) {
            ctx->pc = 0x2156A8u;
            return;
        }
    }
    ctx->pc = 0x215618u;
    // 0x215618: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x215618u;
    {
        const bool branch_taken_0x215618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215618) {
            ctx->pc = 0x2156A8u;
            return;
        }
    }
    ctx->pc = 0x215620u;
    // 0x215620: 0x2463ffa8  addiu       $v1, $v1, -0x58
    ctx->pc = 0x215620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967208));
    // 0x215624: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x215624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x215628: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21562c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x21562cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x215630: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x215630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215638: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x215638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21563c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215640: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215640u;
    {
        const bool branch_taken_0x215640 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x215644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215640u;
        // 0x215644: 0x33043  sra         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215640) {
            ctx->pc = 0x215650u;
            return;
        }
    }
    ctx->pc = 0x215648u;
    // 0x215648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21564c: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x215650u;
}
