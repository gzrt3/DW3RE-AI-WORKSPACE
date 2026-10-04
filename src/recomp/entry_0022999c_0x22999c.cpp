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

// Function: entry_0022999c
// Address: 0x22999c - 0x2299c8
void entry_0022999c_0x22999c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022999c_0x22999c");
#endif

    ctx->pc = 0x22999cu;

    // 0x22999c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2299a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2299a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2299A4u;
    {
        const bool branch_taken_0x2299a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299a4) {
            ctx->pc = 0x2299C8u;
            return;
        }
    }
    ctx->pc = 0x2299ACu;
    // 0x2299ac: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2299b0: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2299b4: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2299b8: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x2299b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2299bc: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2299c0: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x2299C0u;
    SET_GPR_U32(ctx, 31, 0x2299C8u);
    ctx->pc = 0x2299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C0u;
    // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2299C0u, 0x2299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C8u;
}
