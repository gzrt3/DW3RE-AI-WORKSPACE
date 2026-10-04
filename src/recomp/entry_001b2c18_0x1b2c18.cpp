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

// Function: entry_001b2c18
// Address: 0x1b2c18 - 0x1b2c7c
void entry_001b2c18_0x1b2c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c18_0x1b2c18");
#endif

    ctx->pc = 0x1b2c18u;

    // 0x1b2c18: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b2c1c: 0x62783  sra         $a0, $a2, 30
    ctx->pc = 0x1b2c1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 30));
    // 0x1b2c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2c24: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1b2c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1b2c28: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1b2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1b2c2c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1b2c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b2c30: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2C30u;
    {
        const bool branch_taken_0x1b2c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C30u;
        // 0x1b2c34: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c30) {
            ctx->pc = 0x1B2C7Cu;
            return;
        }
    }
    ctx->pc = 0x1B2C38u;
    // 0x1b2c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2c3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2c40: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c48: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1B2C48u;
    {
        const bool branch_taken_0x1b2c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C48u;
        // 0x1b2c4c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c48) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2C50u;
    // 0x1b2c50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C50u;
    {
        const bool branch_taken_0x1b2c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c50) {
            ctx->pc = 0x1B2C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C50u;
            // 0x1b2c54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C68u;
            goto label_1b2c68;
        }
    }
    ctx->pc = 0x1B2C58u;
    // 0x1b2c58: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2C58u;
    {
        const bool branch_taken_0x1b2c58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C58u;
        // 0x1b2c5c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c58) {
            ctx->pc = 0x1B2C80u;
            return;
        }
    }
    ctx->pc = 0x1B2C60u;
    // 0x1b2c60: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1B2C60u;
    {
        const bool branch_taken_0x1b2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C60u;
        // 0x1b2c64: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c60) {
            ctx->pc = 0x1B2DACu;
            return;
        }
    }
    ctx->pc = 0x1B2C68u;
label_1b2c68:
    // 0x1b2c68: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1b2c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x1b2c6c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c74: 0x5202004e  beql        $s0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2C74u;
    {
        const bool branch_taken_0x1b2c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2c74) {
            ctx->pc = 0x1B2C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C74u;
            // 0x1b2c78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2DB0u;
            return;
        }
    }
    ctx->pc = 0x1B2C7Cu;
}
