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

// Function: entry_0023d560
// Address: 0x23d560 - 0x23d590
void entry_0023d560_0x23d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d560_0x23d560");
#endif

    ctx->pc = 0x23d560u;

label_23d560:
    // 0x23d560: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x23D560u;
    {
        const bool branch_taken_0x23d560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d560) {
            ctx->pc = 0x23D5ACu;
            return;
        }
    }
    ctx->pc = 0x23D568u;
    // 0x23d568: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d56c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d570: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23d574: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d578: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23d57c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D57Cu;
    {
        const bool branch_taken_0x23d57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D57Cu;
        // 0x23d580: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d57c) {
            ctx->pc = 0x23D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D584u;
    // 0x23d584: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D588u;
    {
        const bool branch_taken_0x23d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d588) {
            ctx->pc = 0x23D5ACu;
            return;
        }
    }
    ctx->pc = 0x23D590u;
}
