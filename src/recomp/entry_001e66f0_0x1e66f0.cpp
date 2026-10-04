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

// Function: entry_001e66f0
// Address: 0x1e66f0 - 0x1e6718
void entry_001e66f0_0x1e66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e66f0_0x1e66f0");
#endif

    ctx->pc = 0x1e66f0u;

    // 0x1e66f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e66f4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E66F4u;
    {
        const bool branch_taken_0x1e66f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e66f4) {
            ctx->pc = 0x1E6718u;
            return;
        }
    }
    ctx->pc = 0x1E66FCu;
    // 0x1e66fc: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1e6700: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e6704: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e6704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6708: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e6708u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e670c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E670Cu;
    {
        const bool branch_taken_0x1e670c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E670Cu;
        // 0x1e6710: 0xaf828e38  sw          $v0, -0x71C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e670c) {
            ctx->pc = 0x1E6718u;
            return;
        }
    }
    ctx->pc = 0x1E6714u;
    // 0x1e6714: 0xaf808e40  sw          $zero, -0x71C0($gp)
    ctx->pc = 0x1e6714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 0));
    ctx->pc = 0x1e6718u;
}
