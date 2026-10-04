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

// Function: entry_001febd4
// Address: 0x1febd4 - 0x1febf0
void entry_001febd4_0x1febd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001febd4_0x1febd4");
#endif

    ctx->pc = 0x1febd4u;

    // 0x1febd4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1febd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1febd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1febdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1febe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBE0u;
    {
        const bool branch_taken_0x1febe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE0u;
        // 0x1febe4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe0) {
            ctx->pc = 0x1FEBF0u;
            return;
        }
    }
    ctx->pc = 0x1FEBE8u;
    // 0x1febe8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEBE8u;
    {
        const bool branch_taken_0x1febe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE8u;
        // 0x1febec: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe8) {
            ctx->pc = 0x1FEC50u;
            return;
        }
    }
    ctx->pc = 0x1FEBF0u;
}
