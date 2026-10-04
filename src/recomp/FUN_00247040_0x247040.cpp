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

// Function: FUN_00247040
// Address: 0x247040 - 0x247088
void FUN_00247040_0x247040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00247040_0x247040");
#endif

    switch (ctx->pc) {
        case 0x247084u: goto label_247084;
        default: break;
    }

    ctx->pc = 0x247040u;

    // 0x247040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247044: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x247048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24704c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x247050: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x247054: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x247054u;
    {
        const bool branch_taken_0x247054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247054) {
            ctx->pc = 0x247064u;
            goto label_247064;
        }
    }
    ctx->pc = 0x24705Cu;
    // 0x24705c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24705Cu;
    {
        const bool branch_taken_0x24705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24705Cu;
        // 0x247060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24705c) {
            ctx->pc = 0x247088u;
            return;
        }
    }
    ctx->pc = 0x247064u;
label_247064:
    // 0x247064: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x247064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x247068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x247068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24706c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247070: 0xe4801084  swc1        $f0, 0x1084($a0)
    ctx->pc = 0x247070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4228), bits); }
    // 0x247074: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x247074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x247078: 0x8c841080  lw          $a0, 0x1080($a0)
    ctx->pc = 0x247078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x24707c: 0xc18d864  jal         func_636190
    ctx->pc = 0x24707Cu;
    SET_GPR_U32(ctx, 31, 0x247084u);
    ctx->pc = 0x247080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24707Cu;
    // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636190u, 0x24707Cu, 0x247084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x247088u;
}
