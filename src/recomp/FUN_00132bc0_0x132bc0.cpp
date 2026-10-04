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

// Function: FUN_00132bc0
// Address: 0x132bc0 - 0x132bf4
void FUN_00132bc0_0x132bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132bc0_0x132bc0");
#endif

    switch (ctx->pc) {
        case 0x132bf0u: goto label_132bf0;
        default: break;
    }

    ctx->pc = 0x132bc0u;

    // 0x132bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132bc8: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x132bcc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x132bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132bd0: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x132bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132bd4: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x132bd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x132bd8: 0x9087000a  lbu         $a3, 0xA($a0)
    ctx->pc = 0x132bd8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x132bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x132bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132be0: 0x0  nop
    ctx->pc = 0x132be0u;
    // NOP
    // 0x132be4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x132be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x132be8: 0xc04cb00  jal         func_132C00
    ctx->pc = 0x132BE8u;
    SET_GPR_U32(ctx, 31, 0x132BF0u);
    ctx->pc = 0x132BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BE8u;
    // 0x132bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132C00u, 0x132BE8u, 0x132BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BF0u;
label_132bf0:
    // 0x132bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x132bf4u;
}
