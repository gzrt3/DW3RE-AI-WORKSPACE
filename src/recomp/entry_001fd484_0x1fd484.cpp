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

// Function: entry_001fd484
// Address: 0x1fd484 - 0x1fd49c
void entry_001fd484_0x1fd484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd484_0x1fd484");
#endif

    ctx->pc = 0x1fd484u;

    // 0x1fd484: 0x0  nop
    ctx->pc = 0x1fd484u;
    // NOP
    // 0x1fd488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd48c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fd490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd494: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1fd498: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd49cu;
}
