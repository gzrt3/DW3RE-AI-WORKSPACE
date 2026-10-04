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

// Function: FUN_00122330
// Address: 0x122330 - 0x12236c
void FUN_00122330_0x122330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122330_0x122330");
#endif

    ctx->pc = 0x122330u;

    // 0x122330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x122334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x122338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12233c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12233cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x122340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122344: 0xc4800300  lwc1        $f0, 0x300($a0)
    ctx->pc = 0x122344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12234c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x122350: 0xc4800300  lwc1        $f0, 0x300($a0)
    ctx->pc = 0x122350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122354: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x122358: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x122358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x12235c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x12235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x122360: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x122360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122364: 0xc066e02  jal         func_19B808
    ctx->pc = 0x122364u;
    SET_GPR_U32(ctx, 31, 0x12236Cu);
    ctx->pc = 0x122368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122364u;
    // 0x122368: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x122364u, 0x12236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12236Cu;
}
