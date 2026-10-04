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

// Function: entry_00176574
// Address: 0x176574 - 0x1765a8
void entry_00176574_0x176574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176574_0x176574");
#endif

    ctx->pc = 0x176574u;

    // 0x176574: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x176574u;
    {
        const bool branch_taken_0x176574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176574) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x17657Cu;
    // 0x17657c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176584: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x176588: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176588) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x176590u;
    // 0x176590: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
    // 0x176594: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176594u;
    {
        const bool branch_taken_0x176594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176594u;
        // 0x176598: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176594) {
            ctx->pc = 0x1765A8u;
            return;
        }
    }
    ctx->pc = 0x17659Cu;
    // 0x17659c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1765a0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765ACu;
            return;
        }
    }
    ctx->pc = 0x1765A8u;
}
