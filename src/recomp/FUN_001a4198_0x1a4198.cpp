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

// Function: FUN_001a4198
// Address: 0x1a4198 - 0x1a421c
void FUN_001a4198_0x1a4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4198_0x1a4198");
#endif

    switch (ctx->pc) {
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41f0u: goto label_1a41f0;
        default: break;
    }

    ctx->pc = 0x1a4198u;

    // 0x1a4198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a419c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a41a0: 0xc06904c  jal         func_1A4130
    ctx->pc = 0x1A41A0u;
    SET_GPR_U32(ctx, 31, 0x1A41A8u);
    ctx->pc = 0x1A41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41A0u;
    // 0x1a41a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4130u, 0x1A41A0u, 0x1A41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41A8u;
label_1a41a8:
    // 0x1a41a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a41ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a41acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a41b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a41b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1a41b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a41b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a41b8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1a41bc: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a41bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a41c0:
    // 0x1a41c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a41c4: 0x0  nop
    ctx->pc = 0x1a41c4u;
    // NOP
    // 0x1a41c8: 0x0  nop
    ctx->pc = 0x1a41c8u;
    // NOP
    // 0x1a41cc: 0x0  nop
    ctx->pc = 0x1a41ccu;
    // NOP
    // 0x1a41d0: 0x0  nop
    ctx->pc = 0x1a41d0u;
    // NOP
    // 0x1a41d4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A41D4u;
    {
        const bool branch_taken_0x1a41d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a41d4) {
            ctx->pc = 0x1A41C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a41c0;
        }
    }
    ctx->pc = 0x1A41DCu;
    // 0x1a41dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a41e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a41e4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a41e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a41e8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a41e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a41ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a41ecu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_1a41f0:
    // 0x1a41f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a41f4: 0x0  nop
    ctx->pc = 0x1a41f4u;
    // NOP
    // 0x1a41f8: 0x0  nop
    ctx->pc = 0x1a41f8u;
    // NOP
    // 0x1a41fc: 0x0  nop
    ctx->pc = 0x1a41fcu;
    // NOP
    // 0x1a4200: 0x0  nop
    ctx->pc = 0x1a4200u;
    // NOP
    // 0x1a4204: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4204u;
    {
        const bool branch_taken_0x1a4204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4204) {
            ctx->pc = 0x1A41F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a41f0;
        }
    }
    ctx->pc = 0x1A420Cu;
    // 0x1a420c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1a4210: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4214: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
    // 0x1a4218: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    ctx->pc = 0x1a421cu;
}
