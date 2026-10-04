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

// Function: entry_0023fe98
// Address: 0x23fe98 - 0x23fed0
void entry_0023fe98_0x23fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fe98_0x23fe98");
#endif

    ctx->pc = 0x23fe98u;

    // 0x23fe98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23fe9c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FE9Cu;
    {
        const bool branch_taken_0x23fe9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe9c) {
            ctx->pc = 0x23FED0u;
            return;
        }
    }
    ctx->pc = 0x23FEA4u;
    // 0x23fea4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FEA4u;
    {
        const bool branch_taken_0x23fea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fea4) {
            ctx->pc = 0x23FED0u;
            return;
        }
    }
    ctx->pc = 0x23FEACu;
    // 0x23feac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23feb0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FEB0u;
    {
        const bool branch_taken_0x23feb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB0u;
        // 0x23feb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feb0) {
            ctx->pc = 0x23FED0u;
            return;
        }
    }
    ctx->pc = 0x23FEB8u;
    // 0x23feb8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FEB8u;
    {
        const bool branch_taken_0x23feb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23feb8) {
            ctx->pc = 0x23FED0u;
            return;
        }
    }
    ctx->pc = 0x23FEC0u;
    // 0x23fec0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x23FED0u;
            return;
        }
    }
    ctx->pc = 0x23FEC8u;
    // 0x23fec8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23FEC8u;
    {
        const bool branch_taken_0x23fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec8) {
            ctx->pc = 0x23FEF8u;
            return;
        }
    }
    ctx->pc = 0x23FED0u;
}
