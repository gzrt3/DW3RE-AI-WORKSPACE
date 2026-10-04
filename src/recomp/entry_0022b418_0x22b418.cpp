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

// Function: entry_0022b418
// Address: 0x22b418 - 0x22b438
void entry_0022b418_0x22b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b418_0x22b418");
#endif

    switch (ctx->pc) {
        case 0x22b42cu: goto label_22b42c;
        default: break;
    }

    ctx->pc = 0x22b418u;

    // 0x22b418: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x22b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b41c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b420: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22b420u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b424: 0xc05ecd8  jal         func_17B360
    ctx->pc = 0x22B424u;
    SET_GPR_U32(ctx, 31, 0x22B42Cu);
    ctx->pc = 0x22B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B424u;
    // 0x22b428: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B424u, 0x22B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B42Cu;
label_22b42c:
    // 0x22b42c: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b42cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x22b430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b434: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x22b434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22b438u;
}
