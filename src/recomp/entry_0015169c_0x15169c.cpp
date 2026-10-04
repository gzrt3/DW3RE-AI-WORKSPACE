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

// Function: entry_0015169c
// Address: 0x15169c - 0x1516bc
void entry_0015169c_0x15169c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015169c_0x15169c");
#endif

    ctx->pc = 0x15169cu;

    // 0x15169c: 0x92060249  lbu         $a2, 0x249($s0)
    ctx->pc = 0x15169cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x1516a0: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x1516a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1516a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1516A4u;
    {
        const bool branch_taken_0x1516a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516A4u;
        // 0x1516a8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516a4) {
            ctx->pc = 0x1516BCu;
            return;
        }
    }
    ctx->pc = 0x1516ACu;
    // 0x1516ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1516b0: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1516B0u;
    {
        const bool branch_taken_0x1516b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1516b0) {
            ctx->pc = 0x151764u;
            return;
        }
    }
    ctx->pc = 0x1516B8u;
    // 0x1516b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x1516bcu;
}
