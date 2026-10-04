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

// Function: entry_001fec84
// Address: 0x1fec84 - 0x1feca8
void entry_001fec84_0x1fec84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec84_0x1fec84");
#endif

    ctx->pc = 0x1fec84u;

    // 0x1fec84: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x1fec84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fec88: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fec8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC94u;
    {
        const bool branch_taken_0x1fec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec94) {
            ctx->pc = 0x1FECA8u;
            return;
        }
    }
    ctx->pc = 0x1FEC9Cu;
    // 0x1fec9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1feca0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FECA0u;
    {
        const bool branch_taken_0x1feca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA0u;
        // 0x1feca4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca0) {
            ctx->pc = 0x1FECCCu;
            return;
        }
    }
    ctx->pc = 0x1FECA8u;
}
