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

// Function: entry_00239a64
// Address: 0x239a64 - 0x239a8c
void entry_00239a64_0x239a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239a64_0x239a64");
#endif

    switch (ctx->pc) {
        case 0x239a6cu: goto label_239a6c;
        default: break;
    }

    ctx->pc = 0x239a64u;

    // 0x239a64: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x239A64u;
    SET_GPR_U32(ctx, 31, 0x239A6Cu);
    ctx->pc = 0x239A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A64u;
    // 0x239a68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x239A64u, 0x239A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A6Cu;
label_239a6c:
    // 0x239a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a70: 0x1235005f  beq         $s1, $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x239A70u;
    {
        const bool branch_taken_0x239a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x239A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A70u;
        // 0x239a74: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a70) {
            ctx->pc = 0x239BF0u;
            return;
        }
    }
    ctx->pc = 0x239A78u;
    // 0x239a78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239A78u;
    {
        const bool branch_taken_0x239a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A78u;
        // 0x239a7c: 0x3c1e0029  lui         $fp, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a78) {
            ctx->pc = 0x239A8Cu;
            return;
        }
    }
    ctx->pc = 0x239A80u;
    // 0x239a80: 0x5697005c  bnel        $s4, $s7, . + 4 + (0x5C << 2)
    ctx->pc = 0x239A80u;
    {
        const bool branch_taken_0x239a80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x239a80) {
            ctx->pc = 0x239A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239A80u;
            // 0x239a84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BF4u;
            return;
        }
    }
    ctx->pc = 0x239A88u;
    // 0x239a88: 0x3c1e0029  lui         $fp, 0x29
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x239a8cu;
}
