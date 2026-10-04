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

// Function: FUN_00196f10
// Address: 0x196f10 - 0x196f64
void FUN_00196f10_0x196f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196f10_0x196f10");
#endif

    switch (ctx->pc) {
        case 0x196f5cu: goto label_196f5c;
        default: break;
    }

    ctx->pc = 0x196f10u;

    // 0x196f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f20: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x196F20u;
    {
        const bool branch_taken_0x196f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F20u;
        // 0x196f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f20) {
            ctx->pc = 0x196F60u;
            goto label_196f60;
        }
    }
    ctx->pc = 0x196F28u;
    // 0x196f28: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x196f2c: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x196f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
    // 0x196f30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196F30u;
    {
        const bool branch_taken_0x196f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F30u;
        // 0x196f34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f30) {
            ctx->pc = 0x196F44u;
            goto label_196f44;
        }
    }
    ctx->pc = 0x196F38u;
    // 0x196f38: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x196f3c: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    // 0x196f40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x196f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_196f44:
    // 0x196f44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196f4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x196F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F4Cu;
        // 0x196f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x196F5Cu;
            goto label_196f5c;
        }
    }
    ctx->pc = 0x196F54u;
    // 0x196f54: 0xc0658b0  jal         func_1962C0
    ctx->pc = 0x196F54u;
    SET_GPR_U32(ctx, 31, 0x196F5Cu);
    ctx->pc = 0x1962C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1962C0u, 0x196F54u, 0x196F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F5Cu;
label_196f5c:
    // 0x196f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196f60:
    // 0x196f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x196f64u;
}
