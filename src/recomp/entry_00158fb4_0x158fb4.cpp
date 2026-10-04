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

// Function: entry_00158fb4
// Address: 0x158fb4 - 0x158fe0
void entry_00158fb4_0x158fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158fb4_0x158fb4");
#endif

    ctx->pc = 0x158fb4u;

    // 0x158fb4: 0x0  nop
    ctx->pc = 0x158fb4u;
    // NOP
    // 0x158fb8: 0xaa2021  addu        $a0, $a1, $t2
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x158fbc: 0x90830220  lbu         $v1, 0x220($a0)
    ctx->pc = 0x158fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x158fc0: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x158fc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x158FC4u;
    {
        const bool branch_taken_0x158fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fc4) {
            ctx->pc = 0x158FE0u;
            return;
        }
    }
    ctx->pc = 0x158FCCu;
    // 0x158fcc: 0x84830232  lh          $v1, 0x232($a0)
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x158fd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x158fd4: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x158fd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x158fdc: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x158fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x158fe0u;
}
