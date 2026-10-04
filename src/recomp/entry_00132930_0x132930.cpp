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

// Function: entry_00132930
// Address: 0x132930 - 0x132954
void entry_00132930_0x132930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132930_0x132930");
#endif

    ctx->pc = 0x132930u;

    // 0x132930: 0xa1050291  sb          $a1, 0x291($t0)
    ctx->pc = 0x132930u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 657), (uint8_t)GPR_U32(ctx, 5));
    // 0x132934: 0xa1060290  sb          $a2, 0x290($t0)
    ctx->pc = 0x132934u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 6));
    // 0x132938: 0x910301a2  lbu         $v1, 0x1A2($t0)
    ctx->pc = 0x132938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 418)));
    // 0x13293c: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x13293Cu;
    {
        const bool branch_taken_0x13293c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13293c) {
            ctx->pc = 0x132A88u;
            return;
        }
    }
    ctx->pc = 0x132944u;
    // 0x132944: 0x8f8380d0  lw          $v1, -0x7F30($gp)
    ctx->pc = 0x132944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x132948: 0x8f8780d8  lw          $a3, -0x7F28($gp)
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x13294c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13294Cu;
    {
        const bool branch_taken_0x13294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13294Cu;
        // 0x132950: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13294c) {
            ctx->pc = 0x132970u;
            return;
        }
    }
    ctx->pc = 0x132954u;
}
