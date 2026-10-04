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

// Function: entry_00212614
// Address: 0x212614 - 0x212640
void entry_00212614_0x212614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212614_0x212614");
#endif

    ctx->pc = 0x212614u;

    // 0x212614: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x212614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x212618: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x21261c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x212620: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x212624: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212624u;
    {
        const bool branch_taken_0x212624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212624) {
            ctx->pc = 0x212640u;
            return;
        }
    }
    ctx->pc = 0x21262Cu;
    // 0x21262c: 0x1041814  dsllv       $v1, $a0, $t0
    ctx->pc = 0x21262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x212630: 0xdc2276f8  ld          $v0, 0x76F8($at)
    ctx->pc = 0x212630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 30456)));
    // 0x212634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x212638: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21263c: 0xfc2276f8  sd          $v0, 0x76F8($at)
    ctx->pc = 0x21263cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5876F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5876F8u, _value); } while (0);
    ctx->pc = 0x212640u;
}
