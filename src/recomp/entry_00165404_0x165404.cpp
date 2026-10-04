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

// Function: entry_00165404
// Address: 0x165404 - 0x16542c
void entry_00165404_0x165404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165404_0x165404");
#endif

    ctx->pc = 0x165404u;

    // 0x165404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165408: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x165408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x16540c: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x16540cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x165410: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x165410u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x165414: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x165414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x165418: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x165418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x16541c: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x16541cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x165420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165424u;
    {
        const bool branch_taken_0x165424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0xa38386a0  sb          $v1, -0x7960($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165424) {
            ctx->pc = 0x165430u;
            return;
        }
    }
    ctx->pc = 0x16542Cu;
}
