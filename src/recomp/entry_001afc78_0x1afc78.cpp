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

// Function: entry_001afc78
// Address: 0x1afc78 - 0x1afc88
void entry_001afc78_0x1afc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc78_0x1afc78");
#endif

    switch (ctx->pc) {
        case 0x1afc84u: goto label_1afc84;
        default: break;
    }

    ctx->pc = 0x1afc78u;

    // 0x1afc78: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1afc7c: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC84u);
    ctx->pc = 0x1AFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC7Cu;
    // 0x1afc80: 0x24848cc8  addiu       $a0, $a0, -0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC7Cu, 0x1AFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC84u;
label_1afc84:
    // 0x1afc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1afc88u;
}
