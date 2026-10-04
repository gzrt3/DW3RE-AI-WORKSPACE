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

// Function: entry_0011144c
// Address: 0x11144c - 0x11146c
void entry_0011144c_0x11144c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011144c_0x11144c");
#endif

    ctx->pc = 0x11144cu;

    // 0x11144c: 0x906b000d  lbu         $t3, 0xD($v1)
    ctx->pc = 0x11144cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x111450: 0x906a0006  lbu         $t2, 0x6($v1)
    ctx->pc = 0x111450u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x111454: 0x90660007  lbu         $a2, 0x7($v1)
    ctx->pc = 0x111454u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x111458: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x111458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x11145c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11145Cu;
    {
        const bool branch_taken_0x11145c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x111460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11145Cu;
        // 0x111460: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11145c) {
            ctx->pc = 0x11146Cu;
            return;
        }
    }
    ctx->pc = 0x111464u;
    // 0x111464: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x111464u;
    {
        const bool branch_taken_0x111464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111464u;
        // 0x111468: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111464) {
            ctx->pc = 0x11146Cu;
            return;
        }
    }
    ctx->pc = 0x11146Cu;
}
