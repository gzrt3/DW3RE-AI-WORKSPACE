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

// Function: FUN_0011b950
// Address: 0x11b950 - 0x11b9d4
void FUN_0011b950_0x11b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b950_0x11b950");
#endif

    switch (ctx->pc) {
        case 0x11b974u: goto label_11b974;
        case 0x11b98cu: goto label_11b98c;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9d0u: goto label_11b9d0;
        default: break;
    }

    ctx->pc = 0x11b950u;

    // 0x11b950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b964: 0x620001a  bltz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B964u;
    {
        const bool branch_taken_0x11b964 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B964u;
        // 0x11b968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b964) {
            ctx->pc = 0x11B9D0u;
            goto label_11b9d0;
        }
    }
    ctx->pc = 0x11B96Cu;
    // 0x11b96c: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B96Cu;
    SET_GPR_U32(ctx, 31, 0x11B974u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B96Cu, 0x11B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B974u;
label_11b974:
    // 0x11b974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b97c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B97Cu;
        // 0x11b980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11B99Cu;
            goto label_11b99c;
        }
    }
    ctx->pc = 0x11B984u;
    // 0x11b984: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11B984u;
    SET_GPR_U32(ctx, 31, 0x11B98Cu);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11B984u, 0x11B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B98Cu;
label_11b98c:
    // 0x11b98c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11b98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b994: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B994u;
    {
        const bool branch_taken_0x11b994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B994u;
        // 0x11b998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b994) {
            ctx->pc = 0x11B9BCu;
            goto label_11b9bc;
        }
    }
    ctx->pc = 0x11B99Cu;
label_11b99c:
    // 0x11b99c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x11b9a0: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11b9a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11b9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9ac: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11b9b0: 0xc049064  jal         func_124190
    ctx->pc = 0x11B9B0u;
    SET_GPR_U32(ctx, 31, 0x11B9B8u);
    ctx->pc = 0x11B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9B0u;
    // 0x11b9b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11B9B0u, 0x11B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B8u;
label_11b9b8:
    // 0x11b9b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b9bc:
    // 0x11b9bc: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11B9BCu;
    SET_GPR_U32(ctx, 31, 0x11B9C4u);
    ctx->pc = 0x11B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9BCu;
    // 0x11b9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11B9BCu, 0x11B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9c8: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11B9C8u;
    SET_GPR_U32(ctx, 31, 0x11B9D0u);
    ctx->pc = 0x11B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9C8u;
    // 0x11b9cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11B9C8u, 0x11B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9D0u;
label_11b9d0:
    // 0x11b9d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11b9d4u;
}
