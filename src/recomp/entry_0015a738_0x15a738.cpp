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

// Function: entry_0015a738
// Address: 0x15a738 - 0x15a764
void entry_0015a738_0x15a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a738_0x15a738");
#endif

    ctx->pc = 0x15a738u;

    // 0x15a738: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15A738u;
    {
        const bool branch_taken_0x15a738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A738u;
        // 0x15a73c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a738) {
            ctx->pc = 0x15A764u;
            return;
        }
    }
    ctx->pc = 0x15A740u;
    // 0x15a740: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a744: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x15a748: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15a748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x15a74c: 0x246354c0  addiu       $v1, $v1, 0x54C0
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
    // 0x15a750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a754: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a758: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a75c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A75Cu;
    {
        const bool branch_taken_0x15a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A75Cu;
        // 0x15a760: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a75c) {
            ctx->pc = 0x15A768u;
            return;
        }
    }
    ctx->pc = 0x15A764u;
}
