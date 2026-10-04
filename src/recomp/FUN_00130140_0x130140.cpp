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

// Function: FUN_00130140
// Address: 0x130140 - 0x130190
void FUN_00130140_0x130140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130140_0x130140");
#endif

    switch (ctx->pc) {
        case 0x130160u: goto label_130160;
        case 0x130174u: goto label_130174;
        default: break;
    }

    ctx->pc = 0x130140u;

    // 0x130140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130148: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x130148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13014c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13014Cu;
    {
        const bool branch_taken_0x13014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13014c) {
            ctx->pc = 0x130168u;
            goto label_130168;
        }
    }
    ctx->pc = 0x130154u;
    // 0x130154: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x130158: 0xc07e694  jal         func_1F9A50
    ctx->pc = 0x130158u;
    SET_GPR_U32(ctx, 31, 0x130160u);
    ctx->pc = 0x13015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130158u;
    // 0x13015c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9A50u, 0x130158u, 0x130160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130160u;
label_130160:
    // 0x130160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130160u;
    {
        const bool branch_taken_0x130160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130160) {
            ctx->pc = 0x130174u;
            goto label_130174;
        }
    }
    ctx->pc = 0x130168u;
label_130168:
    // 0x130168: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x130168u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13016c: 0xc07e7c4  jal         func_1F9F10
    ctx->pc = 0x13016Cu;
    SET_GPR_U32(ctx, 31, 0x130174u);
    ctx->pc = 0x130170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13016Cu;
    // 0x130170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F10u, 0x13016Cu, 0x130174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130174u;
label_130174:
    // 0x130174: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130178: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x130178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x13017c: 0x8c24a3e0  lw          $a0, -0x5C20($at)
    ctx->pc = 0x13017cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x130180: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x130180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130184: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x130188: 0xac23a3e0  sw          $v1, -0x5C20($at)
    ctx->pc = 0x130188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    // 0x13018c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x130190u;
}
