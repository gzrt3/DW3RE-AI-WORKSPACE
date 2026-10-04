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

// Function: entry_0023fc1c
// Address: 0x23fc1c - 0x23fc48
void entry_0023fc1c_0x23fc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fc1c_0x23fc1c");
#endif

    ctx->pc = 0x23fc1cu;

    // 0x23fc1c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x23fc20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x23fc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fc24: 0x15030008  bne         $t0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FC24u;
    {
        const bool branch_taken_0x23fc24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC24u;
        // 0x23fc28: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc24) {
            ctx->pc = 0x23FC48u;
            return;
        }
    }
    ctx->pc = 0x23FC2Cu;
    // 0x23fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fc30: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x23fc34: 0x8c2335fc  lw          $v1, 0x35FC($at)
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x23fc38: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FC38u;
    {
        const bool branch_taken_0x23fc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23fc38) {
            ctx->pc = 0x23FC48u;
            return;
        }
    }
    ctx->pc = 0x23FC40u;
    // 0x23fc40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23FC40u;
    {
        const bool branch_taken_0x23fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC40u;
        // 0x23fc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc40) {
            ctx->pc = 0x23FC58u;
            return;
        }
    }
    ctx->pc = 0x23FC48u;
}
