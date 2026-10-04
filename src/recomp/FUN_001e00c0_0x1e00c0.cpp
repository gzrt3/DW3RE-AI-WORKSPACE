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

// Function: FUN_001e00c0
// Address: 0x1e00c0 - 0x1e0128
void FUN_001e00c0_0x1e00c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e00c0_0x1e00c0");
#endif

    ctx->pc = 0x1e00c0u;

    // 0x1e00c0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1e00c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E00C4u;
    {
        const bool branch_taken_0x1e00c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00c4) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E00CCu;
    // 0x1e00cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e00d0: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E00D0u;
    {
        const bool branch_taken_0x1e00d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00D0u;
        // 0x1e00d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00d0) {
            ctx->pc = 0x1E0114u;
            goto label_1e0114;
        }
    }
    ctx->pc = 0x1E00D8u;
    // 0x1e00d8: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x1e00dc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1e00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e00e0: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x1e00e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1e00e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E00E4u;
    {
        const bool branch_taken_0x1e00e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00e4) {
            ctx->pc = 0x1E00F4u;
            goto label_1e00f4;
        }
    }
    ctx->pc = 0x1E00ECu;
    // 0x1e00ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E00ECu;
    {
        const bool branch_taken_0x1e00ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00ECu;
        // 0x1e00f0: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00ec) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E00F4u;
label_1e00f4:
    // 0x1e00f4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e00f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e00fc:
    // 0x1e00fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00FCu;
        // 0x1e0100: 0xaf848cfc  sw          $a0, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E0104u;
    // 0x1e0104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0108: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E0108u;
    {
        const bool branch_taken_0x1e0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0108u;
        // 0x1e010c: 0xaf838cf8  sw          $v1, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0108) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E0110u;
    // 0x1e0110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e0114:
    // 0x1e0114: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E0138u;
            return;
        }
    }
    ctx->pc = 0x1E011Cu;
    // 0x1e011c: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
    // 0x1e0120: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1e0124: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e0124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1e0128u;
}
