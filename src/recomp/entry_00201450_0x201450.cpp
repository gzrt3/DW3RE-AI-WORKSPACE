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

// Function: entry_00201450
// Address: 0x201450 - 0x20146c
void entry_00201450_0x201450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201450_0x201450");
#endif

    ctx->pc = 0x201450u;

    // 0x201450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201450u;
    {
        const bool branch_taken_0x201450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201450u;
        // 0x201454: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201450) {
            ctx->pc = 0x20146Cu;
            return;
        }
    }
    ctx->pc = 0x201458u;
    // 0x201458: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x20145c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x201460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201464: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x201464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x201468: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x201468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    ctx->pc = 0x20146cu;
}
