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

// Function: FUN_0023a6b0
// Address: 0x23a6b0 - 0x23a768
void FUN_0023a6b0_0x23a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a6b0_0x23a6b0");
#endif

    switch (ctx->pc) {
        case 0x23a6ecu: goto label_23a6ec;
        case 0x23a710u: goto label_23a710;
        case 0x23a74cu: goto label_23a74c;
        default: break;
    }

    ctx->pc = 0x23a6b0u;

    // 0x23a6b0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a6b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23A6B4u;
    {
        const bool branch_taken_0x23a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B4u;
        // 0x23a6b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b4) {
            ctx->pc = 0x23A730u;
            goto label_23a730;
        }
    }
    ctx->pc = 0x23A6BCu;
    // 0x23a6bc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x23a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x23a6c0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23A6C0u;
    {
        const bool branch_taken_0x23a6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6C0u;
        // 0x23a6c4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6c0) {
            ctx->pc = 0x23A730u;
            goto label_23a730;
        }
    }
    ctx->pc = 0x23A6C8u;
    // 0x23a6c8: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x23a6c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23a6cc: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a6d0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x23a6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6d4: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x23a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x23a6d8: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x23a6d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x23a6dc: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x23a6dcu;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = static_cast<uint16_t>(_mm_extract_epi16(src, 0)); uint16_t h = static_cast<uint16_t>(_mm_extract_epi16(src, 4)); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x23a6e0: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x23A6E0u;
    {
        const bool branch_taken_0x23a6e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E0u;
        // 0x23a6e4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6e0) {
            ctx->pc = 0x23A71Cu;
            goto label_23a71c;
        }
    }
    ctx->pc = 0x23A6E8u;
    // 0x23a6e8: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x23a6e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_23a6ec:
    // 0x23a6ec: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x23a6f0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x23a6f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x23a6f8: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a6fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x23a700: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A700u;
    {
        const bool branch_taken_0x23a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A700u;
        // 0x23a704: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a700) {
            ctx->pc = 0x23A6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a6ec;
        }
    }
    ctx->pc = 0x23A708u;
    // 0x23a708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A708u;
    {
        const bool branch_taken_0x23a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A708u;
        // 0x23a70c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a708) {
            ctx->pc = 0x23A71Cu;
            goto label_23a71c;
        }
    }
    ctx->pc = 0x23A710u;
label_23a710:
    // 0x23a710: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23a714: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x23a718: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a71c:
    // 0x23a71c: 0x0  nop
    ctx->pc = 0x23a71cu;
    // NOP
    // 0x23a720: 0x0  nop
    ctx->pc = 0x23a720u;
    // NOP
    // 0x23a724: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A724u;
    {
        const bool branch_taken_0x23a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a724) {
            ctx->pc = 0x23A728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A724u;
            // 0x23a728: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a710;
        }
    }
    ctx->pc = 0x23A72Cu;
    // 0x23a72c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a72cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a730:
    // 0x23a730: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23a734: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23a73c: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A73Cu;
    {
        const bool branch_taken_0x23a73c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a73c) {
            ctx->pc = 0x23A768u;
            return;
        }
    }
    ctx->pc = 0x23A744u;
    // 0x23a744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23a748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23a74c:
    // 0x23a74c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23a750: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a758: 0x0  nop
    ctx->pc = 0x23a758u;
    // NOP
    // 0x23a75c: 0x0  nop
    ctx->pc = 0x23a75cu;
    // NOP
    // 0x23a760: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A760u;
    {
        const bool branch_taken_0x23a760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a760) {
            ctx->pc = 0x23A74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a74c;
        }
    }
    ctx->pc = 0x23A768u;
}
