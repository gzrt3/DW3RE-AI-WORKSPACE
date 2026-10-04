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

// Function: entry_001fc278
// Address: 0x1fc278 - 0x1fc294
void entry_001fc278_0x1fc278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc278_0x1fc278");
#endif

    ctx->pc = 0x1fc278u;

    // 0x1fc278: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1fc27c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc280: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fc284: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc288: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc288u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1fc28c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC2D0u;
            return;
        }
    }
    ctx->pc = 0x1FC294u;
}
