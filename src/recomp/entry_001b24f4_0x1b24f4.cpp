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

// Function: entry_001b24f4
// Address: 0x1b24f4 - 0x1b2598
void entry_001b24f4_0x1b24f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b24f4_0x1b24f4");
#endif

    switch (ctx->pc) {
        case 0x1b2518u: goto label_1b2518;
        case 0x1b2534u: goto label_1b2534;
        case 0x1b2548u: goto label_1b2548;
        case 0x1b2574u: goto label_1b2574;
        case 0x1b2594u: goto label_1b2594;
        default: break;
    }

    ctx->pc = 0x1b24f4u;

    // 0x1b24f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b24f8: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b24fc: 0xac5462b0  sw          $s4, 0x62B0($v0)
    ctx->pc = 0x1b24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 20));
    // 0x1b2500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2504: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1b2504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1b2508: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b250c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b2510: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B2510u;
    SET_GPR_U32(ctx, 31, 0x1B2518u);
    ctx->pc = 0x1B2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2510u;
    // 0x1b2514: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B2510u, 0x1B2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2518u;
label_1b2518:
    // 0x1b2518: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b251c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2520: 0x26106260  addiu       $s0, $s0, 0x6260
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25184));
    // 0x1b2524: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b2524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b252c: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B252Cu;
    SET_GPR_U32(ctx, 31, 0x1B2534u);
    ctx->pc = 0x1B2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B252Cu;
    // 0x1b2530: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B252Cu, 0x1B2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2534u;
label_1b2534:
    // 0x1b2534: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1b2538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b253c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1b2540: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x1B2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2540u;
    // 0x1b2544: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B2540u, 0x1B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b254c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2550: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b2550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2554: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2558: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b255c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b2560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2564: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b2568: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b256c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B256Cu;
    // 0x1b2570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B256Cu, 0x1B2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2578: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2578u;
        // 0x1b257c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B258Cu;
            goto label_1b258c;
        }
    }
    ctx->pc = 0x1B2580u;
    // 0x1b2580: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b2584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2584u;
    {
        const bool branch_taken_0x1b2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2584u;
        // 0x1b2588: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2584) {
            ctx->pc = 0x1B2594u;
            goto label_1b2594;
        }
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B258Cu;
    SET_GPR_U32(ctx, 31, 0x1B2594u);
    ctx->pc = 0x1B2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B258Cu;
    // 0x1b2590: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B258Cu, 0x1B2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2594u;
label_1b2594:
    // 0x1b2594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2598u;
}
