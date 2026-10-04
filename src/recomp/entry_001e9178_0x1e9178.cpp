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

// Function: entry_001e9178
// Address: 0x1e9178 - 0x1e918c
void entry_001e9178_0x1e9178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9178_0x1e9178");
#endif

    ctx->pc = 0x1e9178u;

    // 0x1e9178: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x1e9178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
    // 0x1e917c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E917Cu;
    {
        const bool branch_taken_0x1e917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E917Cu;
        // 0x1e9180: 0x2483ffc4  addiu       $v1, $a0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e917c) {
            ctx->pc = 0x1E918Cu;
            return;
        }
    }
    ctx->pc = 0x1E9184u;
    // 0x1e9184: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x1e9184u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e9188: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1e9188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x1e918cu;
}
