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

// Function: FUN_001b2bd8
// Address: 0x1b2bd8 - 0x1b2db4
void FUN_001b2bd8_0x1b2bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2bd8_0x1b2bd8");
#endif

    switch (ctx->pc) {
        case 0x1b2cfcu: goto label_1b2cfc;
        case 0x1b2d04u: goto label_1b2d04;
        default: break;
    }

    ctx->pc = 0x1b2bd8u;

    // 0x1b2bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2bdc: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1b2bdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2be0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2be4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b2be8: 0x44066800  mfc1        $a2, $f13
    ctx->pc = 0x1b2be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1b2bec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b2bf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2bf4: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x1b2bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b2bf8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1b2bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b2bfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2c00: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C00u;
    {
        const bool branch_taken_0x1b2c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C00u;
        // 0x1b2c04: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c00) {
            ctx->pc = 0x1B2C18u;
            goto label_1b2c18;
        }
    }
    ctx->pc = 0x1B2C08u;
    // 0x1b2c08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2c10: 0x806d35a  j           func_1B4D68
    ctx->pc = 0x1B2C10u;
    ctx->pc = 0x1B2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C10u;
    // 0x1b2c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    FUN_001b4d68_0x1b4d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2C18u;
label_1b2c18:
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
            goto label_1b2c7c;
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
            goto label_1b2dac;
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
            goto label_1b2c80;
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
            goto label_1b2dac;
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
            goto label_1b2db0;
        }
    }
    ctx->pc = 0x1B2C7Cu;
label_1b2c7c:
    // 0x1b2c7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b2c80:
    // 0x1b2c80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2c84: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1b2c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b2c88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2C88u;
    {
        const bool branch_taken_0x1b2c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C88u;
        // 0x1b2c8c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c88) {
            ctx->pc = 0x1B2CB8u;
            goto label_1b2cb8;
        }
    }
    ctx->pc = 0x1B2C90u;
    // 0x1b2c90: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1b2c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1b2c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b2c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2c9c: 0x4a00043  bltz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B2C9Cu;
    {
        const bool branch_taken_0x1b2c9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C9Cu;
        // 0x1b2ca0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c9c) {
            ctx->pc = 0x1B2DACu;
            goto label_1b2dac;
        }
    }
    ctx->pc = 0x1B2CA4u;
    // 0x1b2ca4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b2ca8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b2cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2cb0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B2CB0u;
    {
        const bool branch_taken_0x1b2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CB0u;
        // 0x1b2cb4: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cb0) {
            ctx->pc = 0x1B2DB4u;
            return;
        }
    }
    ctx->pc = 0x1B2CB8u;
label_1b2cb8:
    // 0x1b2cb8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b2cbc: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
    // 0x1b2cc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2cc4: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x1b2cc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1b2cc8: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1b2ccc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B2CCCu;
    {
        const bool branch_taken_0x1b2ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CCCu;
        // 0x1b2cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ccc) {
            ctx->pc = 0x1B2D0Cu;
            goto label_1b2d0c;
        }
    }
    ctx->pc = 0x1B2CD4u;
    // 0x1b2cd4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2CD4u;
    {
        const bool branch_taken_0x1b2cd4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CD4u;
        // 0x1b2cd8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cd4) {
            ctx->pc = 0x1B2CE8u;
            goto label_1b2ce8;
        }
    }
    ctx->pc = 0x1B2CDCu;
    // 0x1b2cdc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2ce0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2CE0u;
    {
        const bool branch_taken_0x1b2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CE0u;
        // 0x1b2ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ce0) {
            ctx->pc = 0x1B2D0Cu;
            goto label_1b2d0c;
        }
    }
    ctx->pc = 0x1B2CE8u;
