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

// Function: FUN_00125910
// Address: 0x125910 - 0x125958
void FUN_00125910_0x125910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125910_0x125910");
#endif

    switch (ctx->pc) {
        case 0x125944u: goto label_125944;
        default: break;
    }

    ctx->pc = 0x125910u;

    // 0x125910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125914: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x125914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x125918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12591c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12591cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125920: 0xc4810324  lwc1        $f1, 0x324($a0)
    ctx->pc = 0x125920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125928: 0xe4800324  swc1        $f0, 0x324($a0)
    ctx->pc = 0x125928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 804), bits); }
    // 0x12592c: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12592cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x125930: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x125930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x125934: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x125934u;
    {
        const bool branch_taken_0x125934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x125934) {
            ctx->pc = 0x12594Cu;
            goto label_12594c;
        }
    }
    ctx->pc = 0x12593Cu;
    // 0x12593c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12593Cu;
    SET_GPR_U32(ctx, 31, 0x125944u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12593Cu, 0x125944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125944u;
label_125944:
    // 0x125944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125944u;
    {
        const bool branch_taken_0x125944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125944u;
        // 0x125948: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125944) {
            ctx->pc = 0x125958u;
            return;
        }
    }
    ctx->pc = 0x12594Cu;
label_12594c:
    // 0x12594c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x125950: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x125950u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x125954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x125958u;
}
