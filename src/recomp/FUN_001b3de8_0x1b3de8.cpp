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

// Function: FUN_001b3de8
// Address: 0x1b3de8 - 0x1b3e70
void FUN_001b3de8_0x1b3de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3de8_0x1b3de8");
#endif

    ctx->pc = 0x1b3de8u;

    // 0x1b3de8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1b3de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b3dec: 0x0  nop
    ctx->pc = 0x1b3decu;
    // NOP
    // 0x1b3df0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3df4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b3df8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1b3dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b3e04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b3e08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b3e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b3e0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3E0Cu;
    {
        const bool branch_taken_0x1b3e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e0c) {
            ctx->pc = 0x1B3E2Cu;
            goto label_1b3e2c;
        }
    }
    ctx->pc = 0x1B3E14u;
    // 0x1b3e14: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3E14u;
    {
        const bool branch_taken_0x1b3e14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E14u;
        // 0x1b3e18: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e14) {
            ctx->pc = 0x1B3E38u;
            goto label_1b3e38;
        }
    }
    ctx->pc = 0x1B3E1Cu;
    // 0x1b3e1c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1b3e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1b3e20: 0x0  nop
    ctx->pc = 0x1b3e20u;
    // NOP
    // 0x1b3e24: 0x0  nop
    ctx->pc = 0x1b3e24u;
    // NOP
    // 0x1b3e28: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b3e28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b3e2c:
    // 0x1b3e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E34u;
    // 0x1b3e34: 0x0  nop
    ctx->pc = 0x1b3e34u;
    // NOP
label_1b3e38:
    // 0x1b3e38: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x1b3e3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b3e40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b3e44: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1b3e48: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e50: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b3e54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b3e58: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1b3e5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b3e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e64: 0x0  nop
    ctx->pc = 0x1b3e64u;
    // NOP
    // 0x1b3e68: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1b3e6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1b3e70u;
}
