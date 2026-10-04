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

// Function: FUN_0019bcd0
// Address: 0x19bcd0 - 0x19bd88
void FUN_0019bcd0_0x19bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bcd0_0x19bcd0");
#endif

    switch (ctx->pc) {
        case 0x19bd08u: goto label_19bd08;
        case 0x19bd14u: goto label_19bd14;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd30u: goto label_19bd30;
        case 0x19bd40u: goto label_19bd40;
        case 0x19bd4cu: goto label_19bd4c;
        case 0x19bd74u: goto label_19bd74;
        default: break;
    }

    ctx->pc = 0x19bcd0u;

    // 0x19bcd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19bcd4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x19bcd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19bcd8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19bcdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19bcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19bce0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19bce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bce8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19bcec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19bcf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19bcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bcf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19bcfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19bd00: 0xc066e14  jal         func_19B850
    ctx->pc = 0x19BD00u;
    SET_GPR_U32(ctx, 31, 0x19BD08u);
    ctx->pc = 0x19BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD00u;
    // 0x19bd04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x19BD00u, 0x19BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD08u;
label_19bd08:
    // 0x19bd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd0c: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x19BD0Cu;
    SET_GPR_U32(ctx, 31, 0x19BD14u);
    ctx->pc = 0x19BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD0Cu;
    // 0x19bd10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD0Cu, 0x19BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD14u;
label_19bd14:
    // 0x19bd14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bd18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19bd1c: 0xc066e14  jal         func_19B850
    ctx->pc = 0x19BD1Cu;
    SET_GPR_U32(ctx, 31, 0x19BD24u);
    ctx->pc = 0x19BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD1Cu;
    // 0x19bd20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x19BD1Cu, 0x19BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19bd28: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x19BD28u;
    SET_GPR_U32(ctx, 31, 0x19BD30u);
    ctx->pc = 0x19BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD28u;
    // 0x19bd2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD28u, 0x19BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD30u;
label_19bd30:
    // 0x19bd30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19bd34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19bd38: 0xc066e14  jal         func_19B850
    ctx->pc = 0x19BD38u;
    SET_GPR_U32(ctx, 31, 0x19BD40u);
    ctx->pc = 0x19BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD38u;
    // 0x19bd3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x19BD38u, 0x19BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD40u;
label_19bd40:
    // 0x19bd40: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19bd44: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x19BD44u;
    SET_GPR_U32(ctx, 31, 0x19BD4Cu);
    ctx->pc = 0x19BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD44u;
    // 0x19bd48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BD44u, 0x19BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD4Cu;
label_19bd4c:
    // 0x19bd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19bd58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bd5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd60: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x19bd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x19bd64: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x19bd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x19bd68: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x19bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x19bd6c: 0xc066dba  jal         func_19B6E8
    ctx->pc = 0x19BD6Cu;
    SET_GPR_U32(ctx, 31, 0x19BD74u);
    ctx->pc = 0x19BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD6Cu;
    // 0x19bd70: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6E8u, 0x19BD6Cu, 0x19BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD74u;
label_19bd74:
    // 0x19bd74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19bd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19bd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bd7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bd80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19bd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bd84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x19bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x19bd88u;
}
