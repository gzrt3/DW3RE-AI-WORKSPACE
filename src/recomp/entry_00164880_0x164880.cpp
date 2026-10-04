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

// Function: entry_00164880
// Address: 0x164880 - 0x16488c
void entry_00164880_0x164880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164880_0x164880");
#endif

    ctx->pc = 0x164880u;

    // 0x164880: 0x8f87864c  lw          $a3, -0x79B4($gp)
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
    // 0x164884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164884u;
    {
        const bool branch_taken_0x164884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164884u;
        // 0x164888: 0x8f868650  lw          $a2, -0x79B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164884) {
            ctx->pc = 0x164894u;
            return;
        }
    }
    ctx->pc = 0x16488Cu;
}
