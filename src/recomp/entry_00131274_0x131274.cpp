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

// Function: entry_00131274
// Address: 0x131274 - 0x13127c
void entry_00131274_0x131274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131274_0x131274");
#endif

    ctx->pc = 0x131274u;

    // 0x131274: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x131274u;
    {
        const bool branch_taken_0x131274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131274u;
        // 0x131278: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131274) {
            ctx->pc = 0x13132Cu;
            return;
        }
    }
    ctx->pc = 0x13127Cu;
}
