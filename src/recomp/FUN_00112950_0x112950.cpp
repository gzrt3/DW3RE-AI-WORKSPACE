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

// Function: FUN_00112950
// Address: 0x112950 - 0x1129a0
void FUN_00112950_0x112950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112950_0x112950");
#endif

    switch (ctx->pc) {
        case 0x112974u: goto label_112974;
        case 0x112988u: goto label_112988;
        case 0x11299cu: goto label_11299c;
        default: break;
    }

    ctx->pc = 0x112950u;

    // 0x112950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x112958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11295c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112960: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x112964: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112964u;
    {
        const bool branch_taken_0x112964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112964) {
            ctx->pc = 0x112974u;
            goto label_112974;
        }
    }
    ctx->pc = 0x11296Cu;
    // 0x11296c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x11296Cu;
    SET_GPR_U32(ctx, 31, 0x112974u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x11296Cu, 0x112974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112974u;
label_112974:
    // 0x112974: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x112974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x112978: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112978u;
    {
        const bool branch_taken_0x112978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112978) {
            ctx->pc = 0x112988u;
            goto label_112988;
        }
    }
    ctx->pc = 0x112980u;
    // 0x112980: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112980u;
    SET_GPR_U32(ctx, 31, 0x112988u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112980u, 0x112988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112988u;
label_112988:
    // 0x112988: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x112988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11298c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11298Cu;
    {
        const bool branch_taken_0x11298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11298c) {
            ctx->pc = 0x11299Cu;
            goto label_11299c;
        }
    }
    ctx->pc = 0x112994u;
    // 0x112994: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112994u;
    SET_GPR_U32(ctx, 31, 0x11299Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112994u, 0x11299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11299Cu;
label_11299c:
    // 0x11299c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11299cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1129a0u;
}
