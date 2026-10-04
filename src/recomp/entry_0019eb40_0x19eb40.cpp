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

// Function: entry_0019eb40
// Address: 0x19eb40 - 0x19eb6c
void entry_0019eb40_0x19eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb40_0x19eb40");
#endif

    ctx->pc = 0x19eb40u;

    // 0x19eb40: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19eb44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19eb48: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EB48u;
    {
        const bool branch_taken_0x19eb48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb48) {
            ctx->pc = 0x19EB6Cu;
            return;
        }
    }
    ctx->pc = 0x19EB50u;
    // 0x19eb50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eb58: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x19eb5c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x19eb60: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x19eb60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x19eb64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19EB64u;
    {
        const bool branch_taken_0x19eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb64) {
            ctx->pc = 0x19EB80u;
            return;
        }
    }
    ctx->pc = 0x19EB6Cu;
}
