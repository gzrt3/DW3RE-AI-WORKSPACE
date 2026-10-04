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

// Function: entry_001ea8e4
// Address: 0x1ea8e4 - 0x1ea91c
void entry_001ea8e4_0x1ea8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea8e4_0x1ea8e4");
#endif

    switch (ctx->pc) {
        case 0x1ea910u: goto label_1ea910;
        default: break;
    }

    ctx->pc = 0x1ea8e4u;

    // 0x1ea8e4: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea8e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ea8ec: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea8f0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea8f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EA8F4u;
    {
        const bool branch_taken_0x1ea8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8f4) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA8FCu;
    // 0x1ea8fc: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea900: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA900u;
    {
        const bool branch_taken_0x1ea900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea900) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA908u;
    // 0x1ea908: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA908u;
    SET_GPR_U32(ctx, 31, 0x1EA910u);
    ctx->pc = 0x1EA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA908u;
    // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA908u, 0x1EA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA910u;
label_1ea910:
    // 0x1ea910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea914: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA914u;
    {
        const bool branch_taken_0x1ea914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea914) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA91Cu;
}
