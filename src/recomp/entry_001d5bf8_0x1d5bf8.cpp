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

// Function: entry_001d5bf8
// Address: 0x1d5bf8 - 0x1d5c1c
void entry_001d5bf8_0x1d5bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bf8_0x1d5bf8");
#endif

    ctx->pc = 0x1d5bf8u;

    // 0x1d5bf8: 0x0  nop
    ctx->pc = 0x1d5bf8u;
    // NOP
    // 0x1d5bfc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1d5c00: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1d5c04: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d5c08: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1d5c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C0Cu;
    {
        const bool branch_taken_0x1d5c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c0c) {
            ctx->pc = 0x1D5C1Cu;
            return;
        }
    }
    ctx->pc = 0x1D5C14u;
    // 0x1d5c14: 0xc075714  jal         func_1D5C50
    ctx->pc = 0x1D5C14u;
    SET_GPR_U32(ctx, 31, 0x1D5C1Cu);
    ctx->pc = 0x1D5C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C50u, 0x1D5C14u, 0x1D5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C1Cu;
}
