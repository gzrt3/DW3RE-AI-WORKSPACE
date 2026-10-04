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

// Function: entry_00188da0
// Address: 0x188da0 - 0x188db4
void entry_00188da0_0x188da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188da0_0x188da0");
#endif

    ctx->pc = 0x188da0u;

    // 0x188da0: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x188da4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x240300c3  addiu       $v1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188DB4u;
            return;
        }
    }
    ctx->pc = 0x188DACu;
    // 0x188dac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DACu;
    {
        const bool branch_taken_0x188dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188dac) {
            ctx->pc = 0x188DBCu;
            return;
        }
    }
    ctx->pc = 0x188DB4u;
}
