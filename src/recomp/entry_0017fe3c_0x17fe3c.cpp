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

// Function: entry_0017fe3c
// Address: 0x17fe3c - 0x17fe4c
void entry_0017fe3c_0x17fe3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe3c_0x17fe3c");
#endif

    ctx->pc = 0x17fe3cu;

    // 0x17fe3c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe40: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x17fe44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17FE44u;
    {
        const bool branch_taken_0x17fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE44u;
        // 0x17fe48: 0xac830090  sw          $v1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe44) {
            ctx->pc = 0x17FE84u;
            return;
        }
    }
    ctx->pc = 0x17FE4Cu;
}
