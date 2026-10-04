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

// Function: entry_002319cc
// Address: 0x2319cc - 0x231a1c
void entry_002319cc_0x2319cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002319cc_0x2319cc");
#endif

    switch (ctx->pc) {
        case 0x2319e8u: goto label_2319e8;
        case 0x231a04u: goto label_231a04;
        case 0x231a18u: goto label_231a18;
        default: break;
    }

    ctx->pc = 0x2319ccu;

label_2319cc:
    // 0x2319cc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2319ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2319d0:
    // 0x2319d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2319d4:
    // 0x2319d4: 0x8c421280  lw          $v0, 0x1280($v0)
    ctx->pc = 0x2319d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4736)));
label_2319d8:
    // 0x2319d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2319dc:
    if (ctx->pc == 0x2319DCu) {
        ctx->pc = 0x2319DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319D8u;
        // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E0u;
        goto label_2319e0;
    }
    ctx->pc = 0x2319D8u;
    {
        const bool branch_taken_0x2319d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319d8) {
            ctx->pc = 0x2319DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2319D8u;
            // 0x2319dc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2319F0u;
            goto label_2319f0;
        }
    }
    ctx->pc = 0x2319E0u;
label_2319e0:
    // 0x2319e0: 0xc06ae18  jal         func_1AB860
label_2319e4:
    if (ctx->pc == 0x2319E4u) {
        ctx->pc = 0x2319E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319E0u;
        // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2319E8u;
        goto label_2319e8;
    }
    ctx->pc = 0x2319E0u;
    SET_GPR_U32(ctx, 31, 0x2319E8u);
    ctx->pc = 0x2319E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319E0u;
    // 0x2319e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB860u, 0x2319E0u, 0x2319E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319E8u;
label_2319e8:
    // 0x2319e8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2319ec:
    // 0x2319ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2319f0:
    // 0x2319f0: 0x8c4204f0  lw          $v0, 0x4F0($v0)
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1264)));
label_2319f4:
    // 0x2319f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2319f8:
    if (ctx->pc == 0x2319F8u) {
        ctx->pc = 0x2319FCu;
        goto label_2319fc;
    }
    ctx->pc = 0x2319F4u;
    {
        const bool branch_taken_0x2319f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319f4) {
            ctx->pc = 0x231A10u;
            goto label_231a10;
        }
    }
    ctx->pc = 0x2319FCu;
label_2319fc:
    // 0x2319fc: 0x40f809  jalr        $v0
label_231a00:
    if (ctx->pc == 0x231A00u) {
        ctx->pc = 0x231A04u;
        goto label_231a04;
    }
    ctx->pc = 0x2319FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319FCu, 0x231A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231A04u;
label_231a04:
    // 0x231a04: 0x10000005  b           . + 4 + (0x5 << 2)
label_231a08:
    if (ctx->pc == 0x231A08u) {
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231A0Cu;
        goto label_231a0c;
    }
    ctx->pc = 0x231A04u;
    {
        const bool branch_taken_0x231a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A04u;
        // 0x231a08: 0xaf8082d0  sw          $zero, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a04) {
            ctx->pc = 0x231A1Cu;
            return;
        }
    }
    ctx->pc = 0x231A0Cu;
label_231a0c:
    // 0x231a0c: 0x0  nop
    ctx->pc = 0x231a0cu;
    // NOP
label_231a10:
    // 0x231a10: 0xc08e660  jal         func_239980
label_231a14:
    if (ctx->pc == 0x231A14u) {
        ctx->pc = 0x231A18u;
        goto label_231a18;
    }
    ctx->pc = 0x231A10u;
    SET_GPR_U32(ctx, 31, 0x231A18u);
    ctx->pc = 0x239980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239980u, 0x231A10u, 0x231A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A18u;
label_231a18:
    // 0x231a18: 0xaf8082d0  sw          $zero, -0x7D30($gp)
    ctx->pc = 0x231a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 0));
    ctx->pc = 0x231a1cu;
}
