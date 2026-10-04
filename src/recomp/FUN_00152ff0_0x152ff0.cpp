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

// Function: FUN_00152ff0
// Address: 0x152ff0 - 0x153084
void FUN_00152ff0_0x152ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152ff0_0x152ff0");
#endif

    switch (ctx->pc) {
        case 0x152ffcu: goto label_152ffc;
        default: break;
    }

    ctx->pc = 0x152ff0u;

    // 0x152ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152ffc:
    // 0x152ffc: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x153000: 0x24650200  addiu       $a1, $v1, 0x200
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x153004: 0x84630200  lh          $v1, 0x200($v1)
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x153008: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x153008u;
    {
        const bool branch_taken_0x153008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x153008) {
            ctx->pc = 0x153040u;
            goto label_153040;
        }
    }
    ctx->pc = 0x153010u;
    // 0x153010: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x153014: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x153014u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x153018: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x153018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x153020: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x153020u;
    {
        const bool branch_taken_0x153020 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x153020) {
            ctx->pc = 0x153040u;
            goto label_153040;
        }
    }
    ctx->pc = 0x153028u;
    // 0x153028: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x15302c: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x153030: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x153034: 0xa02827  not         $a1, $a1
    ctx->pc = 0x153034u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x153038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x153038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15303c: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x15303cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_153040:
    // 0x153040: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x153044: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x153048: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x153048u;
    {
        const bool branch_taken_0x153048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153048u;
        // 0x15304c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153048) {
            ctx->pc = 0x152FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152ffc;
        }
    }
    ctx->pc = 0x153050u;
    // 0x153050: 0x8483027c  lh          $v1, 0x27C($a0)
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x153054: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x153054u;
    {
        const bool branch_taken_0x153054 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x153054) {
            ctx->pc = 0x153084u;
            return;
        }
    }
    ctx->pc = 0x15305Cu;
    // 0x15305c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x153060: 0xa483027c  sh          $v1, 0x27C($a0)
    ctx->pc = 0x153060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 3));
    // 0x153064: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x153068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x153068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15306c: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15306Cu;
    {
        const bool branch_taken_0x15306c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x15306c) {
            ctx->pc = 0x153084u;
            return;
        }
    }
    ctx->pc = 0x153074u;
    // 0x153074: 0x8c850198  lw          $a1, 0x198($a0)
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x153078: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15307c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x153080: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
    ctx->pc = 0x153084u;
}
