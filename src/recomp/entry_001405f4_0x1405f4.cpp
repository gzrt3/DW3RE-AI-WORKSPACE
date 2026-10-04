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

// Function: entry_001405f4
// Address: 0x1405f4 - 0x140618
void entry_001405f4_0x1405f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001405f4_0x1405f4");
#endif

    ctx->pc = 0x1405f4u;

    // 0x1405f4: 0x860301aa  lh          $v1, 0x1AA($s0)
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 426)));
    // 0x1405f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1405fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140600: 0xa60301aa  sh          $v1, 0x1AA($s0)
    ctx->pc = 0x140600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 426), (uint16_t)GPR_U32(ctx, 3));
    // 0x140604: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x140604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x140608: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14060c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14060Cu;
    {
        const bool branch_taken_0x14060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14060c) {
            ctx->pc = 0x140618u;
            return;
        }
    }
    ctx->pc = 0x140614u;
    // 0x140614: 0xa60001ac  sh          $zero, 0x1AC($s0)
    ctx->pc = 0x140614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x140618u;
}
