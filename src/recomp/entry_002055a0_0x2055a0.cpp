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

// Function: entry_002055a0
// Address: 0x2055a0 - 0x2055d0
void entry_002055a0_0x2055a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002055a0_0x2055a0");
#endif

    ctx->pc = 0x2055a0u;

    // 0x2055a0: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2055A0u;
    {
        const bool branch_taken_0x2055a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2055a0) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x2055A8u;
    // 0x2055a8: 0x8ca42484  lw          $a0, 0x2484($a1)
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9348)));
    // 0x2055ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2055b0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2055b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2055b4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2055B4u;
    {
        const bool branch_taken_0x2055b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055B4u;
        // 0x2055b8: 0xaca32484  sw          $v1, 0x2484($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055b4) {
            ctx->pc = 0x2055D0u;
            return;
        }
    }
    ctx->pc = 0x2055BCu;
    // 0x2055bc: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x2055c0: 0x8c852484  lw          $a1, 0x2484($a0)
    ctx->pc = 0x2055c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x2055c4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2055c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2055c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0xac832484  sw          $v1, 0x2484($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x2055D4u;
            return;
        }
    }
    ctx->pc = 0x2055D0u;
}
