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

// Function: entry_00201430
// Address: 0x201430 - 0x201450
void entry_00201430_0x201430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201430_0x201430");
#endif

    ctx->pc = 0x201430u;

    // 0x201430: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x201434: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201434u;
    {
        const bool branch_taken_0x201434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x30c30010  andi        $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201434) {
            ctx->pc = 0x201450u;
            return;
        }
    }
    ctx->pc = 0x20143Cu;
    // 0x20143c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x20143cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x201444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201448: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20144c: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x20144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    ctx->pc = 0x201450u;
}
