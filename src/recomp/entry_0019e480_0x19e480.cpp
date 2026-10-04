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

// Function: entry_0019e480
// Address: 0x19e480 - 0x19e4c0
void entry_0019e480_0x19e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e480_0x19e480");
#endif

    switch (ctx->pc) {
        case 0x19e488u: goto label_19e488;
        default: break;
    }

    ctx->pc = 0x19e480u;

    // 0x19e480: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19E480u;
    SET_GPR_U32(ctx, 31, 0x19E488u);
    ctx->pc = 0x19E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E480u;
    // 0x19e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19E480u, 0x19E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E488u;
label_19e488:
    // 0x19e488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e48c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x19E48Cu;
    {
        const bool branch_taken_0x19e48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x19E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E48Cu;
        // 0x19e490: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e48c) {
            ctx->pc = 0x19E4ECu;
            return;
        }
    }
    ctx->pc = 0x19E494u;
    // 0x19e494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E494u;
    {
        const bool branch_taken_0x19e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e494) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E49Cu;
    // 0x19e49c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E49Cu;
    {
        const bool branch_taken_0x19e49c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E49Cu;
        // 0x19e4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e49c) {
            ctx->pc = 0x19E4C0u;
            return;
        }
    }
    ctx->pc = 0x19E4A4u;
    // 0x19e4a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19E4A4u;
    {
        const bool branch_taken_0x19e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4a4) {
            ctx->pc = 0x19E50Cu;
            return;
        }
    }
    ctx->pc = 0x19E4ACu;
label_19e4ac:
    // 0x19e4ac: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x19E4ACu;
    {
        const bool branch_taken_0x19e4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x19e4ac) {
            ctx->pc = 0x19E4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4ACu;
            // 0x19e4b0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E50Cu;
            return;
        }
    }
    ctx->pc = 0x19E4B4u;
    // 0x19e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19E4B8u;
    {
        const bool branch_taken_0x19e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B8u;
        // 0x19e4bc: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b8) {
            ctx->pc = 0x19E510u;
            return;
        }
    }
    ctx->pc = 0x19E4C0u;
}
