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

// Function: entry_001817dc
// Address: 0x1817dc - 0x181804
void entry_001817dc_0x1817dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001817dc_0x1817dc");
#endif

    ctx->pc = 0x1817dcu;

    // 0x1817dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817e0: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1817e4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1817E4u;
    {
        const bool branch_taken_0x1817e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817e4) {
            ctx->pc = 0x18181Cu;
            return;
        }
    }
    ctx->pc = 0x1817ECu;
    // 0x1817ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1817f0: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1817f4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1817f8: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1817fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1817fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x181800: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x181800u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    ctx->pc = 0x181804u;
}
