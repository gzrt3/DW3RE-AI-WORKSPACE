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

// Function: entry_0015aaf8
// Address: 0x15aaf8 - 0x15ab20
void entry_0015aaf8_0x15aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aaf8_0x15aaf8");
#endif

    ctx->pc = 0x15aaf8u;

    // 0x15aaf8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x15aafc: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15AAFCu;
    {
        const bool branch_taken_0x15aafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x15AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAFCu;
        // 0x15ab00: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aafc) {
            ctx->pc = 0x15AB28u;
            return;
        }
    }
    ctx->pc = 0x15AB04u;
    // 0x15ab04: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AB04u;
    {
        const bool branch_taken_0x15ab04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab04) {
            ctx->pc = 0x15AB20u;
            return;
        }
    }
    ctx->pc = 0x15AB0Cu;
    // 0x15ab0c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15ab10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB10u;
    {
        const bool branch_taken_0x15ab10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab10) {
            ctx->pc = 0x15AB20u;
            return;
        }
    }
    ctx->pc = 0x15AB18u;
    // 0x15ab18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15AB18u;
    {
        const bool branch_taken_0x15ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab18) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AB20u;
}
