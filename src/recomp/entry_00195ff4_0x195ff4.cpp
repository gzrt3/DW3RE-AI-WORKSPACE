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

// Function: entry_00195ff4
// Address: 0x195ff4 - 0x196020
void entry_00195ff4_0x195ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ff4_0x195ff4");
#endif

    ctx->pc = 0x195ff4u;

    // 0x195ff4: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x195ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x195ff8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195FF8u;
    {
        const bool branch_taken_0x195ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ff8) {
            ctx->pc = 0x196020u;
            return;
        }
    }
    ctx->pc = 0x196000u;
    // 0x196000: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x196004: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x196004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x196008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19600c: 0x24429d72  addiu       $v0, $v0, -0x628E
    ctx->pc = 0x19600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942066));
    // 0x196010: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x196010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x196014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196018: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x196018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19601c: 0x0  nop
    ctx->pc = 0x19601cu;
    // NOP
    ctx->pc = 0x196020u;
}
