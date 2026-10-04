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

// Function: FUN_0010fa60
// Address: 0x10fa60 - 0x10fb00
void FUN_0010fa60_0x10fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fa60_0x10fa60");
#endif

    switch (ctx->pc) {
        case 0x10fab4u: goto label_10fab4;
        default: break;
    }

    ctx->pc = 0x10fa60u;

    // 0x10fa60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa64: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x10fa64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x10fa68: 0xa4204ae6  sh          $zero, 0x4AE6($at)
    ctx->pc = 0x10fa68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AE6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE6u, _value); } while (0);
    // 0x10fa6c: 0x24c6d4c0  addiu       $a2, $a2, -0x2B40
    ctx->pc = 0x10fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956224));
    // 0x10fa70: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fa74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa78: 0xa4204ae8  sh          $zero, 0x4AE8($at)
    ctx->pc = 0x10fa78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AE8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE8u, _value); } while (0);
    // 0x10fa7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa80: 0xa4204aea  sh          $zero, 0x4AEA($at)
    ctx->pc = 0x10fa80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AEAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AEAu, _value); } while (0);
    // 0x10fa84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa88: 0xa4204ae0  sh          $zero, 0x4AE0($at)
    ctx->pc = 0x10fa88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE0u, _value); } while (0);
    // 0x10fa8c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa90: 0xa4204ae2  sh          $zero, 0x4AE2($at)
    ctx->pc = 0x10fa90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AE2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE2u, _value); } while (0);
    // 0x10fa94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fa98: 0xa4204ae4  sh          $zero, 0x4AE4($at)
    ctx->pc = 0x10fa98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AE4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE4u, _value); } while (0);
    // 0x10fa9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10faa0: 0xa4204aec  sh          $zero, 0x4AEC($at)
    ctx->pc = 0x10faa0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AECu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AECu, _value); } while (0);
    // 0x10faa4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10faa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10faa8: 0xa4204aee  sh          $zero, 0x4AEE($at)
    ctx->pc = 0x10faa8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AEEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AEEu, _value); } while (0);
    // 0x10faac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x10faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10fab0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x10fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_10fab4:
    // 0x10fab4: 0x90c30017  lbu         $v1, 0x17($a2)
    ctx->pc = 0x10fab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 23)));
    // 0x10fab8: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FAB8u;
    {
        const bool branch_taken_0x10fab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x10FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB8u;
        // 0x10fabc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fab8) {
            ctx->pc = 0x10FAD4u;
            goto label_10fad4;
        }
    }
    ctx->pc = 0x10FAC0u;
    // 0x10fac0: 0x84234ae6  lh          $v1, 0x4AE6($at)
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19174)));
    // 0x10fac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fac8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10facc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10FACCu;
    {
        const bool branch_taken_0x10facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FACCu;
        // 0x10fad0: 0xa4234ae6  sh          $v1, 0x4AE6($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19174), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10facc) {
            ctx->pc = 0x10FAF0u;
            goto label_10faf0;
        }
    }
    ctx->pc = 0x10FAD4u;
label_10fad4:
    // 0x10fad4: 0x0  nop
    ctx->pc = 0x10fad4u;
    // NOP
    // 0x10fad8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAD8u;
    {
        const bool branch_taken_0x10fad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD8u;
        // 0x10fadc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fad8) {
            ctx->pc = 0x10FAF0u;
            goto label_10faf0;
        }
    }
    ctx->pc = 0x10FAE0u;
    // 0x10fae0: 0x84234ae0  lh          $v1, 0x4AE0($at)
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19168)));
    // 0x10fae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fae8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10faec: 0xa4234ae0  sh          $v1, 0x4AE0($at)
    ctx->pc = 0x10faecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AE0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AE0u, _value); } while (0);
label_10faf0:
    // 0x10faf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10faf4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x10faf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x10faf8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10FAF8u;
    {
        const bool branch_taken_0x10faf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF8u;
        // 0x10fafc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf8) {
            ctx->pc = 0x10FAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fab4;
        }
    }
    ctx->pc = 0x10FB00u;
}
