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

// Function: entry_0021aacc
// Address: 0x21aacc - 0x21aaf4
void entry_0021aacc_0x21aacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aacc_0x21aacc");
#endif

    ctx->pc = 0x21aaccu;

    // 0x21aacc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AACCu;
    {
        const bool branch_taken_0x21aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AACCu;
        // 0x21aad0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aacc) {
            ctx->pc = 0x21AAF4u;
            return;
        }
    }
    ctx->pc = 0x21AAD4u;
    // 0x21aad4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21aad8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21AAD8u;
    {
        const bool branch_taken_0x21aad8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAD8u;
        // 0x21aadc: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aad8) {
            ctx->pc = 0x21AB0Cu;
            return;
        }
    }
    ctx->pc = 0x21AAE0u;
    // 0x21aae0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x21aae4: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21aae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x21aae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21AAE8u;
    {
        const bool branch_taken_0x21aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0xaf839278  sw          $v1, -0x6D88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aae8) {
            ctx->pc = 0x21AB10u;
            return;
        }
    }
    ctx->pc = 0x21AAF0u;
    // 0x21aaf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x21aaf4u;
}
