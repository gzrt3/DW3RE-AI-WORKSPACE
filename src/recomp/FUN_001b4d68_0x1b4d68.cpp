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

// Function: FUN_001b4d68
// Address: 0x1b4d68 - 0x1b4ffc
void FUN_001b4d68_0x1b4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4d68_0x1b4d68");
#endif

    switch (ctx->pc) {
        case 0x1b4e30u: goto label_1b4e30;
        default: break;
    }

    ctx->pc = 0x1b4d68u;

    // 0x1b4d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4d6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4d6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4d78: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x1b4d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1b4d7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b4d80: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x1b4d84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4d88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4d8c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x1b4d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1b4d90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4d94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4D94u;
    {
        const bool branch_taken_0x1b4d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D94u;
        // 0x1b4d98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d94) {
            ctx->pc = 0x1B4DD0u;
            goto label_1b4dd0;
        }
    }
    ctx->pc = 0x1B4D9Cu;
    // 0x1b4d9c: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4D9Cu;
    {
        const bool branch_taken_0x1b4d9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D9Cu;
        // 0x1b4da0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d9c) {
            ctx->pc = 0x1B4DB8u;
            goto label_1b4db8;
        }
    }
    ctx->pc = 0x1B4DA4u;
    // 0x1b4da4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1b4da8: 0xc441b264  lwc1        $f1, -0x4D9C($v0)
    ctx->pc = 0x1b4da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4dac: 0xc460b274  lwc1        $f0, -0x4D8C($v1)
    ctx->pc = 0x1b4dacu;
    { uint32_t bits = FAST_READ32(0x2CB274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4db0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1B4DB0u;
    {
        const bool branch_taken_0x1b4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DB0u;
        // 0x1b4db4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4db0) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4DB8u;
label_1b4db8:
    // 0x1b4db8: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1b4dbc: 0xc440b264  lwc1        $f0, -0x4D9C($v0)
    ctx->pc = 0x1b4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4dc0: 0xc461b274  lwc1        $f1, -0x4D8C($v1)
    ctx->pc = 0x1b4dc0u;
    { uint32_t bits = FAST_READ32(0x2CB274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b4dc8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1B4DC8u;
    {
        const bool branch_taken_0x1b4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DC8u;
        // 0x1b4dcc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dc8) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4DD0u;
label_1b4dd0:
    // 0x1b4dd0: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x1b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x1b4dd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4dd8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4ddc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4DDCu;
    {
        const bool branch_taken_0x1b4ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DDCu;
        // 0x1b4de0: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ddc) {
            ctx->pc = 0x1B4E28u;
            goto label_1b4e28;
        }
    }
    ctx->pc = 0x1B4DE4u;
    // 0x1b4de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4de8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4dec: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1B4DECu;
    {
        const bool branch_taken_0x1b4dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DECu;
        // 0x1b4df0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dec) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4DF4u;
    // 0x1b4df4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1b4df8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b4df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1b4dfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4e08: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1b4e0c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b4e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4e10: 0x0  nop
    ctx->pc = 0x1b4e10u;
    // NOP
    // 0x1b4e14: 0x45010076  bc1t        . + 4 + (0x76 << 2)
    ctx->pc = 0x1B4E14u;
    {
        const bool branch_taken_0x1b4e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E14u;
        // 0x1b4e18: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e14) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4E1Cu;
    // 0x1b4e1c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1B4E1Cu;
    {
        const bool branch_taken_0x1b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E1Cu;
        // 0x1b4e20: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e1c) {
            ctx->pc = 0x1B4F18u;
            goto label_1b4f18;
        }
    }
    ctx->pc = 0x1B4E24u;
    // 0x1b4e24: 0x0  nop
    ctx->pc = 0x1b4e24u;
    // NOP
label_1b4e28:
    // 0x1b4e28: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B4E28u;
    SET_GPR_U32(ctx, 31, 0x1B4E30u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B4E28u, 0x1B4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E30u;
label_1b4e30:
    // 0x1b4e30: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1b4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x1b4e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4e38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4E3Cu;
    {
        const bool branch_taken_0x1b4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e3c) {
            ctx->pc = 0x1B4EB8u;
            goto label_1b4eb8;
        }
    }
    ctx->pc = 0x1B4E44u;
    // 0x1b4e44: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x1b4e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4e4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4e50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E90u;
            goto label_1b4e90;
        }
    }
    ctx->pc = 0x1B4E58u;
    // 0x1b4e58: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x1b4e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x1b4e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
    // 0x1b4e70: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x1b4e74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b4e78: 0x0  nop
    ctx->pc = 0x1b4e78u;
    // NOP
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
    // 0x1b4e80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4e80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4e84: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4E8Cu;
    // 0x1b4e8c: 0x0  nop
    ctx->pc = 0x1b4e8cu;
    // NOP
label_1b4e90:
    // 0x1b4e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4e98: 0x0  nop
    ctx->pc = 0x1b4e98u;
    // NOP
    // 0x1b4e9c: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x1b4e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ea0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ea4: 0x0  nop
    ctx->pc = 0x1b4ea4u;
    // NOP
    // 0x1b4ea8: 0x0  nop
    ctx->pc = 0x1b4ea8u;
    // NOP
    // 0x1b4eac: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4eacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4eb0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B4EB0u;
    {
        const bool branch_taken_0x1b4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB0u;
        // 0x1b4eb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4eb0) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4EB8u;
label_1b4eb8:
    // 0x1b4eb8: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x1b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x1b4ebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4ec0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b4ec4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4EC4u;
    {
        const bool branch_taken_0x1b4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ec4) {
            ctx->pc = 0x1B4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4EC4u;
            // 0x1b4ec8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4F00u;
            goto label_1b4f00;
        }
    }
    ctx->pc = 0x1B4ECCu;
    // 0x1b4ecc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b4ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4ed8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4edc: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x1b4edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ee0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1b4ee4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b4ee8: 0x0  nop
    ctx->pc = 0x1b4ee8u;
    // NOP
    // 0x1b4eec: 0x0  nop
    ctx->pc = 0x1b4eecu;
    // NOP
    // 0x1b4ef0: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4ef0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x1b4ef4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4EF4u;
    {
        const bool branch_taken_0x1b4ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF4u;
        // 0x1b4ef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ef4) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4EFCu;
    // 0x1b4efc: 0x0  nop
    ctx->pc = 0x1b4efcu;
    // NOP
label_1b4f00:
    // 0x1b4f00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b4f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f08: 0x0  nop
    ctx->pc = 0x1b4f08u;
    // NOP
    // 0x1b4f0c: 0x0  nop
    ctx->pc = 0x1b4f0cu;
    // NOP
    // 0x1b4f10: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1b4f10u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
label_1b4f14:
    // 0x1b4f14: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1b4f14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1b4f18:
    // 0x1b4f18: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b4f1c: 0x2442b278  addiu       $v0, $v0, -0x4D88
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947448));
    // 0x1b4f20: 0xc4470028  lwc1        $f7, 0x28($v0)
    ctx->pc = 0x1b4f20u;
    { uint32_t bits = FAST_READ32(0x2CB2A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b4f24: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x1b4f24u;
    { uint32_t bits = FAST_READ32(0x2CB298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4f28: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1b4f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1b4f2c: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x1b4f2cu;
    { uint32_t bits = FAST_READ32(0x2CB29Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b4f30: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1b4f30u;
    { uint32_t bits = FAST_READ32(0x2CB290u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b4f34: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b4f34u;
    { uint32_t bits = FAST_READ32(0x2CB294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f38: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = FAST_READ32(0x2CB288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1b4f3c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1b4f3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1b4f40: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1b4f40u;
    { uint32_t bits = FAST_READ32(0x2CB28Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4f44: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1b4f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1b4f48: 0xc4490008  lwc1        $f9, 0x8($v0)
    ctx->pc = 0x1b4f48u;
    { uint32_t bits = FAST_READ32(0x2CB280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1b4f4c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b4f4cu;
    { uint32_t bits = FAST_READ32(0x2CB284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4f50: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = FAST_READ32(0x2CB27Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1b4f54: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1b4f54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1b4f58: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x1b4f58u;
    { uint32_t bits = FAST_READ32(0x2CB278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1b4f5c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1b4f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1b4f60: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1b4f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b4f64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b4f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4f68: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1b4f68u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1b4f6c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b4f6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b4f70: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1b4f70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1b4f74: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b4f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b4f78: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x1b4f78u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x1b4f7c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1b4f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1b4f80: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1b4f80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1b4f84: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b4f84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b4f88: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1b4f88u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x1b4f8c: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x1b4f8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x1b4f90: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x1b4f90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x1b4f94: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x1b4f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1b4f98: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x1b4f98u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x1b4f9c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4F9Cu;
    {
        const bool branch_taken_0x1b4f9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F9Cu;
        // 0x1b4fa0: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f9c) {
            ctx->pc = 0x1B4FB8u;
            goto label_1b4fb8;
        }
    }
    ctx->pc = 0x1B4FA4u;
    // 0x1b4fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fa8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4fac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4FACu;
    {
        const bool branch_taken_0x1b4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fac) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4FB4u;
    // 0x1b4fb4: 0x0  nop
    ctx->pc = 0x1b4fb4u;
    // NOP
label_1b4fb8:
    // 0x1b4fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4fc0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b4fc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b4fc8: 0xc421b268  lwc1        $f1, -0x4D98($at)
    ctx->pc = 0x1b4fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4fcc: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b4fd0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b4fd4: 0xc422b258  lwc1        $f2, -0x4DA8($at)
    ctx->pc = 0x1b4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4fd8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4fdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fe0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1b4fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x1b4fe4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4FE4u;
    {
        const bool branch_taken_0x1b4fe4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe4) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4FECu;
    // 0x1b4fec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4fecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b4ff0:
    // 0x1b4ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b4ffcu;
}
