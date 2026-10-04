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

// Function: entry_00212564
// Address: 0x212564 - 0x21257c
void entry_00212564_0x212564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212564_0x212564");
#endif

    ctx->pc = 0x212564u;

    // 0x212564: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x212568: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21256c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21256cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x212570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212574: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x212574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x212578: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x212578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    ctx->pc = 0x21257cu;
}
