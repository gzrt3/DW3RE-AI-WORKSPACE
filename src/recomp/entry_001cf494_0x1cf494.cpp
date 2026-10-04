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

// Function: entry_001cf494
// Address: 0x1cf494 - 0x1cf4bc
void entry_001cf494_0x1cf494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf494_0x1cf494");
#endif

    ctx->pc = 0x1cf494u;

    // 0x1cf494: 0x24750078  addiu       $s5, $v1, 0x78
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1cf498: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cf49c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf4a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf4a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cf4a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cf4ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF4BCu;
            return;
        }
    }
    ctx->pc = 0x1CF4B4u;
    // 0x1cf4b4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cf4b8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1cf4bcu;
}
