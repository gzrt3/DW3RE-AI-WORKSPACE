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

// Function: FUN_00240700
// Address: 0x240700 - 0x24071c
void FUN_00240700_0x240700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240700_0x240700");
#endif

    ctx->pc = 0x240700u;

    // 0x240700: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x240704: 0x24631855  addiu       $v1, $v1, 0x1855
    ctx->pc = 0x240704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6229));
    // 0x240708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24070c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24070cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240710: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x240710u;
    {
        const bool branch_taken_0x240710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240710) {
            ctx->pc = 0x24071Cu;
            return;
        }
    }
    ctx->pc = 0x240718u;
    // 0x240718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24071cu;
}
