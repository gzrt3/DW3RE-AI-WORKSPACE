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

// Function: entry_001303d8
// Address: 0x1303d8 - 0x1303fc
void entry_001303d8_0x1303d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001303d8_0x1303d8");
#endif

    switch (ctx->pc) {
        case 0x1303f0u: goto label_1303f0;
        default: break;
    }

    ctx->pc = 0x1303d8u;

    // 0x1303d8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1303dc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1303e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1303e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1303e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e8: 0xc04e188  jal         func_138620
    ctx->pc = 0x1303E8u;
    SET_GPR_U32(ctx, 31, 0x1303F0u);
    ctx->pc = 0x1303ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303E8u;
    // 0x1303ec: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1303E8u, 0x1303F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F0u;
label_1303f0:
    // 0x1303f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1303f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1303f8: 0xa023a3eb  sb          $v1, -0x5C15($at)
    ctx->pc = 0x1303f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3EBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EBu, _value); } while (0);
    ctx->pc = 0x1303fcu;
}
