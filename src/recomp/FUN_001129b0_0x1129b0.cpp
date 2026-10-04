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

// Function: FUN_001129b0
// Address: 0x1129b0 - 0x112a64
void FUN_001129b0_0x1129b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001129b0_0x1129b0");
#endif

    switch (ctx->pc) {
        case 0x1129d4u: goto label_1129d4;
        case 0x1129e8u: goto label_1129e8;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a10u: goto label_112a10;
        case 0x112a24u: goto label_112a24;
        case 0x112a38u: goto label_112a38;
        case 0x112a4cu: goto label_112a4c;
        case 0x112a60u: goto label_112a60;
        default: break;
    }

    ctx->pc = 0x1129b0u;

    // 0x1129b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1129b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1129b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1129b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1129b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1129b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1129bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1129bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129c0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1129c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1129c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1129C4u;
    {
        const bool branch_taken_0x1129c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129c4) {
            ctx->pc = 0x1129D4u;
            goto label_1129d4;
        }
    }
    ctx->pc = 0x1129CCu;
    // 0x1129cc: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1129CCu;
    SET_GPR_U32(ctx, 31, 0x1129D4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1129CCu, 0x1129D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129D4u;
label_1129d4:
    // 0x1129d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1129d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1129d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1129D8u;
    {
        const bool branch_taken_0x1129d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129d8) {
            ctx->pc = 0x1129E8u;
            goto label_1129e8;
        }
    }
    ctx->pc = 0x1129E0u;
    // 0x1129e0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1129E0u;
    SET_GPR_U32(ctx, 31, 0x1129E8u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1129E0u, 0x1129E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129E8u;
label_1129e8:
    // 0x1129e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1129e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1129ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1129ECu;
    {
        const bool branch_taken_0x1129ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129ec) {
            ctx->pc = 0x1129FCu;
            goto label_1129fc;
        }
    }
    ctx->pc = 0x1129F4u;
    // 0x1129f4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1129F4u;
    SET_GPR_U32(ctx, 31, 0x1129FCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1129F4u, 0x1129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129FCu;
label_1129fc:
    // 0x1129fc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1129fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x112a00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A00u;
    {
        const bool branch_taken_0x112a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a00) {
            ctx->pc = 0x112A10u;
            goto label_112a10;
        }
    }
    ctx->pc = 0x112A08u;
    // 0x112a08: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A08u;
    SET_GPR_U32(ctx, 31, 0x112A10u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A08u, 0x112A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A10u;
label_112a10:
    // 0x112a10: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x112a14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A14u;
    {
        const bool branch_taken_0x112a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a14) {
            ctx->pc = 0x112A24u;
            goto label_112a24;
        }
    }
    ctx->pc = 0x112A1Cu;
    // 0x112a1c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A1Cu;
    SET_GPR_U32(ctx, 31, 0x112A24u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A1Cu, 0x112A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A24u;
label_112a24:
    // 0x112a24: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x112a28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A28u;
    {
        const bool branch_taken_0x112a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a28) {
            ctx->pc = 0x112A38u;
            goto label_112a38;
        }
    }
    ctx->pc = 0x112A30u;
    // 0x112a30: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A30u;
    SET_GPR_U32(ctx, 31, 0x112A38u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A30u, 0x112A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A38u;
label_112a38:
    // 0x112a38: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x112a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x112a3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A3Cu;
    {
        const bool branch_taken_0x112a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a3c) {
            ctx->pc = 0x112A4Cu;
            goto label_112a4c;
        }
    }
    ctx->pc = 0x112A44u;
    // 0x112a44: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A44u;
    SET_GPR_U32(ctx, 31, 0x112A4Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A44u, 0x112A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A4Cu;
label_112a4c:
    // 0x112a4c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x112a50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112A60u;
            goto label_112a60;
        }
    }
    ctx->pc = 0x112A58u;
    // 0x112a58: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A58u;
    SET_GPR_U32(ctx, 31, 0x112A60u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A58u, 0x112A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A60u;
label_112a60:
    // 0x112a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x112a64u;
}
