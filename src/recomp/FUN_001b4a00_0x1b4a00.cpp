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

// Function: FUN_001b4a00
// Address: 0x1b4a00 - 0x1b4ab4
void FUN_001b4a00_0x1b4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4a00_0x1b4a00");
#endif

    switch (ctx->pc) {
        case 0x1b4a58u: goto label_1b4a58;
        default: break;
    }

    ctx->pc = 0x1b4a00u;

    // 0x1b4a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4a04: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1b4a04u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4a08: 0x44068000  mfc1        $a2, $f16
    ctx->pc = 0x1b4a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[16], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1b4a0c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b4a10: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x1b4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x1b4a14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4a18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4a1c: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1b4a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b4a20: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b4a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b4a24: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B4A24u;
    {
        const bool branch_taken_0x1b4a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A24u;
        // 0x1b4a28: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a24) {
            ctx->pc = 0x1B4AA8u;
            goto label_1b4aa8;
        }
    }
    ctx->pc = 0x1B4A2Cu;
    // 0x1b4a2c: 0x46008024  .word       0x46008024                   # cvt.w.s     $f0, $f16 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4a2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[16]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b4a30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b4a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b4a34: 0x0  nop
    ctx->pc = 0x1b4a34u;
    // NOP
    // 0x1b4a38: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B4A38u;
    {
        const bool branch_taken_0x1b4a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A38u;
        // 0x1b4a3c: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a38) {
            ctx->pc = 0x1B4AACu;
            goto label_1b4aac;
        }
    }
    ctx->pc = 0x1B4A40u;
    // 0x1b4a40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1b4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4a44: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1b4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b4a48: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4A48u;
    {
        const bool branch_taken_0x1b4a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a48) {
            ctx->pc = 0x1B4A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A48u;
            // 0x1b4a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A78u;
            goto label_1b4a78;
        }
    }
    ctx->pc = 0x1B4A50u;
    // 0x1b4a50: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B4A50u;
    SET_GPR_U32(ctx, 31, 0x1B4A58u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B4A50u, 0x1B4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A58u;
label_1b4a58:
    // 0x1b4a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4a60: 0x0  nop
    ctx->pc = 0x1b4a60u;
    // NOP
    // 0x1b4a64: 0x0  nop
    ctx->pc = 0x1b4a64u;
    // NOP
    // 0x1b4a68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b4a68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1b4a6c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1B4A6Cu;
    {
        const bool branch_taken_0x1b4a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A6Cu;
        // 0x1b4a70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a6c) {
            ctx->pc = 0x1B4C9Cu;
            return;
        }
    }
    ctx->pc = 0x1B4A74u;
    // 0x1b4a74: 0x0  nop
    ctx->pc = 0x1b4a74u;
    // NOP
label_1b4a78:
    // 0x1b4a78: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4A78u;
    {
        const bool branch_taken_0x1b4a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A78u;
        // 0x1b4a7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a78) {
            ctx->pc = 0x1B4AA0u;
            goto label_1b4aa0;
        }
    }
    ctx->pc = 0x1B4A80u;
    // 0x1b4a80: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b4a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4a88: 0x0  nop
    ctx->pc = 0x1b4a88u;
    // NOP
    // 0x1b4a8c: 0x0  nop
    ctx->pc = 0x1b4a8cu;
    // NOP
    // 0x1b4a90: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x1b4a90u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[16];
    // 0x1b4a94: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1B4A94u;
    {
        const bool branch_taken_0x1b4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a94) {
            ctx->pc = 0x1B4C9Cu;
            return;
        }
    }
    ctx->pc = 0x1B4A9Cu;
    // 0x1b4a9c: 0x0  nop
    ctx->pc = 0x1b4a9cu;
    // NOP
label_1b4aa0:
    // 0x1b4aa0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1B4AA0u;
    {
        const bool branch_taken_0x1b4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AA0u;
        // 0x1b4aa4: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4aa0) {
            ctx->pc = 0x1B4C98u;
            return;
        }
    }
    ctx->pc = 0x1B4AA8u;
label_1b4aa8:
    // 0x1b4aa8: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_1b4aac:
    // 0x1b4aac: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x1b4aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x1b4ab0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    ctx->pc = 0x1b4ab4u;
}
