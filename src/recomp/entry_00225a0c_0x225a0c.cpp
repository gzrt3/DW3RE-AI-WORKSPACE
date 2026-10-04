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

// Function: entry_00225a0c
// Address: 0x225a0c - 0x225a70
void entry_00225a0c_0x225a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225a0c_0x225a0c");
#endif

    ctx->pc = 0x225a0cu;

    // 0x225a0c: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225a10: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225a14: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225a14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x225a18: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
    // 0x225a1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225a20: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x225A20u;
    {
        const bool branch_taken_0x225a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a20) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A28u;
    // 0x225a28: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225a2c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x225a30: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
    // 0x225a34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225a38: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A40u;
    // 0x225a40: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225a44: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x225a48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225a4c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x225A4Cu;
    {
        const bool branch_taken_0x225a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a4c) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A54u;
    // 0x225a54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x225a58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225a5c: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x225A64u;
    {
        const bool branch_taken_0x225a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a64) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x225A6Cu;
    // 0x225a6c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x225a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->pc = 0x225a70u;
}
