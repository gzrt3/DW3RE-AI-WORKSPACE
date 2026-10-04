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

// Function: FUN_0023ab50
// Address: 0x23ab50 - 0x23abc8
void FUN_0023ab50_0x23ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023ab50_0x23ab50");
#endif

    ctx->pc = 0x23ab50u;

    // 0x23ab50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23ab54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB58u;
    {
        const bool branch_taken_0x23ab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB58u;
        // 0x23ab5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab58) {
            ctx->pc = 0x23AB68u;
            goto label_23ab68;
        }
    }
    ctx->pc = 0x23AB60u;
    // 0x23ab60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23ab64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_23ab68:
    // 0x23ab68: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x23ab6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB70u;
    {
        const bool branch_taken_0x23ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB70u;
        // 0x23ab74: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab70) {
            ctx->pc = 0x23AB80u;
            goto label_23ab80;
        }
    }
    ctx->pc = 0x23AB78u;
    // 0x23ab78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23ab7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x23ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_23ab80:
    // 0x23ab80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB84u;
    {
        const bool branch_taken_0x23ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB84u;
        // 0x23ab88: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab84) {
            ctx->pc = 0x23AB94u;
            goto label_23ab94;
        }
    }
    ctx->pc = 0x23AB8Cu;
    // 0x23ab8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x23ab90: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_23ab94:
    // 0x23ab94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB98u;
    {
        const bool branch_taken_0x23ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ab98) {
            ctx->pc = 0x23ABA8u;
            goto label_23aba8;
        }
    }
    ctx->pc = 0x23ABA0u;
    // 0x23aba0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23aba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23aba8:
    // 0x23aba8: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23ABA8u;
    {
        const bool branch_taken_0x23aba8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABA8u;
        // 0x23abac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aba8) {
            ctx->pc = 0x23ABC8u;
            return;
        }
    }
    ctx->pc = 0x23ABB0u;
    // 0x23abb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x23abb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23abb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23abbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ABBCu;
    {
        const bool branch_taken_0x23abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABBCu;
        // 0x23abc0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abbc) {
            ctx->pc = 0x23ABC8u;
            return;
        }
    }
    ctx->pc = 0x23ABC4u;
    // 0x23abc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23abc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23abc8u;
}
