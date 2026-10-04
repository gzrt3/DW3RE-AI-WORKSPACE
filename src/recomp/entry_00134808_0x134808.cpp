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

// Function: entry_00134808
// Address: 0x134808 - 0x13481c
void entry_00134808_0x134808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134808_0x134808");
#endif

    ctx->pc = 0x134808u;

    // 0x134808: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x134808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13480c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13480Cu;
    {
        const bool branch_taken_0x13480c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x13480c) {
            ctx->pc = 0x13481Cu;
            return;
        }
    }
    ctx->pc = 0x134814u;
    // 0x134814: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x134814u;
    {
        const bool branch_taken_0x134814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0xa7b1003e  sh          $s1, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134814) {
            ctx->pc = 0x13488Cu;
            return;
        }
    }
    ctx->pc = 0x13481Cu;
}
