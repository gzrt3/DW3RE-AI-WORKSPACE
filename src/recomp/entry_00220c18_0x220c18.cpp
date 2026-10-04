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

// Function: entry_00220c18
// Address: 0x220c18 - 0x220c2c
void entry_00220c18_0x220c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220c18_0x220c18");
#endif

    ctx->pc = 0x220c18u;

    // 0x220c18: 0x91230010  lbu         $v1, 0x10($t1)
    ctx->pc = 0x220c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x220c1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x220C1Cu;
    {
        const bool branch_taken_0x220c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220c1c) {
            ctx->pc = 0x220C40u;
            return;
        }
    }
    ctx->pc = 0x220C24u;
    // 0x220c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x220C24u;
    {
        const bool branch_taken_0x220c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C24u;
        // 0x220c28: 0xa1270010  sb          $a3, 0x10($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c24) {
            ctx->pc = 0x220C40u;
            return;
        }
    }
    ctx->pc = 0x220C2Cu;
}
