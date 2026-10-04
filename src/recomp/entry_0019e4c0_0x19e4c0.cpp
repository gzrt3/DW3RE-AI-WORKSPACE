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

// Function: entry_0019e4c0
// Address: 0x19e4c0 - 0x19e4ec
void entry_0019e4c0_0x19e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4c0_0x19e4c0");
#endif

    switch (ctx->pc) {
        case 0x19e4c8u: goto label_19e4c8;
        default: break;
    }

    ctx->pc = 0x19e4c0u;

    // 0x19e4c0: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19E4C0u;
    SET_GPR_U32(ctx, 31, 0x19E4C8u);
    ctx->pc = 0x19E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4C0u;
    // 0x19e4c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19E4C0u, 0x19E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4C8u;
label_19e4c8:
    // 0x19e4c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19e4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4cc: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x19e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x19e4d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E4D0u;
    {
        const bool branch_taken_0x19e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D0u;
        // 0x19e4d4: 0x2685a068  addiu       $a1, $s4, -0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d0) {
            ctx->pc = 0x19E4F4u;
            return;
        }
    }
    ctx->pc = 0x19E4D8u;
    // 0x19e4d8: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E4D8u;
    {
        const bool branch_taken_0x19e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d8) {
            ctx->pc = 0x19E4F8u;
            return;
        }
    }
    ctx->pc = 0x19E4E0u;
    // 0x19e4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4e4: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19E4E4u;
    SET_GPR_U32(ctx, 31, 0x19E4ECu);
    ctx->pc = 0x19E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4E4u;
    // 0x19e4e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19E4E4u, 0x19E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4ECu;
}
