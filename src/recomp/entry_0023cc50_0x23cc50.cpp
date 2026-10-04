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

// Function: entry_0023cc50
// Address: 0x23cc50 - 0x23ccd8
void entry_0023cc50_0x23cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cc50_0x23cc50");
#endif

    switch (ctx->pc) {
        case 0x23cc90u: goto label_23cc90;
        default: break;
    }

    ctx->pc = 0x23cc50u;

    // 0x23cc50: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cc54: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x23cc54u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x23cc58: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x23cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x23cc5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cc60: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cc64: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x23CC64u;
    {
        const bool branch_taken_0x23cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc64) {
            ctx->pc = 0x23CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC64u;
            // 0x23cc68: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            return;
        }
    }
    ctx->pc = 0x23CC6Cu;
    // 0x23cc6c: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x23cc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x23cc70: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x23cc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x23cc74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cc74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23cc78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23cc7c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x23cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x23cc80: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x23CC80u;
    {
        const bool branch_taken_0x23cc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc80) {
            ctx->pc = 0x23CC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC80u;
            // 0x23cc84: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            return;
        }
    }
    ctx->pc = 0x23CC88u;
    // 0x23cc88: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x23cc88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23cc90:
    // 0x23cc90: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x23cc90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cc94: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x23cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x23cc98: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x23cc98u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x23cc9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cca0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cca4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CCA4u;
    {
        const bool branch_taken_0x23cca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA4u;
        // 0x23cca8: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca4) {
            ctx->pc = 0x23CCD8u;
            return;
        }
    }
    ctx->pc = 0x23CCACu;
    // 0x23ccac: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23ccb0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23ccb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23ccb8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23ccbc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x23CCBCu;
    {
        const bool branch_taken_0x23ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccbc) {
            ctx->pc = 0x23CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCBCu;
            // 0x23ccc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cc90;
        }
    }
    ctx->pc = 0x23CCC4u;
    // 0x23ccc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CCC4u;
    {
        const bool branch_taken_0x23ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc4) {
            ctx->pc = 0x23CCDCu;
            return;
        }
    }
    ctx->pc = 0x23CCCCu;
    // 0x23cccc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CCCCu;
    {
        const bool branch_taken_0x23cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x23cccc) {
            ctx->pc = 0x23CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCCCu;
            // 0x23ccd0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCE8u;
            return;
        }
    }
    ctx->pc = 0x23CCD4u;
    // 0x23ccd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x23ccd8u;
}
