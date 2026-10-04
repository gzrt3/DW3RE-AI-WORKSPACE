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

// Function: entry_00215818
// Address: 0x215818 - 0x215848
void entry_00215818_0x215818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215818_0x215818");
#endif

    ctx->pc = 0x215818u;

    // 0x215818: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215818) {
            ctx->pc = 0x21589Cu;
            return;
        }
    }
    ctx->pc = 0x215820u;
    // 0x215820: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x215820u;
    {
        const bool branch_taken_0x215820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x2464ffe8  addiu       $a0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215820) {
            ctx->pc = 0x21589Cu;
            return;
        }
    }
    ctx->pc = 0x215828u;
    // 0x215828: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21582c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x215830: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215834: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x215838: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215838u;
    {
        const bool branch_taken_0x215838 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215838) {
            ctx->pc = 0x215848u;
            return;
        }
    }
    ctx->pc = 0x215840u;
    // 0x215840: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215844: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x215848u;
}
