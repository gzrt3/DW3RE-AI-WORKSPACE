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

// Function: entry_001366b0
// Address: 0x1366b0 - 0x1366dc
void entry_001366b0_0x1366b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001366b0_0x1366b0");
#endif

    ctx->pc = 0x1366b0u;

    // 0x1366b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1366b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1366b8: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1366B8u;
    {
        const bool branch_taken_0x1366b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1366b8) {
            ctx->pc = 0x13677Cu;
            return;
        }
    }
    ctx->pc = 0x1366C0u;
    // 0x1366c0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1366c4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1366c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1366c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1366C8u;
    {
        const bool branch_taken_0x1366c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1366c8) {
            ctx->pc = 0x1366DCu;
            return;
        }
    }
    ctx->pc = 0x1366D0u;
    // 0x1366d0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1366d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1366d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1366d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1366d8: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x1366d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->pc = 0x1366dcu;
}
