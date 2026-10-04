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

// Function: entry_00116358
// Address: 0x116358 - 0x116374
void entry_00116358_0x116358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116358_0x116358");
#endif

    ctx->pc = 0x116358u;

    // 0x116358: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x116358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11635c: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11635Cu;
    {
        const bool branch_taken_0x11635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x11635c) {
            ctx->pc = 0x116384u;
            return;
        }
    }
    ctx->pc = 0x116364u;
    // 0x116364: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116364u;
    {
        const bool branch_taken_0x116364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116364) {
            ctx->pc = 0x116374u;
            return;
        }
    }
    ctx->pc = 0x11636Cu;
    // 0x11636c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11636Cu;
    {
        const bool branch_taken_0x11636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11636Cu;
        // 0x116370: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11636c) {
            ctx->pc = 0x116384u;
            return;
        }
    }
    ctx->pc = 0x116374u;
}
