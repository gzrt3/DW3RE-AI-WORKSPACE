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

// Function: entry_001cf320
// Address: 0x1cf320 - 0x1cf34c
void entry_001cf320_0x1cf320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf320_0x1cf320");
#endif

    ctx->pc = 0x1cf320u;

    // 0x1cf320: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x1cf320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1cf324: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1cf324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cf328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf32c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cf330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf338: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cf33c: 0x94620090  lhu         $v0, 0x90($v1)
    ctx->pc = 0x1cf33cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1cf340: 0xa46200d8  sh          $v0, 0xD8($v1)
    ctx->pc = 0x1cf340u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cf344: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF344u;
        // 0x1cf348: 0xa46200a8  sh          $v0, 0xA8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 168), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF534u;
            return;
        }
    }
    ctx->pc = 0x1CF34Cu;
}
