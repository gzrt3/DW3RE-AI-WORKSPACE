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

// Function: FUN_0011b9f0
// Address: 0x11b9f0 - 0x11ba74
void FUN_0011b9f0_0x11b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b9f0_0x11b9f0");
#endif

    switch (ctx->pc) {
        case 0x11ba14u: goto label_11ba14;
        case 0x11ba2cu: goto label_11ba2c;
        case 0x11ba58u: goto label_11ba58;
        case 0x11ba64u: goto label_11ba64;
        case 0x11ba70u: goto label_11ba70;
        default: break;
    }

    ctx->pc = 0x11b9f0u;

    // 0x11b9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ba00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba04: 0x620001a  bltz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11BA04u;
    {
        const bool branch_taken_0x11ba04 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA04u;
        // 0x11ba08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba04) {
            ctx->pc = 0x11BA70u;
            goto label_11ba70;
        }
    }
    ctx->pc = 0x11BA0Cu;
    // 0x11ba0c: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11BA0Cu;
    SET_GPR_U32(ctx, 31, 0x11BA14u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11BA0Cu, 0x11BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA14u;
label_11ba14:
    // 0x11ba14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11ba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ba18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ba1c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BA1Cu;
    {
        const bool branch_taken_0x11ba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA1Cu;
        // 0x11ba20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba1c) {
            ctx->pc = 0x11BA3Cu;
            goto label_11ba3c;
        }
    }
    ctx->pc = 0x11BA24u;
    // 0x11ba24: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11BA24u;
    SET_GPR_U32(ctx, 31, 0x11BA2Cu);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11BA24u, 0x11BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA2Cu;
label_11ba2c:
    // 0x11ba2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11ba2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ba30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ba34: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BA34u;
    {
        const bool branch_taken_0x11ba34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA34u;
        // 0x11ba38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba34) {
            ctx->pc = 0x11BA5Cu;
            goto label_11ba5c;
        }
    }
    ctx->pc = 0x11BA3Cu;
label_11ba3c:
    // 0x11ba3c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x11ba40: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11ba44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ba44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ba48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba4c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x11ba50: 0xc049064  jal         func_124190
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA50u;
    // 0x11ba54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11BA50u, 0x11BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA58u;
label_11ba58:
    // 0x11ba58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ba58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ba5c:
    // 0x11ba5c: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11BA5Cu;
    SET_GPR_U32(ctx, 31, 0x11BA64u);
    ctx->pc = 0x11BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA5Cu;
    // 0x11ba60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11BA5Cu, 0x11BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA64u;
label_11ba64:
    // 0x11ba64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ba64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba68: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11BA68u;
    SET_GPR_U32(ctx, 31, 0x11BA70u);
    ctx->pc = 0x11BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA68u;
    // 0x11ba6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11BA68u, 0x11BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA70u;
label_11ba70:
    // 0x11ba70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11ba74u;
}
