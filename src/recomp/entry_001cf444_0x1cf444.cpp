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

// Function: entry_001cf444
// Address: 0x1cf444 - 0x1cf46c
void entry_001cf444_0x1cf444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf444_0x1cf444");
#endif

    ctx->pc = 0x1cf444u;

    // 0x1cf444: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1cf448: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf44c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf450: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf454: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1cf458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf45c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF45Cu;
    {
        const bool branch_taken_0x1cf45c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf45c) {
            ctx->pc = 0x1CF46Cu;
            return;
        }
    }
    ctx->pc = 0x1CF464u;
    // 0x1cf464: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cf468: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1cf46cu;
}
