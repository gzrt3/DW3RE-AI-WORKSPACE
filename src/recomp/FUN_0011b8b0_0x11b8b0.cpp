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

// Function: FUN_0011b8b0
// Address: 0x11b8b0 - 0x11b934
void FUN_0011b8b0_0x11b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b8b0_0x11b8b0");
#endif

    switch (ctx->pc) {
        case 0x11b8d4u: goto label_11b8d4;
        case 0x11b8ecu: goto label_11b8ec;
        case 0x11b918u: goto label_11b918;
        case 0x11b924u: goto label_11b924;
        case 0x11b930u: goto label_11b930;
        default: break;
    }

    ctx->pc = 0x11b8b0u;

    // 0x11b8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b8b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b8bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b8c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8c4: 0x620001a  bltz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B8C4u;
    {
        const bool branch_taken_0x11b8c4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C4u;
        // 0x11b8c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c4) {
            ctx->pc = 0x11B930u;
            goto label_11b930;
        }
    }
    ctx->pc = 0x11B8CCu;
    // 0x11b8cc: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B8CCu;
    SET_GPR_U32(ctx, 31, 0x11B8D4u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B8CCu, 0x11B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8D4u;
label_11b8d4:
    // 0x11b8d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b8dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B8DCu;
    {
        const bool branch_taken_0x11b8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8DCu;
        // 0x11b8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8dc) {
            ctx->pc = 0x11B8FCu;
            goto label_11b8fc;
        }
    }
    ctx->pc = 0x11B8E4u;
    // 0x11b8e4: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B8E4u;
    SET_GPR_U32(ctx, 31, 0x11B8ECu);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B8E4u, 0x11B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8ECu;
label_11b8ec:
    // 0x11b8ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b8f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b8f4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B8F4u;
    {
        const bool branch_taken_0x11b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8F4u;
        // 0x11b8f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f4) {
            ctx->pc = 0x11B91Cu;
            goto label_11b91c;
        }
    }
    ctx->pc = 0x11B8FCu;
label_11b8fc:
    // 0x11b8fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x11b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x11b900: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11b900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11b904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11b904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b90c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x11b90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11b910: 0xc049064  jal         func_124190
    ctx->pc = 0x11B910u;
    SET_GPR_U32(ctx, 31, 0x11B918u);
    ctx->pc = 0x11B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B910u;
    // 0x11b914: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11B910u, 0x11B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B918u;
label_11b918:
    // 0x11b918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b91c:
    // 0x11b91c: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11B91Cu;
    SET_GPR_U32(ctx, 31, 0x11B924u);
    ctx->pc = 0x11B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B91Cu;
    // 0x11b920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11B91Cu, 0x11B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B924u;
label_11b924:
    // 0x11b924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b928: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11B928u;
    SET_GPR_U32(ctx, 31, 0x11B930u);
    ctx->pc = 0x11B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B928u;
    // 0x11b92c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11B928u, 0x11B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B930u;
label_11b930:
    // 0x11b930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11b934u;
}
