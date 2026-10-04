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

// Function: FUN_001d57a0
// Address: 0x1d57a0 - 0x1d57c0
void FUN_001d57a0_0x1d57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d57a0_0x1d57a0");
#endif

    switch (ctx->pc) {
        case 0x1d57bcu: goto label_1d57bc;
        default: break;
    }

    ctx->pc = 0x1d57a0u;

    // 0x1d57a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d57a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d57a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d57ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d57acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d57b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d57b4: 0xc050f08  jal         func_143C20
    ctx->pc = 0x1D57B4u;
    SET_GPR_U32(ctx, 31, 0x1D57BCu);
    ctx->pc = 0x1D57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57B4u;
    // 0x1d57b8: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D57B4u, 0x1D57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d57c0u;
}
