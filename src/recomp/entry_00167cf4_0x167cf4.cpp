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

// Function: entry_00167cf4
// Address: 0x167cf4 - 0x167d1c
void entry_00167cf4_0x167cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167cf4_0x167cf4");
#endif

    ctx->pc = 0x167cf4u;

    // 0x167cf4: 0x0  nop
    ctx->pc = 0x167cf4u;
    // NOP
    // 0x167cf8: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x167cfc: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
    // 0x167d00: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x167d04: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x167d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x167d0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x167D0Cu;
    {
        const bool branch_taken_0x167d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d0c) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167D14u;
    // 0x167d14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D88u;
            return;
        }
    }
    ctx->pc = 0x167D1Cu;
}
