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

// Function: FUN_00219e80
// Address: 0x219e80 - 0x219eb4
void FUN_00219e80_0x219e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00219e80_0x219e80");
#endif

    ctx->pc = 0x219e80u;

    // 0x219e80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x219e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x219e84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x219e88: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x219e88u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x219e8c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x219E8Cu;
    {
        const bool branch_taken_0x219e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e8c) {
            ctx->pc = 0x219EB4u;
            return;
        }
    }
    ctx->pc = 0x219E94u;
    // 0x219e94: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x219e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x219e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219e9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219E9Cu;
    {
        const bool branch_taken_0x219e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219e9c) {
            ctx->pc = 0x219EACu;
            goto label_219eac;
        }
    }
    ctx->pc = 0x219EA4u;
    // 0x219ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219EA4u;
    {
        const bool branch_taken_0x219ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA4u;
        // 0x219ea8: 0x8f8292bc  lw          $v0, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ea4) {
            ctx->pc = 0x219EB4u;
            return;
        }
    }
    ctx->pc = 0x219EACu;
label_219eac:
    // 0x219eac: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x219eb0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x219eb4u;
}
