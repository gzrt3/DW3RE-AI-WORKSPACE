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

// Function: entry_001c89d8
// Address: 0x1c89d8 - 0x1c8ab0
void entry_001c89d8_0x1c89d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c89d8_0x1c89d8");
#endif

    switch (ctx->pc) {
        case 0x1c89f4u: goto label_1c89f4;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a24u: goto label_1c8a24;
        case 0x1c8a38u: goto label_1c8a38;
        case 0x1c8a4cu: goto label_1c8a4c;
        default: break;
    }

    ctx->pc = 0x1c89d8u;

    // 0x1c89d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c89d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c89e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c89e8: 0x24080098  addiu       $t0, $zero, 0x98
    ctx->pc = 0x1c89e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1c89ec: 0xc0603d4  jal         func_180F50
    ctx->pc = 0x1C89ECu;
    SET_GPR_U32(ctx, 31, 0x1C89F4u);
    ctx->pc = 0x1C89F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89ECu;
    // 0x1c89f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C89ECu, 0x1C89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89F4u;
label_1c89f4:
    // 0x1c89f4: 0xff8289e8  sd          $v0, -0x7618($gp)
    ctx->pc = 0x1c89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U64(ctx, 2));
    // 0x1c89f8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1C89F8u;
    SET_GPR_U32(ctx, 31, 0x1C8A00u);
    ctx->pc = 0x1C89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89F8u;
    // 0x1c89fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1C89F8u, 0x1C8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A00u;
label_1c8a00:
    // 0x1c8a00: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8a04: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1c8a08: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1C8A08u;
    SET_GPR_U32(ctx, 31, 0x1C8A10u);
    ctx->pc = 0x1C8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A08u;
    // 0x1c8a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A08u, 0x1C8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0xff8289e0  sd          $v0, -0x7620($gp)
    ctx->pc = 0x1c8a10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U64(ctx, 2));
    // 0x1c8a14: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8a18: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x1c8a1c: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1C8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A24u);
    ctx->pc = 0x1C8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A1Cu;
    // 0x1c8a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A1Cu, 0x1C8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A24u;
label_1c8a24:
    // 0x1c8a24: 0xff8289d8  sd          $v0, -0x7628($gp)
    ctx->pc = 0x1c8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U64(ctx, 2));
    // 0x1c8a28: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8a2c: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1c8a30: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1C8A30u;
    SET_GPR_U32(ctx, 31, 0x1C8A38u);
    ctx->pc = 0x1C8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A30u;
    // 0x1c8a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A30u, 0x1C8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A38u;
label_1c8a38:
    // 0x1c8a38: 0xff8289d0  sd          $v0, -0x7630($gp)
    ctx->pc = 0x1c8a38u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U64(ctx, 2));
    // 0x1c8a3c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8a40: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1c8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1c8a44: 0xc060578  jal         func_1815E0
    ctx->pc = 0x1C8A44u;
    SET_GPR_U32(ctx, 31, 0x1C8A4Cu);
    ctx->pc = 0x1C8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A44u;
    // 0x1c8a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C8A44u, 0x1C8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8a50: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a54: 0xa0234a98  sb          $v1, 0x4A98($at)
    ctx->pc = 0x1c8a54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x474A98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A98u, _value); } while (0);
    // 0x1c8a58: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8a5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a60: 0xff8289c8  sd          $v0, -0x7638($gp)
    ctx->pc = 0x1c8a60u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U64(ctx, 2));
    // 0x1c8a64: 0xa0234a99  sb          $v1, 0x4A99($at)
    ctx->pc = 0x1c8a64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x474A99u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A99u, _value); } while (0);
    // 0x1c8a68: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a6c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c8a70: 0xa0244a9a  sb          $a0, 0x4A9A($at)
    ctx->pc = 0x1c8a70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x474A9Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Au, _value); } while (0);
    // 0x1c8a74: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a78: 0xa0244a9b  sb          $a0, 0x4A9B($at)
    ctx->pc = 0x1c8a78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x474A9Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Bu, _value); } while (0);
    // 0x1c8a7c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a80: 0xa0234a9c  sb          $v1, 0x4A9C($at)
    ctx->pc = 0x1c8a80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x474A9Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Cu, _value); } while (0);
    // 0x1c8a84: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a88: 0xa0234a9d  sb          $v1, 0x4A9D($at)
    ctx->pc = 0x1c8a88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x474A9Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Du, _value); } while (0);
    // 0x1c8a8c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a90: 0xa0244a9e  sb          $a0, 0x4A9E($at)
    ctx->pc = 0x1c8a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x474A9Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Eu, _value); } while (0);
    // 0x1c8a94: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x1c8a98: 0xa0244a9f  sb          $a0, 0x4A9F($at)
    ctx->pc = 0x1c8a98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x474A9Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x474A9Fu, _value); } while (0);
    // 0x1c8a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA8u;
        // 0x1c8aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8AB0u;
}
