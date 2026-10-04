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

// Function: entry_0014ebcc
// Address: 0x14ebcc - 0x14ebe8
void entry_0014ebcc_0x14ebcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebcc_0x14ebcc");
#endif

    ctx->pc = 0x14ebccu;

    // 0x14ebcc: 0x0  nop
    ctx->pc = 0x14ebccu;
    // NOP
    // 0x14ebd0: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14EBD0u;
    {
        const bool branch_taken_0x14ebd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBD0u;
        // 0x14ebd4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebd0) {
            ctx->pc = 0x14EBB4u;
            return;
        }
    }
    ctx->pc = 0x14EBD8u;
    // 0x14ebd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14ebd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14ebe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14EBE0u;
    {
        const bool branch_taken_0x14ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBE0u;
        // 0x14ebe4: 0x27a60000  addiu       $a2, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebe0) {
            ctx->pc = 0x14EC0Cu;
            return;
        }
    }
    ctx->pc = 0x14EBE8u;
}
