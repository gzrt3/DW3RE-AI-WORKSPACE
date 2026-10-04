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

// Function: entry_00220268
// Address: 0x220268 - 0x220290
void entry_00220268_0x220268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220268_0x220268");
#endif

    ctx->pc = 0x220268u;

    // 0x220268: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x220268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x22026c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22026Cu;
    {
        const bool branch_taken_0x22026c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x22026c) {
            ctx->pc = 0x2202ACu;
            return;
        }
    }
    ctx->pc = 0x220274u;
    // 0x220274: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x220278: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x22027c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22027Cu;
    {
        const bool branch_taken_0x22027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22027Cu;
        // 0x220280: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22027c) {
            ctx->pc = 0x220290u;
            return;
        }
    }
    ctx->pc = 0x220284u;
    // 0x220284: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220284u;
    {
        const bool branch_taken_0x220284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220284u;
        // 0x220288: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220284) {
            ctx->pc = 0x220290u;
            return;
        }
    }
    ctx->pc = 0x22028Cu;
    // 0x22028c: 0xa503000a  sh          $v1, 0xA($t0)
    ctx->pc = 0x22028cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x220290u;
}
