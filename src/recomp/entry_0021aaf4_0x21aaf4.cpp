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

// Function: entry_0021aaf4
// Address: 0x21aaf4 - 0x21ab0c
void entry_0021aaf4_0x21aaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aaf4_0x21aaf4");
#endif

    ctx->pc = 0x21aaf4u;

    // 0x21aaf4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aaf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21aafc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AAFCu;
    {
        const bool branch_taken_0x21aafc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAFCu;
        // 0x21ab00: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aafc) {
            ctx->pc = 0x21AB0Cu;
            return;
        }
    }
    ctx->pc = 0x21AB04u;
    // 0x21ab04: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x21ab08: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21ab08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    ctx->pc = 0x21ab0cu;
}
