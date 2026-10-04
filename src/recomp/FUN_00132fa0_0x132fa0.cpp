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

// Function: FUN_00132fa0
// Address: 0x132fa0 - 0x132fd4
void FUN_00132fa0_0x132fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132fa0_0x132fa0");
#endif

    switch (ctx->pc) {
        case 0x132fd0u: goto label_132fd0;
        default: break;
    }

    ctx->pc = 0x132fa0u;

    // 0x132fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132fa8: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x132fac: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x132facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132fb0: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x132fb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132fb4: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x132fb8: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x132fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132fc0: 0x0  nop
    ctx->pc = 0x132fc0u;
    // NOP
    // 0x132fc4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x132fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x132fc8: 0xc04cbf8  jal         func_132FE0
    ctx->pc = 0x132FC8u;
    SET_GPR_U32(ctx, 31, 0x132FD0u);
    ctx->pc = 0x132FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FC8u;
    // 0x132fcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FE0u, 0x132FC8u, 0x132FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FD0u;
label_132fd0:
    // 0x132fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x132fd4u;
}
