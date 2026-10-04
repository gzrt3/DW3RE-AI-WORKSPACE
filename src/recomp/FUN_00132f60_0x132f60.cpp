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

// Function: FUN_00132f60
// Address: 0x132f60 - 0x132f98
void FUN_00132f60_0x132f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132f60_0x132f60");
#endif

    switch (ctx->pc) {
        case 0x132f94u: goto label_132f94;
        default: break;
    }

    ctx->pc = 0x132f60u;

    // 0x132f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132f64: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x132f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132f6c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x132f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x132f70: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x132f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132f74: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x132f74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132f78: 0x84870008  lh          $a3, 0x8($a0)
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x132f7c: 0x9025a405  lbu         $a1, -0x5BFB($at)
    ctx->pc = 0x132f7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A405u));
    // 0x132f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132f84: 0x0  nop
    ctx->pc = 0x132f84u;
    // NOP
    // 0x132f88: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x132f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x132f8c: 0xc04cbf8  jal         func_132FE0
    ctx->pc = 0x132F8Cu;
    SET_GPR_U32(ctx, 31, 0x132F94u);
    ctx->pc = 0x132F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F8Cu;
    // 0x132f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FE0u, 0x132F8Cu, 0x132F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F94u;
label_132f94:
    // 0x132f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x132f98u;
}
