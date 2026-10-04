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

// Function: entry_0023f978
// Address: 0x23f978 - 0x23f994
void entry_0023f978_0x23f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f978_0x23f978");
#endif

    ctx->pc = 0x23f978u;

label_23f978:
    // 0x23f978: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x23f97c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23f980: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x23f980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x23f984: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x23f988: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23f98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23F98Cu;
    {
        const bool branch_taken_0x23f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f98c) {
            ctx->pc = 0x23F978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f978;
        }
    }
    ctx->pc = 0x23F994u;
}
