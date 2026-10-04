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

// Function: entry_001e936c
// Address: 0x1e936c - 0x1e93a4
void entry_001e936c_0x1e936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e936c_0x1e936c");
#endif

    switch (ctx->pc) {
        case 0x1e9384u: goto label_1e9384;
        default: break;
    }

    ctx->pc = 0x1e936cu;

    // 0x1e936c: 0x0  nop
    ctx->pc = 0x1e936cu;
    // NOP
    // 0x1e9370: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e9374: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e9378: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1e937c: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x1E937Cu;
    SET_GPR_U32(ctx, 31, 0x1E9384u);
    ctx->pc = 0x1E9380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E937Cu;
    // 0x1e9380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x1E937Cu, 0x1E9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9384u;
label_1e9384:
    // 0x1e9384: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1e9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e938c: 0x0  nop
    ctx->pc = 0x1e938cu;
    // NOP
    // 0x1e9390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9390u;
    {
        const bool branch_taken_0x1e9390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9390) {
            ctx->pc = 0x1E93A4u;
            return;
        }
    }
    ctx->pc = 0x1E9398u;
    // 0x1e9398: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1e9398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e939c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E939Cu;
        // 0x1e93a0: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93B4u;
            return;
        }
    }
    ctx->pc = 0x1E93A4u;
}
