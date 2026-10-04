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

// Function: entry_001816a0
// Address: 0x1816a0 - 0x1816c8
void entry_001816a0_0x1816a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001816a0_0x1816a0");
#endif

    ctx->pc = 0x1816a0u;

    // 0x1816a0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1816a4: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1816A4u;
    {
        const bool branch_taken_0x1816a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1816A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816A4u;
        // 0x1816a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816a4) {
            ctx->pc = 0x1816E8u;
            return;
        }
    }
    ctx->pc = 0x1816ACu;
    // 0x1816ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1816b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1816b4: 0x2449007f  addiu       $t1, $v0, 0x7F
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1816b8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816B8u;
    {
        const bool branch_taken_0x1816b8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B8u;
        // 0x1816bc: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816b8) {
            ctx->pc = 0x1816C8u;
            return;
        }
    }
    ctx->pc = 0x1816C0u;
    // 0x1816c0: 0x2522007f  addiu       $v0, $t1, 0x7F
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
    // 0x1816c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    ctx->pc = 0x1816c8u;
}
