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

// Function: FUN_00157810
// Address: 0x157810 - 0x157840
void FUN_00157810_0x157810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157810_0x157810");
#endif

    ctx->pc = 0x157810u;

    // 0x157810: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x157810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x157814: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x157814u;
    {
        const bool branch_taken_0x157814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157814) {
            ctx->pc = 0x157840u;
            return;
        }
    }
    ctx->pc = 0x15781Cu;
    // 0x15781c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x157820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157824: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157824u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x157828: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x15782c: 0x832014  dsllv       $a0, $v1, $a0
    ctx->pc = 0x15782cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x157830: 0xdc231888  ld          $v1, 0x1888($at)
    ctx->pc = 0x157830u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x157834: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x157834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x157838: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x15783c: 0xfc231888  sd          $v1, 0x1888($at)
    ctx->pc = 0x15783cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B1888u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B1888u, _value); } while (0);
    ctx->pc = 0x157840u;
}