label_1b2ce8:
    // 0x1b2ce8: 0x0  nop
    ctx->pc = 0x1b2ce8u;
    // NOP
    // 0x1b2cec: 0x0  nop
    ctx->pc = 0x1b2cecu;
    // NOP
    // 0x1b2cf0: 0x460d0b03  div.s       $f12, $f1, $f13
    ctx->pc = 0x1b2cf0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[13];
    // 0x1b2cf4: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B2CF4u;
    SET_GPR_U32(ctx, 31, 0x1B2CFCu);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B2CF4u, 0x1B2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0xc06d35a  jal         func_1B4D68
    ctx->pc = 0x1B2CFCu;
    SET_GPR_U32(ctx, 31, 0x1B2D04u);
    ctx->pc = 0x1B2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CFCu;
    // 0x1b2d00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D68u, 0x1B2CFCu, 0x1B2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D04u;
label_1b2d04:
    // 0x1b2d04: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b2d04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2d0c:
    // 0x1b2d0c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2D0Cu;
    {
        const bool branch_taken_0x1b2d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D0Cu;
        // 0x1b2d10: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d0c) {
            ctx->pc = 0x1B2D40u;
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2D14u;
    // 0x1b2d14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2D14u;
    {
        const bool branch_taken_0x1b2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d14) {
            ctx->pc = 0x1B2D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2D14u;
            // 0x1b2d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2D30u;
            goto label_1b2d30;
        }
    }
    ctx->pc = 0x1B2D1Cu;
    // 0x1b2d1c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B2D1Cu;
    {
        const bool branch_taken_0x1b2d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D1Cu;
        // 0x1b2d20: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d1c) {
            ctx->pc = 0x1B2DACu;
            goto label_1b2dac;
        }
    }
    ctx->pc = 0x1B2D24u;
    // 0x1b2d24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B2D24u;
    {
        const bool branch_taken_0x1b2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d24) {
            ctx->pc = 0x1B2D88u;
            goto label_1b2d88;
        }
    }
    ctx->pc = 0x1B2D2Cu;
    // 0x1b2d2c: 0x0  nop
    ctx->pc = 0x1b2d2cu;
    // NOP
label_1b2d30:
    // 0x1b2d30: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2D30u;
    {
        const bool branch_taken_0x1b2d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2d30) {
            ctx->pc = 0x1B2D60u;
            goto label_1b2d60;
        }
    }
    ctx->pc = 0x1B2D38u;
    // 0x1b2d38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2D38u;
    {
        const bool branch_taken_0x1b2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d38) {
            ctx->pc = 0x1B2D88u;
            goto label_1b2d88;
        }
    }
    ctx->pc = 0x1B2D40u;
label_1b2d40:
    // 0x1b2d40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b2d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2d44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b2d48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d4c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1b2d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b2d50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b2d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2d54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2D54u;
    {
        const bool branch_taken_0x1b2d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D54u;
        // 0x1b2d58: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d54) {
            ctx->pc = 0x1B2DACu;
            goto label_1b2dac;
        }
    }
    ctx->pc = 0x1B2D5Cu;
    // 0x1b2d5c: 0x0  nop
    ctx->pc = 0x1b2d5cu;
    // NOP
label_1b2d60:
    // 0x1b2d60: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1b2d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1b2d64: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b2d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d6c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2d70: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2d78: 0x0  nop
    ctx->pc = 0x1b2d78u;
    // NOP
    // 0x1b2d7c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b2d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2d80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2D80u;
    {
        const bool branch_taken_0x1b2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D80u;
        // 0x1b2d84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d80) {
            ctx->pc = 0x1B2DACu;
            goto label_1b2dac;
        }
    }
    ctx->pc = 0x1B2D88u;
label_1b2d88:
    // 0x1b2d88: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1b2d8c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1b2d90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b2d98: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1b2d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2da0: 0x0  nop
    ctx->pc = 0x1b2da0u;
    // NOP
    // 0x1b2da4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1b2da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2da8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b2dac:
    // 0x1b2dac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2db0:
    // 0x1b2db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1b2db4u;
}
