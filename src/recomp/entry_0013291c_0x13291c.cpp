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

// Function: entry_0013291c
// Address: 0x13291c - 0x132930
void entry_0013291c_0x13291c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013291c_0x13291c");
#endif

    ctx->pc = 0x13291cu;

    // 0x13291c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x132920: 0x2861008a  slti        $at, $v1, 0x8A
    ctx->pc = 0x132920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)138) ? 1 : 0);
    // 0x132924: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x132924u;
    {
        const bool branch_taken_0x132924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x132924) {
            ctx->pc = 0x132930u;
            return;
        }
    }
    ctx->pc = 0x13292Cu;
    // 0x13292c: 0x64060089  daddiu      $a2, $zero, 0x89
    ctx->pc = 0x13292cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)137);
    ctx->pc = 0x132930u;
}
