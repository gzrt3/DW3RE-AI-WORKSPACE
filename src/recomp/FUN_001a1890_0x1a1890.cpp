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

// Function: FUN_001a1890
// Address: 0x1a1890 - 0x1a18cc
void FUN_001a1890_0x1a1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1890_0x1a1890");
#endif

    switch (ctx->pc) {
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18bcu: goto label_1a18bc;
        default: break;
    }

    ctx->pc = 0x1a1890u;

    // 0x1a1890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a189c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a18a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a18a4: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A18A4u;
    SET_GPR_U32(ctx, 31, 0x1A18ACu);
    ctx->pc = 0x1A18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18A4u;
    // 0x1a18a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A18A4u, 0x1A18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18ACu;
label_1a18ac:
    // 0x1a18ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a18acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b4: 0xc0685ea  jal         func_1A17A8
    ctx->pc = 0x1A18B4u;
    SET_GPR_U32(ctx, 31, 0x1A18BCu);
    ctx->pc = 0x1A18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18B4u;
    // 0x1a18b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A17A8u, 0x1A18B4u, 0x1A18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18BCu;
label_1a18bc:
    // 0x1a18bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a18bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a18c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a18c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a18c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a18c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a18ccu;
}
