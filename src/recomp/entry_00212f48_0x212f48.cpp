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

// Function: entry_00212f48
// Address: 0x212f48 - 0x212f74
void entry_00212f48_0x212f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f48_0x212f48");
#endif

    ctx->pc = 0x212f48u;

label_212f48:
    // 0x212f48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212f4c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x212f50: 0xdc241888  ld          $a0, 0x1888($at)
    ctx->pc = 0x212f50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x212f54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x212f54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x212f58: 0x673014  dsllv       $a2, $a3, $v1
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x212f5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x212f60: 0x28a30025  slti        $v1, $a1, 0x25
    ctx->pc = 0x212f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x212f64: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x212f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x212f68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212f6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x212F6Cu;
    {
        const bool branch_taken_0x212f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F6Cu;
        // 0x212f70: 0xfc241888  sd          $a0, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f6c) {
            ctx->pc = 0x212F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f48;
        }
    }
    ctx->pc = 0x212F74u;
}
