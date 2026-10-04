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

// Function: entry_0015a6f8
// Address: 0x15a6f8 - 0x15a738
void entry_0015a6f8_0x15a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a6f8_0x15a6f8");
#endif

    ctx->pc = 0x15a6f8u;

    // 0x15a6f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a6fc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15a700: 0x90254af2  lbu         $a1, 0x4AF2($at)
    ctx->pc = 0x15a700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334AF2u));
    // 0x15a704: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x15a708: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15a70c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a710: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a714: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x15a714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a718: 0x0  nop
    ctx->pc = 0x15a718u;
    // NOP
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
    // 0x15a720: 0x1810  mfhi        $v1
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15a724: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15a728: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15a72c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15A730u;
    {
        const bool branch_taken_0x15a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a730) {
            ctx->pc = 0x15A768u;
            return;
        }
    }
    ctx->pc = 0x15A738u;
}
