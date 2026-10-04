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

// Function: entry_001958ec
// Address: 0x1958ec - 0x195900
void entry_001958ec_0x1958ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958ec_0x1958ec");
#endif

    ctx->pc = 0x1958ecu;

    // 0x1958ec: 0x0  nop
    ctx->pc = 0x1958ecu;
    // NOP
    // 0x1958f0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1958f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1958f4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1958f8: 0x1483ffe1  bne         $a0, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195880u;
            return;
        }
    }
    ctx->pc = 0x195900u;
}
