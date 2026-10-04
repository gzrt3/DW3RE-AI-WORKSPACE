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

// Function: entry_00196720
// Address: 0x196720 - 0x196744
void entry_00196720_0x196720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196720_0x196720");
#endif

    ctx->pc = 0x196720u;

    // 0x196720: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x196724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x196724u;
    {
        const bool branch_taken_0x196724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196724) {
            ctx->pc = 0x196744u;
            return;
        }
    }
    ctx->pc = 0x19672Cu;
    // 0x19672c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x196730: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x196734: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x196738: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x19673c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19673Cu;
    {
        const bool branch_taken_0x19673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19673c) {
            ctx->pc = 0x196798u;
            return;
        }
    }
    ctx->pc = 0x196744u;
}
