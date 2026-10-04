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

// Function: entry_00167be0
// Address: 0x167be0 - 0x167bfc
void entry_00167be0_0x167be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167be0_0x167be0");
#endif

    ctx->pc = 0x167be0u;

    // 0x167be0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167be4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167BE4u;
    {
        const bool branch_taken_0x167be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167be4) {
            ctx->pc = 0x167BFCu;
            return;
        }
    }
    ctx->pc = 0x167BECu;
    // 0x167bec: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167bf4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167BF4u;
    {
        const bool branch_taken_0x167bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bf4) {
            ctx->pc = 0x167C1Cu;
            return;
        }
    }
    ctx->pc = 0x167BFCu;
}
