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

// Function: FUN_00203e10
// Address: 0x203e10 - 0x203f50
void FUN_00203e10_0x203e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203e10_0x203e10");
#endif

    switch (ctx->pc) {
        case 0x203f00u: goto label_203f00;
        case 0x203f18u: goto label_203f18;
        case 0x203f28u: goto label_203f28;
        case 0x203f30u: goto label_203f30;
        default: break;
    }

    ctx->pc = 0x203e10u;

    // 0x203e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203e14: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x203e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203e1c: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x203e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x203e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x203e24: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
    // 0x203e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203e2c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e30: 0xac20f468  sw          $zero, -0xB98($at)
    ctx->pc = 0x203e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F468u, _value); } while (0);
    // 0x203e34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x203e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203e38: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e3c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x203e40: 0xac20f46c  sw          $zero, -0xB94($at)
    ctx->pc = 0x203e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F46Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F46Cu, _value); } while (0);
    // 0x203e44: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x203e48: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x203e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203e50: 0xac26f460  sw          $a2, -0xBA0($at)
    ctx->pc = 0x203e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x57F460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F460u, _value); } while (0);
    // 0x203e54: 0x2529f598  addiu       $t1, $t1, -0xA68
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964632));
    // 0x203e58: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e5c: 0x2508f630  addiu       $t0, $t0, -0x9D0
    ctx->pc = 0x203e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964784));
    // 0x203e60: 0xac23f464  sw          $v1, -0xB9C($at)
    ctx->pc = 0x203e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57F464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F464u, _value); } while (0);
    // 0x203e64: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e68: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x203e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x203e6c: 0xac20f470  sw          $zero, -0xB90($at)
    ctx->pc = 0x203e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F470u, _value); } while (0);
    // 0x203e70: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e74: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x203e78: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e7c: 0xa020f47c  sb          $zero, -0xB84($at)
    ctx->pc = 0x203e7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F47Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x57F47Cu, _value); } while (0);
    // 0x203e80: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x203e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x57F508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F508u, _value); } while (0);
    // 0x203e84: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203e88: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x203e88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57F500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F500u, _value); } while (0);
    // 0x203e8c: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x203e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x57F504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F504u, _value); } while (0);
    // 0x203e90: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x203e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F50Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F50Cu, _value); } while (0);
    // 0x203e94: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x203e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F510u, _value); } while (0);
    // 0x203e98: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x203e98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F514u, _value); } while (0);
    // 0x203e9c: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x203e9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x57F5A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F5A0u, _value); } while (0);
    // 0x203ea0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x203ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57F598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F598u, _value); } while (0);
    // 0x203ea4: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x203ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x57F59Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F59Cu, _value); } while (0);
    // 0x203ea8: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x203ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F5A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F5A4u, _value); } while (0);
    // 0x203eac: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x203eacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F5A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F5A8u, _value); } while (0);
    // 0x203eb0: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x203eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F5ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F5ACu, _value); } while (0);
    // 0x203eb4: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x203eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x57F638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F638u, _value); } while (0);
    // 0x203eb8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x203eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57F630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F630u, _value); } while (0);
    // 0x203ebc: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x203ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x57F634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F634u, _value); } while (0);
    // 0x203ec0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x203ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F63Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F63Cu, _value); } while (0);
    // 0x203ec4: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x203ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F640u, _value); } while (0);
    // 0x203ec8: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x203ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F644u, _value); } while (0);
    // 0x203ecc: 0xac24f450  sw          $a0, -0xBB0($at)
    ctx->pc = 0x203eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57F450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F450u, _value); } while (0);
    // 0x203ed0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203ed4: 0x8f8390f0  lw          $v1, -0x6F10($gp)
    ctx->pc = 0x203ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203ed8: 0xac20f440  sw          $zero, -0xBC0($at)
    ctx->pc = 0x203ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F440u, _value); } while (0);
    // 0x203edc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203ee0: 0xac20f454  sw          $zero, -0xBAC($at)
    ctx->pc = 0x203ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F454u, _value); } while (0);
    // 0x203ee4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203ee8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x203EE8u;
    {
        const bool branch_taken_0x203ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE8u;
        // 0x203eec: 0xac20f458  sw          $zero, -0xBA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee8) {
            ctx->pc = 0x203F04u;
            goto label_203f04;
        }
    }
    ctx->pc = 0x203EF0u;
    // 0x203ef0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x203ef4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x203ef8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x203EF8u;
    SET_GPR_U32(ctx, 31, 0x203F00u);
    ctx->pc = 0x203EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EF8u;
    // 0x203efc: 0x34455400  ori         $a1, $v0, 0x5400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x203EF8u, 0x203F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F00u;
label_203f00:
    // 0x203f00: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x203f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
label_203f04:
    // 0x203f04: 0x8f8390f0  lw          $v1, -0x6F10($gp)
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203f08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F1Cu;
            goto label_203f1c;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0xc070e28  jal         func_1C38A0
    ctx->pc = 0x203F10u;
    SET_GPR_U32(ctx, 31, 0x203F18u);
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x203F10u, 0x203F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F18u;
label_203f18:
    // 0x203f18: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x203f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
label_203f1c:
    // 0x203f1c: 0x8f9190f0  lw          $s1, -0x6F10($gp)
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F3Cu;
            goto label_203f3c;
        }
    }
    ctx->pc = 0x203F28u;
label_203f28:
    // 0x203f28: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x203F28u;
    SET_GPR_U32(ctx, 31, 0x203F30u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x203F28u, 0x203F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F30u;
label_203f30:
    // 0x203f30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x203f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x203f38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_203f3c:
    // 0x203f3c: 0x0  nop
    ctx->pc = 0x203f3cu;
    // NOP
    // 0x203f40: 0x2e035500  sltiu       $v1, $s0, 0x5500
    ctx->pc = 0x203f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21760) ? 1 : 0);
    // 0x203f44: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x203F44u;
    {
        const bool branch_taken_0x203f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f44) {
            ctx->pc = 0x203F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203f28;
        }
    }
    ctx->pc = 0x203F4Cu;
    // 0x203f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x203f50u;
}
