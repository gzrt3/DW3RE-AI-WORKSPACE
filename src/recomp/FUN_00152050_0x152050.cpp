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

// Function: FUN_00152050
// Address: 0x152050 - 0x15209c
void FUN_00152050_0x152050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152050_0x152050");
#endif

    switch (ctx->pc) {
        case 0x152098u: goto label_152098;
        default: break;
    }

    ctx->pc = 0x152050u;

    // 0x152050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x152058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15205c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152060: 0xdc830270  ld          $v1, 0x270($a0)
    ctx->pc = 0x152060u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x152064: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x152068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152068u;
    {
        const bool branch_taken_0x152068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152068u;
        // 0x15206c: 0x24060258  addiu       $a2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152068) {
            ctx->pc = 0x15207Cu;
            goto label_15207c;
        }
    }
    ctx->pc = 0x152070u;
    // 0x152070: 0x24c20096  addiu       $v0, $a2, 0x96
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 150));
    // 0x152074: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x152074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x152078: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152078u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_15207c:
    // 0x15207c: 0xa4a6027c  sh          $a2, 0x27C($a1)
    ctx->pc = 0x15207cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 636), (uint16_t)GPR_U32(ctx, 6));
    // 0x152080: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x152084: 0xa4a6027e  sh          $a2, 0x27E($a1)
    ctx->pc = 0x152084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 638), (uint16_t)GPR_U32(ctx, 6));
    // 0x152088: 0x8ca20198  lw          $v0, 0x198($a1)
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
    // 0x15208c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x15208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x152090: 0xc0751a4  jal         func_1D4690
    ctx->pc = 0x152090u;
    SET_GPR_U32(ctx, 31, 0x152098u);
    ctx->pc = 0x152094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152090u;
    // 0x152094: 0xaca20198  sw          $v0, 0x198($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4690u, 0x152090u, 0x152098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152098u;
label_152098:
    // 0x152098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15209cu;
}
