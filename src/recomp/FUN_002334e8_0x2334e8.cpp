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

// Function: FUN_002334e8
// Address: 0x2334e8 - 0x233518
void FUN_002334e8_0x2334e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002334e8_0x2334e8");
#endif

    switch (ctx->pc) {
        case 0x233514u: goto label_233514;
        default: break;
    }

    ctx->pc = 0x2334e8u;

    // 0x2334e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2334e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2334ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2334ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2334f0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2334f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2334f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2334f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2334fc: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2334fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x233500: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x233500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x233504: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x233504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x233508: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x233508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x23350c: 0xc08cc22  jal         func_233088
    ctx->pc = 0x23350Cu;
    SET_GPR_U32(ctx, 31, 0x233514u);
    ctx->pc = 0x233510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23350Cu;
    // 0x233510: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233088u, 0x23350Cu, 0x233514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233514u;
label_233514:
    // 0x233514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x233514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x233518u;
}
