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

// Function: entry_001b2708
// Address: 0x1b2708 - 0x1b2778
void entry_001b2708_0x1b2708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2708_0x1b2708");
#endif

    switch (ctx->pc) {
        case 0x1b2724u: goto label_1b2724;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2774u: goto label_1b2774;
        default: break;
    }

    ctx->pc = 0x1b2708u;

    // 0x1b2708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b270c: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b2710: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
    // 0x1b2714: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b2714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b2718: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b271c: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B271Cu;
    SET_GPR_U32(ctx, 31, 0x1B2724u);
    ctx->pc = 0x1B2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B271Cu;
    // 0x1b2720: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B271Cu, 0x1B2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2724u;
label_1b2724:
    // 0x1b2724: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1b2724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2728: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b272c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b272cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2734: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2738: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b273c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2744: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b2748: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b274c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B274Cu;
    SET_GPR_U32(ctx, 31, 0x1B2754u);
    ctx->pc = 0x1B2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B274Cu;
    // 0x1b2750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B274Cu, 0x1B2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2754u;
label_1b2754:
    // 0x1b2754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2758: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2758u;
    {
        const bool branch_taken_0x1b2758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2758u;
        // 0x1b275c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2758) {
            ctx->pc = 0x1B276Cu;
            goto label_1b276c;
        }
    }
    ctx->pc = 0x1B2760u;
    // 0x1b2760: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b2764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2764u;
        // 0x1b2768: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B276Cu;
label_1b276c:
    // 0x1b276c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B276Cu;
    SET_GPR_U32(ctx, 31, 0x1B2774u);
    ctx->pc = 0x1B2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B276Cu;
    // 0x1b2770: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B276Cu, 0x1B2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2774u;
label_1b2774:
    // 0x1b2774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2778u;
}
