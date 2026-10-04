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

// Function: entry_00220378
// Address: 0x220378 - 0x22039c
void entry_00220378_0x220378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220378_0x220378");
#endif

    switch (ctx->pc) {
        case 0x220394u: goto label_220394;
        default: break;
    }

    ctx->pc = 0x220378u;

    // 0x220378: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x22037c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220380: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x22039Cu;
            return;
        }
    }
    ctx->pc = 0x220388u;
    // 0x220388: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x22038c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22038Cu;
    SET_GPR_U32(ctx, 31, 0x220394u);
    ctx->pc = 0x220390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22038Cu;
    // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22038Cu, 0x220394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220394u;
label_220394:
    // 0x220394: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220394) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x22039Cu;
}
