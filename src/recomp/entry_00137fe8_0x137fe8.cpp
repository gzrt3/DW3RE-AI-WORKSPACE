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

// Function: entry_00137fe8
// Address: 0x137fe8 - 0x137ff8
void entry_00137fe8_0x137fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137fe8_0x137fe8");
#endif

    ctx->pc = 0x137fe8u;

    // 0x137fe8: 0x25c30004  addiu       $v1, $t6, 0x4
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x137fec: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x137fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x137ff0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x137ff4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x137ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x137ff8u;
}
