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

// Function: entry_00167bbc
// Address: 0x167bbc - 0x167be0
void entry_00167bbc_0x167bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167bbc_0x167bbc");
#endif

    ctx->pc = 0x167bbcu;

    // 0x167bbc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x167bc0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x167bc4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x167bc8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BE0u;
            return;
        }
    }
    ctx->pc = 0x167BD0u;
    // 0x167bd0: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167bd8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x167BD8u;
    {
        const bool branch_taken_0x167bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bd8) {
            ctx->pc = 0x167C1Cu;
            return;
        }
    }
    ctx->pc = 0x167BE0u;
}
