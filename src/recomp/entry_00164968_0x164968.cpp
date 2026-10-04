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

// Function: entry_00164968
// Address: 0x164968 - 0x164974
void entry_00164968_0x164968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164968_0x164968");
#endif

    ctx->pc = 0x164968u;

    // 0x164968: 0xaf868680  sw          $a2, -0x7980($gp)
    ctx->pc = 0x164968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 6));
    // 0x16496c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16496Cu;
    {
        const bool branch_taken_0x16496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16496Cu;
        // 0x164970: 0xaf87867c  sw          $a3, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16496c) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164974u;
}
