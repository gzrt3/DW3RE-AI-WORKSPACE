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

// Function: entry_001009c8
// Address: 0x1009c8 - 0x100a00
void entry_001009c8_0x1009c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001009c8_0x1009c8");
#endif

    switch (ctx->pc) {
        case 0x1009d0u: goto label_1009d0;
        default: break;
    }

    ctx->pc = 0x1009c8u;

    // 0x1009c8: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1009C8u;
    SET_GPR_U32(ctx, 31, 0x1009D0u);
    ctx->pc = 0x1009CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1009C8u;
    // 0x1009cc: 0x27858440  addiu       $a1, $gp, -0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1009C8u, 0x1009D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009D0u;
label_1009d0:
    // 0x1009d0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1009d4: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009d8: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1009dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1009e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1009e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1009E4u;
    {
        const bool branch_taken_0x1009e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009e4) {
            ctx->pc = 0x100A08u;
            return;
        }
    }
    ctx->pc = 0x1009ECu;
    // 0x1009ec: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1009f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1009F0u;
    {
        const bool branch_taken_0x1009f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009F0u;
        // 0x1009f4: 0x27858454  addiu       $a1, $gp, -0x7BAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009f0) {
            ctx->pc = 0x100A00u;
            return;
        }
    }
    ctx->pc = 0x1009F8u;
    // 0x1009f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1009F8u;
    {
        const bool branch_taken_0x1009f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009f8) {
            ctx->pc = 0x100A08u;
            return;
        }
    }
    ctx->pc = 0x100A00u;
}
