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

// Function: entry_001d4fcc
// Address: 0x1d4fcc - 0x1d4fec
void entry_001d4fcc_0x1d4fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4fcc_0x1d4fcc");
#endif

    ctx->pc = 0x1d4fccu;

    // 0x1d4fcc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4fd0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d4fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d4fd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4FD4u;
    {
        const bool branch_taken_0x1d4fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fd4) {
            ctx->pc = 0x1D4FECu;
            return;
        }
    }
    ctx->pc = 0x1D4FDCu;
    // 0x1d4fdc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4fe0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d4fe4: 0xc060754  jal         func_181D50
    ctx->pc = 0x1D4FE4u;
    SET_GPR_U32(ctx, 31, 0x1D4FECu);
    ctx->pc = 0x1D4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FE4u;
    // 0x1d4fe8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D50u, 0x1D4FE4u, 0x1D4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FECu;
}
