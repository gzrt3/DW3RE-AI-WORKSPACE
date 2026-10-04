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

// Function: entry_00167bfc
// Address: 0x167bfc - 0x167c1c
void entry_00167bfc_0x167bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167bfc_0x167bfc");
#endif

    ctx->pc = 0x167bfcu;

    // 0x167bfc: 0x0  nop
    ctx->pc = 0x167bfcu;
    // NOP
    // 0x167c00: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x167c04: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x167C04u;
    {
        const bool branch_taken_0x167c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c04) {
            ctx->pc = 0x167CB8u;
            return;
        }
    }
    ctx->pc = 0x167C0Cu;
    // 0x167c0c: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167c10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167c14: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x167C14u;
    {
        const bool branch_taken_0x167c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c14) {
            ctx->pc = 0x167CB8u;
            return;
        }
    }
    ctx->pc = 0x167C1Cu;
}
