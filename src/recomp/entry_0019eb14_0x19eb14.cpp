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

// Function: entry_0019eb14
// Address: 0x19eb14 - 0x19eb40
void entry_0019eb14_0x19eb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb14_0x19eb14");
#endif

    ctx->pc = 0x19eb14u;

    // 0x19eb14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19eb18: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19EB18u;
    {
        const bool branch_taken_0x19eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb18) {
            ctx->pc = 0x19EB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EB18u;
            // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB44u;
            return;
        }
    }
    ctx->pc = 0x19EB20u;
    // 0x19eb20: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x19eb24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EB24u;
    {
        const bool branch_taken_0x19eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb24) {
            ctx->pc = 0x19EB40u;
            return;
        }
    }
    ctx->pc = 0x19EB2Cu;
    // 0x19eb2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19eb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eb34: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x19eb38: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x19eb38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x19eb3c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19eb40u;
}
