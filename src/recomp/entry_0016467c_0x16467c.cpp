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

// Function: entry_0016467c
// Address: 0x16467c - 0x164688
void entry_0016467c_0x16467c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016467c_0x16467c");
#endif

    ctx->pc = 0x16467cu;

    // 0x16467c: 0x8f838654  lw          $v1, -0x79AC($gp)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
    // 0x164680: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164680u;
    {
        const bool branch_taken_0x164680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164680u;
        // 0x164684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164680) {
            ctx->pc = 0x164698u;
            return;
        }
    }
    ctx->pc = 0x164688u;
}
