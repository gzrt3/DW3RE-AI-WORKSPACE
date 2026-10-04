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

// Function: entry_001f1fd4
// Address: 0x1f1fd4 - 0x1f1fe8
void entry_001f1fd4_0x1f1fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1fd4_0x1f1fd4");
#endif

    ctx->pc = 0x1f1fd4u;

    // 0x1f1fd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f1fd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1fd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fdc: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1f1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1f1fe0: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1f1fe4: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x1f1fe8u;
}
