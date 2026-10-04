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

// Function: entry_0012b748
// Address: 0x12b748 - 0x12b768
void entry_0012b748_0x12b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b748_0x12b748");
#endif

    ctx->pc = 0x12b748u;

    // 0x12b748: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12b748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b74c: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x12b74cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x12b750: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B750u;
    {
        const bool branch_taken_0x12b750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B750u;
        // 0x12b754: 0x2862001e  slti        $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b750) {
            ctx->pc = 0x12B768u;
            return;
        }
    }
    ctx->pc = 0x12B758u;
    // 0x12b758: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12b758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b75c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x12b760: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12B760u;
    {
        const bool branch_taken_0x12b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B760u;
        // 0x12b764: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b760) {
            ctx->pc = 0x12B790u;
            return;
        }
    }
    ctx->pc = 0x12B768u;
}
