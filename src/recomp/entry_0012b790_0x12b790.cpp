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

// Function: entry_0012b790
// Address: 0x12b790 - 0x12b7a4
void entry_0012b790_0x12b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b790_0x12b790");
#endif

    ctx->pc = 0x12b790u;

    // 0x12b790: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x12b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b794: 0xc6000250  lwc1        $f0, 0x250($s0)
    ctx->pc = 0x12b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b79c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12B79Cu;
    SET_GPR_U32(ctx, 31, 0x12B7A4u);
    ctx->pc = 0x12B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B79Cu;
    // 0x12b7a0: 0xe6000250  swc1        $f0, 0x250($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12B79Cu, 0x12B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7A4u;
}
