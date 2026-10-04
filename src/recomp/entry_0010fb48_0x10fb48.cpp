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

// Function: entry_0010fb48
// Address: 0x10fb48 - 0x10fb60
void entry_0010fb48_0x10fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb48_0x10fb48");
#endif

    ctx->pc = 0x10fb48u;

    // 0x10fb48: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x10fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x10fb4c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x10fb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10fb50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB50u;
    {
        const bool branch_taken_0x10fb50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb50) {
            ctx->pc = 0x10FB60u;
            return;
        }
    }
    ctx->pc = 0x10FB58u;
    // 0x10fb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fb5c: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x10fb5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x10fb60u;
}
