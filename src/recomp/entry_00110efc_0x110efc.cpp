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

// Function: entry_00110efc
// Address: 0x110efc - 0x110f14
void entry_00110efc_0x110efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110efc_0x110efc");
#endif

    ctx->pc = 0x110efcu;

    // 0x110efc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110EFCu;
    {
        const bool branch_taken_0x110efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EFCu;
        // 0x110f00: 0xe83021  addu        $a2, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110efc) {
            ctx->pc = 0x110F14u;
            return;
        }
    }
    ctx->pc = 0x110F04u;
    // 0x110f04: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x110f08: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x110f08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110F0Cu;
    {
        const bool branch_taken_0x110f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F0Cu;
        // 0x110f10: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f0c) {
            ctx->pc = 0x110F20u;
            return;
        }
    }
    ctx->pc = 0x110F14u;
}
