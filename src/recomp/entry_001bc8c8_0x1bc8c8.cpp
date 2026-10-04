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

// Function: entry_001bc8c8
// Address: 0x1bc8c8 - 0x1bc8ec
void entry_001bc8c8_0x1bc8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8c8_0x1bc8c8");
#endif

    ctx->pc = 0x1bc8c8u;

    // 0x1bc8c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc8cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bc8d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bc8d4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1bc8d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc8dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bc8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bc8e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC8E0u;
    {
        const bool branch_taken_0x1bc8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8e0) {
            ctx->pc = 0x1BC8ECu;
            return;
        }
    }
    ctx->pc = 0x1BC8E8u;
    // 0x1bc8e8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1bc8ecu;
}
