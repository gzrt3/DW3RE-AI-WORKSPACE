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

// Function: FUN_001c3980
// Address: 0x1c3980 - 0x1c3a90
void FUN_001c3980_0x1c3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c3980_0x1c3980");
#endif

    switch (ctx->pc) {
        case 0x1c39acu: goto label_1c39ac;
        case 0x1c39b8u: goto label_1c39b8;
        case 0x1c39c4u: goto label_1c39c4;
        case 0x1c39ecu: goto label_1c39ec;
        case 0x1c3a10u: goto label_1c3a10;
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a2cu: goto label_1c3a2c;
        case 0x1c3a38u: goto label_1c3a38;
        case 0x1c3a60u: goto label_1c3a60;
        case 0x1c3a80u: goto label_1c3a80;
        case 0x1c3a8cu: goto label_1c3a8c;
        default: break;
    }

    ctx->pc = 0x1c3980u;

    // 0x1c3980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3984: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c398c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3990: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x1c3990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c3994: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C3994u;
    {
        const bool branch_taken_0x1c3994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3994) {
            ctx->pc = 0x1C3A8Cu;
            goto label_1c3a8c;
        }
    }
    ctx->pc = 0x1C399Cu;
    // 0x1c399c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C399Cu;
    {
        const bool branch_taken_0x1c399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c399c) {
            ctx->pc = 0x1C3A18u;
            goto label_1c3a18;
        }
    }
    ctx->pc = 0x1C39A4u;
    // 0x1c39a4: 0xc041738  jal         func_105CE0
    ctx->pc = 0x1C39A4u;
    SET_GPR_U32(ctx, 31, 0x1C39ACu);
    ctx->pc = 0x1C39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39A4u;
    // 0x1c39a8: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C39A4u, 0x1C39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39ACu;
label_1c39ac:
    // 0x1c39ac: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c39b0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C39B0u;
    SET_GPR_U32(ctx, 31, 0x1C39B8u);
    ctx->pc = 0x1C39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39B0u;
    // 0x1c39b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C39B0u, 0x1C39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39B8u;
label_1c39b8:
    // 0x1c39b8: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1c39b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    // 0x1c39bc: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x1C39BCu;
    SET_GPR_U32(ctx, 31, 0x1C39C4u);
    ctx->pc = 0x1C39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39BCu;
    // 0x1c39c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C39BCu, 0x1C39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C4u;
label_1c39c4:
    // 0x1c39c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c39c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c39cc: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c39ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c39d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1c39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1c39d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C39D4u;
    {
        const bool branch_taken_0x1c39d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39d4) {
            ctx->pc = 0x1C39ECu;
            goto label_1c39ec;
        }
    }
    ctx->pc = 0x1C39DCu;
    // 0x1c39dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c39e4: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C39E4u;
    SET_GPR_U32(ctx, 31, 0x1C39ECu);
    ctx->pc = 0x1C39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39E4u;
    // 0x1c39e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C39E4u, 0x1C39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39ECu;
label_1c39ec:
    // 0x1c39ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c39f0: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c39f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c39f4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1c39f8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F8u;
        // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A84u;
            goto label_1c3a84;
        }
    }
    ctx->pc = 0x1C3A00u;
    // 0x1c3a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a04: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3a08: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A08u;
    SET_GPR_U32(ctx, 31, 0x1C3A10u);
    ctx->pc = 0x1C3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A08u;
    // 0x1c3a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A08u, 0x1C3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3A10u;
    {
        const bool branch_taken_0x1c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a10) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A18u;
label_1c3a18:
    // 0x1c3a18: 0xc041738  jal         func_105CE0
    ctx->pc = 0x1C3A18u;
    SET_GPR_U32(ctx, 31, 0x1C3A20u);
    ctx->pc = 0x1C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A18u;
    // 0x1c3a1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C3A18u, 0x1C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A20u;
label_1c3a20:
    // 0x1c3a20: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c3a24: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1C3A24u;
    SET_GPR_U32(ctx, 31, 0x1C3A2Cu);
    ctx->pc = 0x1C3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A24u;
    // 0x1c3a28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1C3A24u, 0x1C3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A2Cu;
label_1c3a2c:
    // 0x1c3a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3a30: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x1C3A30u;
    SET_GPR_U32(ctx, 31, 0x1C3A38u);
    ctx->pc = 0x1C3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A30u;
    // 0x1c3a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C3A30u, 0x1C3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A38u;
label_1c3a38:
    // 0x1c3a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3a40: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c3a44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1c3a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3A48u;
    {
        const bool branch_taken_0x1c3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a48) {
            ctx->pc = 0x1C3A60u;
            goto label_1c3a60;
        }
    }
    ctx->pc = 0x1C3A50u;
    // 0x1c3a50: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c3a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a58: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A58u;
    SET_GPR_U32(ctx, 31, 0x1C3A60u);
    ctx->pc = 0x1C3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A58u;
    // 0x1c3a5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A58u, 0x1C3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A60u;
label_1c3a60:
    // 0x1c3a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3a64: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c3a68: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1c3a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A6Cu;
    {
        const bool branch_taken_0x1c3a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A6Cu;
        // 0x1c3a70: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a6c) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A74u;
    // 0x1c3a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a78: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A78u;
    SET_GPR_U32(ctx, 31, 0x1C3A80u);
    ctx->pc = 0x1C3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A78u;
    // 0x1c3a7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A78u, 0x1C3A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A80u;
label_1c3a80:
    // 0x1c3a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a84:
    // 0x1c3a84: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1C3A84u;
    SET_GPR_U32(ctx, 31, 0x1C3A8Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1C3A84u, 0x1C3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A8Cu;
label_1c3a8c:
    // 0x1c3a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c3a90u;
}
