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

// Function: entry_00167ff4
// Address: 0x167ff4 - 0x168090
void entry_00167ff4_0x167ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167ff4_0x167ff4");
#endif

    switch (ctx->pc) {
        case 0x168038u: goto label_168038;
        case 0x16804cu: goto label_16804c;
        case 0x168058u: goto label_168058;
        case 0x168064u: goto label_168064;
        case 0x168074u: goto label_168074;
        default: break;
    }

    ctx->pc = 0x167ff4u;

    // 0x167ff4: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x167ff8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x167ffc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x167ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x168000: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x168004: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
    // 0x168008: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16800c: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
    // 0x168010: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x168014: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x168014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x168018: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x168018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x16801c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168020: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x168020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x168024: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x168024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x168028: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x168028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x16802c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x16802cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x168030: 0xc066e26  jal         func_19B898
    ctx->pc = 0x168030u;
    SET_GPR_U32(ctx, 31, 0x168038u);
    ctx->pc = 0x168034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168030u;
    // 0x168034: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x168030u, 0x168038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168038u;
label_168038:
    // 0x168038: 0xa6200050  sh          $zero, 0x50($s1)
    ctx->pc = 0x168038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x16803c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168040: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x168044: 0xc066e26  jal         func_19B898
    ctx->pc = 0x168044u;
    SET_GPR_U32(ctx, 31, 0x16804Cu);
    ctx->pc = 0x168048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168044u;
    // 0x168048: 0xa6200052  sh          $zero, 0x52($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x168044u, 0x16804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16804Cu;
label_16804c:
    // 0x16804c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x168050: 0xc066e26  jal         func_19B898
    ctx->pc = 0x168050u;
    SET_GPR_U32(ctx, 31, 0x168058u);
    ctx->pc = 0x168054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168050u;
    // 0x168054: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x168050u, 0x168058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168058u;
label_168058:
    // 0x168058: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x16805c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x16805Cu;
    SET_GPR_U32(ctx, 31, 0x168064u);
    ctx->pc = 0x168060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16805Cu;
    // 0x168060: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x16805Cu, 0x168064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168064u;
label_168064:
    // 0x168064: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x168064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x168068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16806c: 0xc05cf6c  jal         func_173DB0
    ctx->pc = 0x16806Cu;
    SET_GPR_U32(ctx, 31, 0x168074u);
    ctx->pc = 0x168070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16806Cu;
    // 0x168070: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DB0u, 0x16806Cu, 0x168074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168074u;
label_168074:
    // 0x168074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16807c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16807cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168080: 0x3e00008  jr          $ra
    ctx->pc = 0x168080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168080u;
        // 0x168084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168088u;
    // 0x168088: 0x0  nop
    ctx->pc = 0x168088u;
    // NOP
    // 0x16808c: 0x0  nop
    ctx->pc = 0x16808cu;
    // NOP
    ctx->pc = 0x168090u;
}
