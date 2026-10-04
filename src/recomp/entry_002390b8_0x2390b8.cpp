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

// Function: entry_002390b8
// Address: 0x2390b8 - 0x2390d8
void entry_002390b8_0x2390b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002390b8_0x2390b8");
#endif

    ctx->pc = 0x2390b8u;

    // 0x2390b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2390bc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2390BCu;
    {
        const bool branch_taken_0x2390bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2390C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2390BCu;
        // 0x2390c0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2390bc) {
            ctx->pc = 0x239208u;
            return;
        }
    }
    ctx->pc = 0x2390C4u;
    // 0x2390c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2390C4u;
    {
        const bool branch_taken_0x2390c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2390c4) {
            ctx->pc = 0x2390D8u;
            return;
        }
    }
    ctx->pc = 0x2390CCu;
    // 0x2390cc: 0x0  nop
    ctx->pc = 0x2390ccu;
    // NOP
    // 0x2390d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2390d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2390d4: 0x0  nop
    ctx->pc = 0x2390d4u;
    // NOP
    ctx->pc = 0x2390d8u;
}
