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

// Function: entry_00241908
// Address: 0x241908 - 0x241940
void entry_00241908_0x241908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241908_0x241908");
#endif

    ctx->pc = 0x241908u;

    // 0x241908: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24190c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241910: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x241914: 0xac252384  sw          $a1, 0x2384($at)
    ctx->pc = 0x241914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 5));
    // 0x241918: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x241918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x24191c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241920: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241924: 0x8c232384  lw          $v1, 0x2384($at)
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x241928: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x241928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24192c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x24192Cu;
    {
        const bool branch_taken_0x24192c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24192Cu;
        // 0x241930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24192c) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241934u;
    // 0x241934: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x241938u;
    {
        const bool branch_taken_0x241938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241938u;
        // 0x24193c: 0xac202380  sw          $zero, 0x2380($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241938) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241940u;
}
