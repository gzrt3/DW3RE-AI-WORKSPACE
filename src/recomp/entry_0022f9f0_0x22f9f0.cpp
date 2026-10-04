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

// Function: entry_0022f9f0
// Address: 0x22f9f0 - 0x22fa00
void entry_0022f9f0_0x22f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f9f0_0x22f9f0");
#endif

    ctx->pc = 0x22f9f0u;

    // 0x22f9f0: 0x0  nop
    ctx->pc = 0x22f9f0u;
    // NOP
    // 0x22f9f4: 0x90e3005c  lbu         $v1, 0x5C($a3)
    ctx->pc = 0x22f9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x22f9f8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F9F8u;
    {
        const bool branch_taken_0x22f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9F8u;
        // 0x22f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9f8) {
            ctx->pc = 0x22FA34u;
            return;
        }
    }
    ctx->pc = 0x22FA00u;
}
