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

// Function: entry_001d4940
// Address: 0x1d4940 - 0x1d4968
void entry_001d4940_0x1d4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4940_0x1d4940");
#endif

    ctx->pc = 0x1d4940u;

    // 0x1d4940: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4940u;
    {
        const bool branch_taken_0x1d4940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4940) {
            ctx->pc = 0x1D4970u;
            return;
        }
    }
    ctx->pc = 0x1D4948u;
    // 0x1d4948: 0x90830242  lbu         $v1, 0x242($a0)
    ctx->pc = 0x1d4948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x1d494c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d4950: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4950u;
    {
        const bool branch_taken_0x1d4950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4950u;
        // 0x1d4954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4950) {
            ctx->pc = 0x1D4968u;
            return;
        }
    }
    ctx->pc = 0x1D4958u;
    // 0x1d4958: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d495c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D495Cu;
    {
        const bool branch_taken_0x1d495c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d495c) {
            ctx->pc = 0x1D4970u;
            return;
        }
    }
    ctx->pc = 0x1D4964u;
    // 0x1d4964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d4968u;
}
