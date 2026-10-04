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

// Function: entry_00181788
// Address: 0x181788 - 0x1817b0
void entry_00181788_0x181788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181788_0x181788");
#endif

    ctx->pc = 0x181788u;

    // 0x181788: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181788u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18178c: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x18178cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x181790: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x181790u;
    {
        const bool branch_taken_0x181790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181790) {
            ctx->pc = 0x1817C4u;
            return;
        }
    }
    ctx->pc = 0x181798u;
    // 0x181798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18179c: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1817a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1817a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1817a4: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1817a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1817a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1817ac: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1817acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    ctx->pc = 0x1817b0u;
}
