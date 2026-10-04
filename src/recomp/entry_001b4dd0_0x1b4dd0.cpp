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

// Function: entry_001b4dd0
// Address: 0x1b4dd0 - 0x1b4e28
void entry_001b4dd0_0x1b4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4dd0_0x1b4dd0");
#endif

    ctx->pc = 0x1b4dd0u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1B4E24u;
    // 0x1b4e24: 0x0  nop
    ctx->pc = 0x1b4e24u;
    // NOP
    ctx->pc = 0x1b4e28u;
}
