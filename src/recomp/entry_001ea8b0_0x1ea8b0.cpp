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

// Function: entry_001ea8b0
// Address: 0x1ea8b0 - 0x1ea8e4
void entry_001ea8b0_0x1ea8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea8b0_0x1ea8b0");
#endif

    switch (ctx->pc) {
        case 0x1ea8dcu: goto label_1ea8dc;
        default: break;
    }

    ctx->pc = 0x1ea8b0u;

    // 0x1ea8b0: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea8b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ea8b8: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1ea8bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ea8c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA8C0u;
    {
        const bool branch_taken_0x1ea8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8c0) {
            ctx->pc = 0x1EA8E4u;
            return;
        }
    }
    ctx->pc = 0x1EA8C8u;
    // 0x1ea8c8: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
    // 0x1ea8cc: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EA8CCu;
    {
        const bool branch_taken_0x1ea8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8cc) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA8D4u;
    // 0x1ea8d4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EA8D4u;
    SET_GPR_U32(ctx, 31, 0x1EA8DCu);
    ctx->pc = 0x1EA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8D4u;
    // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EA8D4u, 0x1EA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8DCu;
label_1ea8dc:
    // 0x1ea8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA8E4u;
}
