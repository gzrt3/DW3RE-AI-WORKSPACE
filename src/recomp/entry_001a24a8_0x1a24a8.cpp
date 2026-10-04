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

// Function: entry_001a24a8
// Address: 0x1a24a8 - 0x1a2534
void entry_001a24a8_0x1a24a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a24a8_0x1a24a8");
#endif

    switch (ctx->pc) {
        case 0x1a24bcu: goto label_1a24bc;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24fcu: goto label_1a24fc;
        case 0x1a2508u: goto label_1a2508;
        case 0x1a251cu: goto label_1a251c;
        case 0x1a2528u: goto label_1a2528;
        default: break;
    }

    ctx->pc = 0x1a24a8u;

    // 0x1a24a8: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1A24A8u;
    {
        const bool branch_taken_0x1a24a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24A8u;
        // 0x1a24ac: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24a8) {
            ctx->pc = 0x1A25C0u;
            return;
        }
    }
    ctx->pc = 0x1A24B0u;
    // 0x1a24b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24b4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24B4u;
    SET_GPR_U32(ctx, 31, 0x1A24BCu);
    ctx->pc = 0x1A24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24B4u;
    // 0x1a24b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24B4u, 0x1A24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24BCu;
label_1a24bc:
    // 0x1a24bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a24bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24C4u;
    SET_GPR_U32(ctx, 31, 0x1A24CCu);
    ctx->pc = 0x1A24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24C4u;
    // 0x1a24c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24C4u, 0x1A24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24CCu;
label_1a24cc:
    // 0x1a24cc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a24ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24D4u;
    SET_GPR_U32(ctx, 31, 0x1A24DCu);
    ctx->pc = 0x1A24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24D4u;
    // 0x1a24d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24D4u, 0x1A24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24DCu;
label_1a24dc:
    // 0x1a24dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a24dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24e4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24E4u;
    SET_GPR_U32(ctx, 31, 0x1A24ECu);
    ctx->pc = 0x1A24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E4u;
    // 0x1a24e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24E4u, 0x1A24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24ECu;
label_1a24ec:
    // 0x1a24ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a24ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24f4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24F4u;
    SET_GPR_U32(ctx, 31, 0x1A24FCu);
    ctx->pc = 0x1A24F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24F4u;
    // 0x1a24f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24F4u, 0x1A24FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24FCu;
label_1a24fc:
    // 0x1a24fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2500: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2500u;
    SET_GPR_U32(ctx, 31, 0x1A2508u);
    ctx->pc = 0x1A2504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2500u;
    // 0x1a2504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2500u, 0x1A2508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2508u;
label_1a2508:
    // 0x1a2508: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2508u;
    {
        const bool branch_taken_0x1a2508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2508u;
        // 0x1a250c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2508) {
            ctx->pc = 0x1A2534u;
            return;
        }
    }
    ctx->pc = 0x1A2510u;
    // 0x1a2510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2514: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2514u;
    SET_GPR_U32(ctx, 31, 0x1A251Cu);
    ctx->pc = 0x1A2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2514u;
    // 0x1a2518: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2514u, 0x1A251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A251Cu;
label_1a251c:
    // 0x1a251c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2520: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2520u;
    SET_GPR_U32(ctx, 31, 0x1A2528u);
    ctx->pc = 0x1A2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2520u;
    // 0x1a2524: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2520u, 0x1A2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2528u;
label_1a2528:
    // 0x1a2528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a252c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A252Cu;
    SET_GPR_U32(ctx, 31, 0x1A2534u);
    ctx->pc = 0x1A2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A252Cu;
    // 0x1a2530: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A252Cu, 0x1A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2534u;
}
