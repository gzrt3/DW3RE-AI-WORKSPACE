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

// Function: entry_002336c0
// Address: 0x2336c0 - 0x2336f8
void entry_002336c0_0x2336c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002336c0_0x2336c0");
#endif

    ctx->pc = 0x2336c0u;

label_2336c0:
    // 0x2336c0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x2336c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2336c8: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x2336cc: 0x0  nop
    ctx->pc = 0x2336ccu;
    // NOP
    // 0x2336d0: 0x0  nop
    ctx->pc = 0x2336d0u;
    // NOP
    // 0x2336d4: 0x0  nop
    ctx->pc = 0x2336d4u;
    // NOP
    // 0x2336d8: 0x0  nop
    ctx->pc = 0x2336d8u;
    // NOP
    // 0x2336dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2336DCu;
    {
        const bool branch_taken_0x2336dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336dc) {
            ctx->pc = 0x2336C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336c0;
        }
    }
    ctx->pc = 0x2336E4u;
    // 0x2336e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2336e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2336ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2336f0: 0x808cd36  j           func_2334D8
    ctx->pc = 0x2336F0u;
    ctx->pc = 0x2336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336F0u;
    // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D8u;
    FUN_002334d8_0x2334d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2336F8u;
}
