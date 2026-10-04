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

// Function: entry_0012f570
// Address: 0x12f570 - 0x12f58c
void entry_0012f570_0x12f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f570_0x12f570");
#endif

    ctx->pc = 0x12f570u;

    // 0x12f570: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x12f570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f574: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12f578: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x12f578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12f57c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F57Cu;
    {
        const bool branch_taken_0x12f57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f57c) {
            ctx->pc = 0x12F58Cu;
            return;
        }
    }
    ctx->pc = 0x12F584u;
    // 0x12f584: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F584u;
    {
        const bool branch_taken_0x12f584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F584u;
        // 0x12f588: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f584) {
            ctx->pc = 0x12F59Cu;
            return;
        }
    }
    ctx->pc = 0x12F58Cu;
}
