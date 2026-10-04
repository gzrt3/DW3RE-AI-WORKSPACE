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

// Function: entry_0015211c
// Address: 0x15211c - 0x15213c
void entry_0015211c_0x15211c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015211c_0x15211c");
#endif

    ctx->pc = 0x15211cu;

    // 0x15211c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x152120: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x152120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x152124: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x152128: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x152128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15212c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x152134: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152134u;
    {
        const bool branch_taken_0x152134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152134u;
        // 0x152138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152134) {
            ctx->pc = 0x152164u;
            return;
        }
    }
    ctx->pc = 0x15213Cu;
}
