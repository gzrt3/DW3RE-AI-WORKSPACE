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

// Function: entry_0021f5c0
// Address: 0x21f5c0 - 0x21f5f0
void entry_0021f5c0_0x21f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f5c0_0x21f5c0");
#endif

    ctx->pc = 0x21f5c0u;

    // 0x21f5c0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21f5c4: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21f5c8: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x21f5cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x21f5d4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f5d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f5d8: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F5F0u;
            return;
        }
    }
    ctx->pc = 0x21F5E0u;
    // 0x21f5e0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x21f5e4: 0x184182a  slt         $v1, $t4, $a0
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21f5e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F5A8u;
            return;
        }
    }
    ctx->pc = 0x21F5F0u;
}
