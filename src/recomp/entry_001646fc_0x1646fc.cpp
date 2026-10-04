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

// Function: entry_001646fc
// Address: 0x1646fc - 0x164720
void entry_001646fc_0x1646fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646fc_0x1646fc");
#endif

    ctx->pc = 0x1646fcu;

    // 0x1646fc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x1646fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x164700: 0x87868648  lh          $a2, -0x79B8($gp)
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164704: 0xa4460002  sh          $a2, 0x2($v0)
    ctx->pc = 0x164704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x164708: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x164708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x16470c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16470Cu;
    {
        const bool branch_taken_0x16470c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16470Cu;
        // 0x164710: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16470c) {
            ctx->pc = 0x164720u;
            return;
        }
    }
    ctx->pc = 0x164714u;
    // 0x164714: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x164714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x164718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164718u;
    {
        const bool branch_taken_0x164718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164718u;
        // 0x16471c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164718) {
            ctx->pc = 0x164728u;
            return;
        }
    }
    ctx->pc = 0x164720u;
}
