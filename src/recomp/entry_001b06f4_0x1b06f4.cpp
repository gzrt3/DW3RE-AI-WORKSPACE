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

// Function: entry_001b06f4
// Address: 0x1b06f4 - 0x1b0758
void entry_001b06f4_0x1b06f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b06f4_0x1b06f4");
#endif

    switch (ctx->pc) {
        case 0x1b0724u: goto label_1b0724;
        case 0x1b0738u: goto label_1b0738;
        case 0x1b0754u: goto label_1b0754;
        default: break;
    }

    ctx->pc = 0x1b06f4u;

    // 0x1b06f4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b06f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b06f8: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x1b06fc: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    // 0x1b0700: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b070c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b070cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0714: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0718: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b071c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B071Cu;
    SET_GPR_U32(ctx, 31, 0x1B0724u);
    ctx->pc = 0x1B0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B071Cu;
    // 0x1b0720: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B071Cu, 0x1B0724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0724u;
    {
        const bool branch_taken_0x1b0724 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0724u;
        // 0x1b0728: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0724) {
            ctx->pc = 0x1B0740u;
            goto label_1b0740;
        }
    }
    ctx->pc = 0x1B072Cu;
    // 0x1b072c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0730: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0730u;
    SET_GPR_U32(ctx, 31, 0x1B0738u);
    ctx->pc = 0x1B0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0730u;
    // 0x1b0734: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0730u, 0x1B0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0738u;
label_1b0738:
    // 0x1b0738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0738u;
    {
        const bool branch_taken_0x1b0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0738u;
        // 0x1b073c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0738) {
            ctx->pc = 0x1B0758u;
            return;
        }
    }
    ctx->pc = 0x1B0740u;
label_1b0740:
    // 0x1b0740: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0744: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b0748: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
    // 0x1b074c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B074Cu;
    SET_GPR_U32(ctx, 31, 0x1B0754u);
    ctx->pc = 0x1B0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B074Cu;
    // 0x1b0750: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B074Cu, 0x1B0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0754u;
label_1b0754:
    // 0x1b0754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0758u;
}
