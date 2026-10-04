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

// Function: FUN_0015a690
// Address: 0x15a690 - 0x15a788
void FUN_0015a690_0x15a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a690_0x15a690");
#endif

    ctx->pc = 0x15a690u;

    // 0x15a690: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x15a694: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x15a698: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A698u;
    {
        const bool branch_taken_0x15a698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a698) {
            ctx->pc = 0x15A6B0u;
            goto label_15a6b0;
        }
    }
    ctx->pc = 0x15A6A0u;
    // 0x15a6a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a6a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15A6A8u;
    {
        const bool branch_taken_0x15a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6a8) {
            ctx->pc = 0x15A788u;
            return;
        }
    }
    ctx->pc = 0x15A6B0u;
label_15a6b0:
    // 0x15a6b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a6b4: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x15a6b8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15A6B8u;
    {
        const bool branch_taken_0x15a6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6B8u;
        // 0x15a6bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6b8) {
            ctx->pc = 0x15A738u;
            goto label_15a738;
        }
    }
    ctx->pc = 0x15A6C0u;
    // 0x15a6c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15a6c8: 0x90244af1  lbu         $a0, 0x4AF1($at)
    ctx->pc = 0x15a6c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334AF1u));
    // 0x15a6cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6d0: 0x8c254970  lw          $a1, 0x4970($at)
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334970u));
    // 0x15a6d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6d8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A6D8u;
    {
        const bool branch_taken_0x15a6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0xa0244af2  sb          $a0, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6d8) {
            ctx->pc = 0x15A6F8u;
            goto label_15a6f8;
        }
    }
    ctx->pc = 0x15A6E0u;
    // 0x15a6e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15a6e4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A6E4u;
    {
        const bool branch_taken_0x15a6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a6e4) {
            ctx->pc = 0x15A6F8u;
            goto label_15a6f8;
        }
    }
    ctx->pc = 0x15A6ECu;
    // 0x15a6ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15a6f0: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15A6F0u;
    {
        const bool branch_taken_0x15a6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a6f0) {
            ctx->pc = 0x15A768u;
            goto label_15a768;
        }
    }
    ctx->pc = 0x15A6F8u;
label_15a6f8:
    // 0x15a6f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6fc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15a700: 0x90254af2  lbu         $a1, 0x4AF2($at)
    ctx->pc = 0x15a700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334AF2u));
    // 0x15a704: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x15a708: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15a70c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a710: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a714: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x15a714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a718: 0x0  nop
    ctx->pc = 0x15a718u;
    // NOP
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
    // 0x15a720: 0x1810  mfhi        $v1
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15a724: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15a728: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15a72c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15A730u;
    {
        const bool branch_taken_0x15a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a730) {
            ctx->pc = 0x15A768u;
            goto label_15a768;
        }
    }
    ctx->pc = 0x15A738u;
label_15a738:
    // 0x15a738: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15A738u;
    {
        const bool branch_taken_0x15a738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A738u;
        // 0x15a73c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a738) {
            ctx->pc = 0x15A764u;
            goto label_15a764;
        }
    }
    ctx->pc = 0x15A740u;
    // 0x15a740: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a744: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x15a748: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15a748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15a74c: 0x246354c0  addiu       $v1, $v1, 0x54C0
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
    // 0x15a750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a754: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a758: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a75c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A75Cu;
    {
        const bool branch_taken_0x15a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A75Cu;
        // 0x15a760: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a75c) {
            ctx->pc = 0x15A768u;
            goto label_15a768;
        }
    }
    ctx->pc = 0x15A764u;
label_15a764:
    // 0x15a764: 0xa0204af2  sb          $zero, 0x4AF2($at)
    ctx->pc = 0x15a764u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 0));
label_15a768:
    // 0x15a768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a76c: 0x80244af2  lb          $a0, 0x4AF2($at)
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x334AF2u));
    // 0x15a770: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x15a774: 0x8023c994  lb          $v1, -0x366C($at)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x29C994u));
    // 0x15a778: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a77c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a780: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a784: 0xa0234af2  sb          $v1, 0x4AF2($at)
    ctx->pc = 0x15a784u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF2u, _value); } while (0);
    ctx->pc = 0x15a788u;
}
