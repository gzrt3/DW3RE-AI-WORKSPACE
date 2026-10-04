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

// Function: entry_00164a58
// Address: 0x164a58 - 0x164a80
void entry_00164a58_0x164a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a58_0x164a58");
#endif

    switch (ctx->pc) {
        case 0x164a78u: goto label_164a78;
        default: break;
    }

    ctx->pc = 0x164a58u;

    // 0x164a58: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x164a5c: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x164a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x164a60: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x164a64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x164a68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164A68u;
    {
        const bool branch_taken_0x164a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A68u;
        // 0x164a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a68) {
            ctx->pc = 0x164A80u;
            return;
        }
    }
    ctx->pc = 0x164A70u;
    // 0x164a70: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x164A70u;
    SET_GPR_U32(ctx, 31, 0x164A78u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x164A70u, 0x164A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A78u;
label_164a78:
    // 0x164a78: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x164A78u;
    SET_GPR_U32(ctx, 31, 0x164A80u);
    ctx->pc = 0x164A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A78u;
    // 0x164a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x164A78u, 0x164A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A80u;
}
