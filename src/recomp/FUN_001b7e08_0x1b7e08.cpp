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

// Function: FUN_001b7e08
// Address: 0x1b7e08 - 0x1b7ea0
void FUN_001b7e08_0x1b7e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7e08_0x1b7e08");
#endif

    switch (ctx->pc) {
        case 0x1b7e20u: goto label_1b7e20;
        default: break;
    }

    ctx->pc = 0x1b7e08u;

    // 0x1b7e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7e0c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1b7e10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7e18: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7E18u;
    SET_GPR_U32(ctx, 31, 0x1B7E20u);
    ctx->pc = 0x1B7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E18u;
    // 0x1b7e1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7E18u, 0x1B7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E20u;
label_1b7e20:
    // 0x1b7e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e28: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1b7e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1b7e2c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7E2Cu;
    {
        const bool branch_taken_0x1b7e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E2Cu;
        // 0x1b7e30: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e2c) {
            ctx->pc = 0x1B7E9Cu;
            goto label_1b7e9c;
        }
    }
    ctx->pc = 0x1B7E34u;
    // 0x1b7e34: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7E34u;
    {
        const bool branch_taken_0x1b7e34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E34u;
        // 0x1b7e38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e34) {
            ctx->pc = 0x1B7EA0u;
            return;
        }
    }
    ctx->pc = 0x1B7E3Cu;
    // 0x1b7e3c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7e40: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7E40u;
    {
        const bool branch_taken_0x1b7e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e40) {
            ctx->pc = 0x1B7EA0u;
            return;
        }
    }
    ctx->pc = 0x1B7E48u;
    // 0x1b7e48: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B7E48u;
    {
        const bool branch_taken_0x1b7e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E48u;
        // 0x1b7e4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e48) {
            ctx->pc = 0x1B7EA0u;
            return;
        }
    }
    ctx->pc = 0x1B7E50u;
    // 0x1b7e50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e58: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7E58u;
    {
        const bool branch_taken_0x1b7e58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E58u;
        // 0x1b7e5c: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e58) {
            ctx->pc = 0x1B7EA0u;
            return;
        }
    }
    ctx->pc = 0x1B7E60u;
    // 0x1b7e60: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7E60u;
    {
        const bool branch_taken_0x1b7e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E60u;
        // 0x1b7e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e60) {
            ctx->pc = 0x1B7EA0u;
            return;
        }
    }
    ctx->pc = 0x1B7E68u;
    // 0x1b7e68: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x1b7e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1b7e6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E6Cu;
        // 0x1b7e70: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E88u;
            goto label_1b7e88;
        }
    }
    ctx->pc = 0x1B7E74u;
    // 0x1b7e74: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e78: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x1b7e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7E7Cu;
    {
        const bool branch_taken_0x1b7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E7Cu;
        // 0x1b7e80: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e7c) {
            ctx->pc = 0x1B7E94u;
            goto label_1b7e94;
        }
    }
    ctx->pc = 0x1B7E84u;
    // 0x1b7e84: 0x0  nop
    ctx->pc = 0x1b7e84u;
    // NOP
label_1b7e88:
    // 0x1b7e88: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b7e90: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1b7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1b7e94:
    // 0x1b7e94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7e98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b7e9c:
    // 0x1b7e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b7ea0u;
}
