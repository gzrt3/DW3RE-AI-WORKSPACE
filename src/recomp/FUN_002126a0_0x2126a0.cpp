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

// Function: FUN_002126a0
// Address: 0x2126a0 - 0x2127a8
void FUN_002126a0_0x2126a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002126a0_0x2126a0");
#endif

    ctx->pc = 0x2126a0u;

    // 0x2126a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2126a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2126a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2126a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2126a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2126ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2126b0: 0x90254999  lbu         $a1, 0x4999($at)
    ctx->pc = 0x2126b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334999u));
    // 0x2126b4: 0x3448869f  ori         $t0, $v0, 0x869F
    ctx->pc = 0x2126b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x2126b8: 0x8386863c  lb          $a2, -0x79C4($gp)
    ctx->pc = 0x2126b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x2126bc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2126c0: 0x8024caec  lb          $a0, -0x3514($at)
    ctx->pc = 0x2126c0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x29CAECu));
    // 0x2126c4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2126c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x2126c8: 0x8023caf0  lb          $v1, -0x3510($at)
    ctx->pc = 0x2126c8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x29CAF0u));
    // 0x2126cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2126d0: 0x90274af1  lbu         $a3, 0x4AF1($at)
    ctx->pc = 0x2126d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x334AF1u));
    // 0x2126d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2126d8: 0x80224970  lb          $v0, 0x4970($at)
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x334970u));
    // 0x2126dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2126e0: 0xa0267700  sb          $a2, 0x7700($at)
    ctx->pc = 0x2126e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587700u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587700u, _value); } while (0);
    // 0x2126e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2126e8: 0xa0257701  sb          $a1, 0x7701($at)
    ctx->pc = 0x2126e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587701u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587701u, _value); } while (0);
    // 0x2126ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2126f0: 0xa0247702  sb          $a0, 0x7702($at)
    ctx->pc = 0x2126f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x587702u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587702u, _value); } while (0);
    // 0x2126f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2126f8: 0xa0237703  sb          $v1, 0x7703($at)
    ctx->pc = 0x2126f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587703u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587703u, _value); } while (0);
    // 0x2126fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212700: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x212700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x212704: 0x8c254954  lw          $a1, 0x4954($at)
    ctx->pc = 0x212704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18772)));
    // 0x212708: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x212708u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x21270c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212710: 0xa0227560  sb          $v0, 0x7560($at)
    ctx->pc = 0x212710u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x587560u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587560u, _value); } while (0);
    // 0x212714: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x212714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x212718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21271c: 0xa0227561  sb          $v0, 0x7561($at)
    ctx->pc = 0x21271cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x587561u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x587561u, _value); } while (0);
    // 0x212720: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212724: 0x8c244958  lw          $a0, 0x4958($at)
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334958u));
    // 0x212728: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21272c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x212730: 0x8c23495c  lw          $v1, 0x495C($at)
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33495Cu));
    // 0x212734: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21273c: 0x8c224960  lw          $v0, 0x4960($at)
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334960u));
    // 0x212740: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212744: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x212748: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x212748u;
    {
        const bool branch_taken_0x212748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x212748) {
            ctx->pc = 0x212754u;
            goto label_212754;
        }
    }
    ctx->pc = 0x212750u;
    // 0x212750: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_212754:
    // 0x212754: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x212758: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x21275c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x212760: 0x24427568  addiu       $v0, $v0, 0x7568
    ctx->pc = 0x212760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30056));
    // 0x212764: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x212764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x212768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21276c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x21276cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x212770: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x212774: 0x8c284900  lw          $t0, 0x4900($at)
    ctx->pc = 0x212774u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x334900u));
    // 0x212778: 0x24427590  addiu       $v0, $v0, 0x7590
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30096));
    // 0x21277c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x212780: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x212784: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x212788: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x212788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21278c: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x21278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
    // 0x212790: 0x24a54930  addiu       $a1, $a1, 0x4930
    ctx->pc = 0x212790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18736));
    // 0x212794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212798: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21279c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2127a0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2127A0u;
    SET_GPR_U32(ctx, 31, 0x2127A8u);
    ctx->pc = 0x2127A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127A0u;
    // 0x2127a4: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2127A0u, 0x2127A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127A8u;
}
