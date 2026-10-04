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

// Function: entry_00241940
// Address: 0x241940 - 0x241990
void entry_00241940_0x241940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241940_0x241940");
#endif

    ctx->pc = 0x241940u;

    // 0x241940: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241940) {
            ctx->pc = 0x2419C4u;
            return;
        }
    }
    ctx->pc = 0x241948u;
    // 0x241948: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x24194c: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x24194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x241950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241954: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x241958: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x24195c: 0xac232384  sw          $v1, 0x2384($at)
    ctx->pc = 0x24195cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
    // 0x241960: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x241960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x241964: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x241964u;
    {
        const bool branch_taken_0x241964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x241964) {
            ctx->pc = 0x241990u;
            return;
        }
    }
    ctx->pc = 0x24196Cu;
    // 0x24196c: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x24196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
    // 0x241970: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241974: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241978: 0x8c252384  lw          $a1, 0x2384($at)
    ctx->pc = 0x241978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
    // 0x24197c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x241980: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x241984: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x241988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241988u;
    {
        const bool branch_taken_0x241988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241988u;
        // 0x24198c: 0xac232384  sw          $v1, 0x2384($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241988) {
            ctx->pc = 0x241994u;
            return;
        }
    }
    ctx->pc = 0x241990u;
}
