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

// Function: FUN_0021fa10
// Address: 0x21fa10 - 0x220494
void FUN_0021fa10_0x21fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021fa10_0x21fa10");
#endif

    switch (ctx->pc) {
        case 0x21fb58u: goto label_21fb58;
        case 0x21fb68u: goto label_21fb68;
        case 0x21fb78u: goto label_21fb78;
        case 0x21fb8cu: goto label_21fb8c;
        case 0x21fba0u: goto label_21fba0;
        case 0x21fbacu: goto label_21fbac;
        case 0x21fbc0u: goto label_21fbc0;
        case 0x21fbd4u: goto label_21fbd4;
        case 0x21fbe0u: goto label_21fbe0;
        case 0x21fbf0u: goto label_21fbf0;
        case 0x21fc00u: goto label_21fc00;
        case 0x21fc10u: goto label_21fc10;
        case 0x21fc20u: goto label_21fc20;
        case 0x21fc34u: goto label_21fc34;
        case 0x21fc40u: goto label_21fc40;
        case 0x21fc54u: goto label_21fc54;
        case 0x21fc68u: goto label_21fc68;
        case 0x21fc78u: goto label_21fc78;
        case 0x21fc8cu: goto label_21fc8c;
        case 0x21fca0u: goto label_21fca0;
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcc0u: goto label_21fcc0;
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fce4u: goto label_21fce4;
        case 0x21fcf0u: goto label_21fcf0;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd38u: goto label_21fd38;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd90u: goto label_21fd90;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdd4u: goto label_21fdd4;
        case 0x21fde0u: goto label_21fde0;
        case 0x21fdf4u: goto label_21fdf4;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe14u: goto label_21fe14;
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe34u: goto label_21fe34;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe6cu: goto label_21fe6c;
        case 0x21fe80u: goto label_21fe80;
        case 0x21fe90u: goto label_21fe90;
        case 0x21fea4u: goto label_21fea4;
        case 0x21feb0u: goto label_21feb0;
        case 0x21fec4u: goto label_21fec4;
        case 0x21fed8u: goto label_21fed8;
        case 0x21fee4u: goto label_21fee4;
        case 0x21fef0u: goto label_21fef0;
        case 0x21ff04u: goto label_21ff04;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff24u: goto label_21ff24;
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff48u: goto label_21ff48;
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff68u: goto label_21ff68;
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff88u: goto label_21ff88;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffbcu: goto label_21ffbc;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21fff4u: goto label_21fff4;
        case 0x220004u: goto label_220004;
        case 0x220018u: goto label_220018;
        case 0x22002cu: goto label_22002c;
        case 0x220038u: goto label_220038;
        case 0x220044u: goto label_220044;
        case 0x220058u: goto label_220058;
        case 0x220064u: goto label_220064;
        case 0x220078u: goto label_220078;
        case 0x220084u: goto label_220084;
        case 0x220098u: goto label_220098;
        case 0x2200acu: goto label_2200ac;
        case 0x2200bcu: goto label_2200bc;
        case 0x2200d0u: goto label_2200d0;
        case 0x2200e4u: goto label_2200e4;
        case 0x2200f0u: goto label_2200f0;
        case 0x220104u: goto label_220104;
        case 0x220110u: goto label_220110;
        case 0x220120u: goto label_220120;
        case 0x220130u: goto label_220130;
        case 0x220144u: goto label_220144;
        case 0x220158u: goto label_220158;
        case 0x220164u: goto label_220164;
        case 0x220170u: goto label_220170;
        case 0x220184u: goto label_220184;
        case 0x220190u: goto label_220190;
        case 0x2201a4u: goto label_2201a4;
        case 0x2201b0u: goto label_2201b0;
        case 0x2201c4u: goto label_2201c4;
        case 0x2201d8u: goto label_2201d8;
        case 0x2201e4u: goto label_2201e4;
        case 0x2201f0u: goto label_2201f0;
        case 0x220204u: goto label_220204;
        case 0x220210u: goto label_220210;
        case 0x220220u: goto label_220220;
        case 0x220268u: goto label_220268;
        case 0x2202d8u: goto label_2202d8;
        case 0x220320u: goto label_220320;
        case 0x220394u: goto label_220394;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203d0u: goto label_2203d0;
        case 0x2203ecu: goto label_2203ec;
        case 0x220434u: goto label_220434;
        default: break;
    }

    ctx->pc = 0x21fa10u;

    // 0x21fa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fa14: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x21fa18: 0x10830276  beq         $a0, $v1, . + 4 + (0x276 << 2)
    ctx->pc = 0x21FA18u;
    {
        const bool branch_taken_0x21fa18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA18u;
        // 0x21fa1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa18) {
            ctx->pc = 0x2203F4u;
            goto label_2203f4;
        }
    }
    ctx->pc = 0x21FA20u;
    // 0x21fa20: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x21fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x21fa24: 0x1083022e  beq         $a0, $v1, . + 4 + (0x22E << 2)
    ctx->pc = 0x21FA24u;
    {
        const bool branch_taken_0x21fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA24u;
        // 0x21fa28: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa24) {
            ctx->pc = 0x2202E0u;
            goto label_2202e0;
        }
    }
    ctx->pc = 0x21FA2Cu;
    // 0x21fa2c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x21fa30: 0x108301fd  beq         $a0, $v1, . + 4 + (0x1FD << 2)
    ctx->pc = 0x21FA30u;
    {
        const bool branch_taken_0x21fa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA30u;
        // 0x21fa34: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa30) {
            ctx->pc = 0x220228u;
            goto label_220228;
        }
    }
    ctx->pc = 0x21FA38u;
    // 0x21fa38: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x21fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x21fa3c: 0x108301ba  beq         $a0, $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x21FA3Cu;
    {
        const bool branch_taken_0x21fa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA3Cu;
        // 0x21fa40: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa3c) {
            ctx->pc = 0x220128u;
            goto label_220128;
        }
    }
    ctx->pc = 0x21FA44u;
    // 0x21fa44: 0x108301b8  beq         $a0, $v1, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x21FA44u;
    {
        const bool branch_taken_0x21fa44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa44) {
            ctx->pc = 0x220128u;
            goto label_220128;
        }
    }
    ctx->pc = 0x21FA4Cu;
    // 0x21fa4c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21fa50: 0x1083016a  beq         $a0, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x21FA50u;
    {
        const bool branch_taken_0x21fa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA50u;
        // 0x21fa54: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa50) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FA58u;
    // 0x21fa58: 0x10830168  beq         $a0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x21FA58u;
    {
        const bool branch_taken_0x21fa58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa58) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FA60u;
    // 0x21fa60: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x21fa64: 0x10830131  beq         $a0, $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x21FA64u;
    {
        const bool branch_taken_0x21fa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA64u;
        // 0x21fa68: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa64) {
            ctx->pc = 0x21FF2Cu;
            goto label_21ff2c;
        }
    }
    ctx->pc = 0x21FA6Cu;
    // 0x21fa6c: 0x1083012f  beq         $a0, $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x21FA6Cu;
    {
        const bool branch_taken_0x21fa6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa6c) {
            ctx->pc = 0x21FF2Cu;
            goto label_21ff2c;
        }
    }
    ctx->pc = 0x21FA74u;
    // 0x21fa74: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x21fa78: 0x10830103  beq         $a0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x21FA78u;
    {
        const bool branch_taken_0x21fa78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA78u;
        // 0x21fa7c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa78) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FA80u;
    // 0x21fa80: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x21FA80u;
    {
        const bool branch_taken_0x21fa80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa80) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FA88u;
    // 0x21fa88: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x21fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21fa8c: 0x108300ca  beq         $a0, $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x21FA8Cu;
    {
        const bool branch_taken_0x21fa8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA8Cu;
        // 0x21fa90: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa8c) {
            ctx->pc = 0x21FDB8u;
            goto label_21fdb8;
        }
    }
    ctx->pc = 0x21FA94u;
    // 0x21fa94: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x21FA94u;
    {
        const bool branch_taken_0x21fa94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA94u;
        // 0x21fa98: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa94) {
            ctx->pc = 0x21FDB8u;
            goto label_21fdb8;
        }
    }
    ctx->pc = 0x21FA9Cu;
    // 0x21fa9c: 0x108500be  beq         $a0, $a1, . + 4 + (0xBE << 2)
    ctx->pc = 0x21FA9Cu;
    {
        const bool branch_taken_0x21fa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x21FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA9Cu;
        // 0x21faa0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa9c) {
            ctx->pc = 0x21FD98u;
            goto label_21fd98;
        }
    }
    ctx->pc = 0x21FAA4u;
    // 0x21faa4: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x21FAA4u;
    {
        const bool branch_taken_0x21faa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21faa4) {
            ctx->pc = 0x21FD98u;
            goto label_21fd98;
        }
    }
    ctx->pc = 0x21FAACu;
    // 0x21faac: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x21faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x21fab0: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x21FAB0u;
    {
        const bool branch_taken_0x21fab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAB0u;
        // 0x21fab4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fab0) {
            ctx->pc = 0x21FD78u;
            goto label_21fd78;
        }
    }
    ctx->pc = 0x21FAB8u;
    // 0x21fab8: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x21FAB8u;
    {
        const bool branch_taken_0x21fab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fab8) {
            ctx->pc = 0x21FD78u;
            goto label_21fd78;
        }
    }
    ctx->pc = 0x21FAC0u;
    // 0x21fac0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x21fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21fac4: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x21FAC4u;
    {
        const bool branch_taken_0x21fac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC4u;
        // 0x21fac8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac4) {
            ctx->pc = 0x21FD78u;
            goto label_21fd78;
        }
    }
    ctx->pc = 0x21FACCu;
    // 0x21facc: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x21FACCu;
    {
        const bool branch_taken_0x21facc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21facc) {
            ctx->pc = 0x21FCC8u;
            goto label_21fcc8;
        }
    }
    ctx->pc = 0x21FAD4u;
    // 0x21fad4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21fad8: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x21FAD8u;
    {
        const bool branch_taken_0x21fad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD8u;
        // 0x21fadc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad8) {
            ctx->pc = 0x21FCC8u;
            goto label_21fcc8;
        }
    }
    ctx->pc = 0x21FAE0u;
    // 0x21fae0: 0x10860071  beq         $a0, $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x21FAE0u;
    {
        const bool branch_taken_0x21fae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x21FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE0u;
        // 0x21fae4: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae0) {
            ctx->pc = 0x21FCA8u;
            goto label_21fca8;
        }
    }
    ctx->pc = 0x21FAE8u;
    // 0x21fae8: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x21FAE8u;
    {
        const bool branch_taken_0x21fae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fae8) {
            ctx->pc = 0x21FCA8u;
            goto label_21fca8;
        }
    }
    ctx->pc = 0x21FAF0u;
    // 0x21faf0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21faf4: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x21FAF4u;
    {
        const bool branch_taken_0x21faf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF4u;
        // 0x21faf8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf4) {
            ctx->pc = 0x21FC18u;
            goto label_21fc18;
        }
    }
    ctx->pc = 0x21FAFCu;
    // 0x21fafc: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x21FAFCu;
    {
        const bool branch_taken_0x21fafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fafc) {
            ctx->pc = 0x21FC18u;
            goto label_21fc18;
        }
    }
    ctx->pc = 0x21FB04u;
    // 0x21fb04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x21fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21fb08: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x21FB08u;
    {
        const bool branch_taken_0x21fb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB08u;
        // 0x21fb0c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb08) {
            ctx->pc = 0x21FC18u;
            goto label_21fc18;
        }
    }
    ctx->pc = 0x21FB10u;
    // 0x21fb10: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x21FB10u;
    {
        const bool branch_taken_0x21fb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fb10) {
            ctx->pc = 0x21FBF8u;
            goto label_21fbf8;
        }
    }
    ctx->pc = 0x21FB18u;
    // 0x21fb18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x21fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21fb1c: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x21FB1Cu;
    {
        const bool branch_taken_0x21fb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB1Cu;
        // 0x21fb20: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb1c) {
            ctx->pc = 0x21FBF8u;
            goto label_21fbf8;
        }
    }
    ctx->pc = 0x21FB24u;
    // 0x21fb24: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x21FB24u;
    {
        const bool branch_taken_0x21fb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fb24) {
            ctx->pc = 0x21FBB4u;
            goto label_21fbb4;
        }
    }
    ctx->pc = 0x21FB2Cu;
    // 0x21fb2c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21fb30: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21FB30u;
    {
        const bool branch_taken_0x21fb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB30u;
        // 0x21fb34: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb30) {
            ctx->pc = 0x21FB70u;
            goto label_21fb70;
        }
    }
    ctx->pc = 0x21FB38u;
    // 0x21fb38: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21FB38u;
    {
        const bool branch_taken_0x21fb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB38u;
        // 0x21fb3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb38) {
            ctx->pc = 0x21FB70u;
            goto label_21fb70;
        }
    }
    ctx->pc = 0x21FB40u;
    // 0x21fb40: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FB40u;
    {
        const bool branch_taken_0x21fb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x21fb40) {
            ctx->pc = 0x21FB50u;
            goto label_21fb50;
        }
    }
    ctx->pc = 0x21FB48u;
    // 0x21fb48: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x21FB48u;
    {
        const bool branch_taken_0x21fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb48) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FB50u;
label_21fb50:
    // 0x21fb50: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FB50u;
    SET_GPR_U32(ctx, 31, 0x21FB58u);
    ctx->pc = 0x21FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB50u;
    // 0x21fb54: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FB50u, 0x21FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB58u;
label_21fb58:
    // 0x21fb58: 0x1040024d  beqz        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x21FB58u;
    {
        const bool branch_taken_0x21fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB58u;
        // 0x21fb5c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb58) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FB60u;
    // 0x21fb60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FB60u;
    SET_GPR_U32(ctx, 31, 0x21FB68u);
    ctx->pc = 0x21FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB60u;
    // 0x21fb64: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FB60u, 0x21FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB68u;
label_21fb68:
    // 0x21fb68: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x21FB68u;
    {
        const bool branch_taken_0x21fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb68) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FB70u;
label_21fb70:
    // 0x21fb70: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FB70u;
    SET_GPR_U32(ctx, 31, 0x21FB78u);
    ctx->pc = 0x21FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB70u;
    // 0x21fb74: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FB70u, 0x21FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB78u;
label_21fb78:
    // 0x21fb78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FB78u;
    {
        const bool branch_taken_0x21fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB78u;
        // 0x21fb7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb78) {
            ctx->pc = 0x21FB98u;
            goto label_21fb98;
        }
    }
    ctx->pc = 0x21FB80u;
    // 0x21fb80: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fb84: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FB84u;
    SET_GPR_U32(ctx, 31, 0x21FB8Cu);
    ctx->pc = 0x21FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB84u;
    // 0x21fb88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FB84u, 0x21FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FB8Cu;
label_21fb8c:
    // 0x21fb8c: 0x10400240  beqz        $v0, . + 4 + (0x240 << 2)
    ctx->pc = 0x21FB8Cu;
    {
        const bool branch_taken_0x21fb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb8c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FB94u;
    // 0x21fb94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21fb98:
    // 0x21fb98: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FB98u;
    SET_GPR_U32(ctx, 31, 0x21FBA0u);
    ctx->pc = 0x21FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB98u;
    // 0x21fb9c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FB98u, 0x21FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fba4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBA4u;
    SET_GPR_U32(ctx, 31, 0x21FBACu);
    ctx->pc = 0x21FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBA4u;
    // 0x21fba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBA4u, 0x21FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBACu;
label_21fbac:
    // 0x21fbac: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x21FBACu;
    {
        const bool branch_taken_0x21fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbac) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FBB4u;
label_21fbb4:
    // 0x21fbb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbb8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FBB8u;
    SET_GPR_U32(ctx, 31, 0x21FBC0u);
    ctx->pc = 0x21FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBB8u;
    // 0x21fbbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FBB8u, 0x21FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBC0u;
label_21fbc0:
    // 0x21fbc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBC0u;
    {
        const bool branch_taken_0x21fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBC0u;
        // 0x21fbc4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbc0) {
            ctx->pc = 0x21FBD8u;
            goto label_21fbd8;
        }
    }
    ctx->pc = 0x21FBC8u;
    // 0x21fbc8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x21fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x21fbcc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBCCu;
    SET_GPR_U32(ctx, 31, 0x21FBD4u);
    ctx->pc = 0x21FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBCCu;
    // 0x21fbd0: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBCCu, 0x21FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBD4u;
label_21fbd4:
    // 0x21fbd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21fbd8:
    // 0x21fbd8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FBD8u;
    SET_GPR_U32(ctx, 31, 0x21FBE0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FBD8u, 0x21FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBE0u;
label_21fbe0:
    // 0x21fbe0: 0x1040022b  beqz        $v0, . + 4 + (0x22B << 2)
    ctx->pc = 0x21FBE0u;
    {
        const bool branch_taken_0x21fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBE0u;
        // 0x21fbe4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbe0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FBE8u;
    // 0x21fbe8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBE8u;
    SET_GPR_U32(ctx, 31, 0x21FBF0u);
    ctx->pc = 0x21FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBE8u;
    // 0x21fbec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBE8u, 0x21FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBF0u;
label_21fbf0:
    // 0x21fbf0: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x21FBF0u;
    {
        const bool branch_taken_0x21fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbf0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FBF8u;
label_21fbf8:
    // 0x21fbf8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FBF8u;
    SET_GPR_U32(ctx, 31, 0x21FC00u);
    ctx->pc = 0x21FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBF8u;
    // 0x21fbfc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FBF8u, 0x21FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC00u;
label_21fc00:
    // 0x21fc00: 0x10400223  beqz        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x21FC00u;
    {
        const bool branch_taken_0x21fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC00u;
        // 0x21fc04: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc00) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FC08u;
    // 0x21fc08: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC08u;
    SET_GPR_U32(ctx, 31, 0x21FC10u);
    ctx->pc = 0x21FC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC08u;
    // 0x21fc0c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC08u, 0x21FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC10u;
label_21fc10:
    // 0x21fc10: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x21FC10u;
    {
        const bool branch_taken_0x21fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc10) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FC18u;
label_21fc18:
    // 0x21fc18: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC18u;
    SET_GPR_U32(ctx, 31, 0x21FC20u);
    ctx->pc = 0x21FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC18u;
    // 0x21fc1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC18u, 0x21FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC20u;
label_21fc20:
    // 0x21fc20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FC20u;
    {
        const bool branch_taken_0x21fc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC20u;
        // 0x21fc24: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc20) {
            ctx->pc = 0x21FC38u;
            goto label_21fc38;
        }
    }
    ctx->pc = 0x21FC28u;
    // 0x21fc28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fc2c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC2Cu;
    SET_GPR_U32(ctx, 31, 0x21FC34u);
    ctx->pc = 0x21FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC2Cu;
    // 0x21fc30: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC2Cu, 0x21FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC34u;
label_21fc34:
    // 0x21fc34: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21fc38:
    // 0x21fc38: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC38u;
    SET_GPR_U32(ctx, 31, 0x21FC40u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC38u, 0x21FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC40u;
label_21fc40:
    // 0x21fc40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FC40u;
    {
        const bool branch_taken_0x21fc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC40u;
        // 0x21fc44: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc40) {
            ctx->pc = 0x21FC60u;
            goto label_21fc60;
        }
    }
    ctx->pc = 0x21FC48u;
    // 0x21fc48: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fc4c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FC4Cu;
    SET_GPR_U32(ctx, 31, 0x21FC54u);
    ctx->pc = 0x21FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC4Cu;
    // 0x21fc50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FC4Cu, 0x21FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC54u;
label_21fc54:
    // 0x21fc54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FC54u;
    {
        const bool branch_taken_0x21fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC54u;
        // 0x21fc58: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc54) {
            ctx->pc = 0x21FC70u;
            goto label_21fc70;
        }
    }
    ctx->pc = 0x21FC5Cu;
    // 0x21fc5c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fc60:
    // 0x21fc60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC60u;
    SET_GPR_U32(ctx, 31, 0x21FC68u);
    ctx->pc = 0x21FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC60u;
    // 0x21fc64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC60u, 0x21FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC68u;
label_21fc68:
    // 0x21fc68: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x21FC68u;
    {
        const bool branch_taken_0x21fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc68) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FC70u;
label_21fc70:
    // 0x21fc70: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FC70u;
    SET_GPR_U32(ctx, 31, 0x21FC78u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FC70u, 0x21FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC78u;
label_21fc78:
    // 0x21fc78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FC78u;
    {
        const bool branch_taken_0x21fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC78u;
        // 0x21fc7c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc78) {
            ctx->pc = 0x21FC98u;
            goto label_21fc98;
        }
    }
    ctx->pc = 0x21FC80u;
    // 0x21fc80: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fc84: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FC84u;
    SET_GPR_U32(ctx, 31, 0x21FC8Cu);
    ctx->pc = 0x21FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC84u;
    // 0x21fc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FC84u, 0x21FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC8Cu;
label_21fc8c:
    // 0x21fc8c: 0x10400200  beqz        $v0, . + 4 + (0x200 << 2)
    ctx->pc = 0x21FC8Cu;
    {
        const bool branch_taken_0x21fc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fc8c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FC94u;
    // 0x21fc94: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fc98:
    // 0x21fc98: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FC98u;
    SET_GPR_U32(ctx, 31, 0x21FCA0u);
    ctx->pc = 0x21FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC98u;
    // 0x21fc9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FC98u, 0x21FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCA0u;
label_21fca0:
    // 0x21fca0: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x21FCA0u;
    {
        const bool branch_taken_0x21fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fca0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FCA8u;
label_21fca8:
    // 0x21fca8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCA8u;
    SET_GPR_U32(ctx, 31, 0x21FCB0u);
    ctx->pc = 0x21FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCA8u;
    // 0x21fcac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCA8u, 0x21FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCB0u;
label_21fcb0:
    // 0x21fcb0: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x21FCB0u;
    {
        const bool branch_taken_0x21fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCB0u;
        // 0x21fcb4: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcb0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FCB8u;
    // 0x21fcb8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCB8u;
    SET_GPR_U32(ctx, 31, 0x21FCC0u);
    ctx->pc = 0x21FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCB8u;
    // 0x21fcbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCB8u, 0x21FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCC0u;
label_21fcc0:
    // 0x21fcc0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x21FCC0u;
    {
        const bool branch_taken_0x21fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fcc0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FCC8u;
label_21fcc8:
    // 0x21fcc8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCC8u;
    SET_GPR_U32(ctx, 31, 0x21FCD0u);
    ctx->pc = 0x21FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCC8u;
    // 0x21fccc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCC8u, 0x21FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD0u;
label_21fcd0:
    // 0x21fcd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FCD0u;
    {
        const bool branch_taken_0x21fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCD0u;
        // 0x21fcd4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcd0) {
            ctx->pc = 0x21FCE8u;
            goto label_21fce8;
        }
    }
    ctx->pc = 0x21FCD8u;
    // 0x21fcd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fcdc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCDCu;
    SET_GPR_U32(ctx, 31, 0x21FCE4u);
    ctx->pc = 0x21FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCDCu;
    // 0x21fce0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCDCu, 0x21FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCE4u;
label_21fce4:
    // 0x21fce4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21fce8:
    // 0x21fce8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCE8u;
    SET_GPR_U32(ctx, 31, 0x21FCF0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCE8u, 0x21FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCF0u;
label_21fcf0:
    // 0x21fcf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FCF0u;
    {
        const bool branch_taken_0x21fcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF0u;
        // 0x21fcf4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcf0) {
            ctx->pc = 0x21FD08u;
            goto label_21fd08;
        }
    }
    ctx->pc = 0x21FCF8u;
    // 0x21fcf8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x21fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21fcfc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCFCu;
    SET_GPR_U32(ctx, 31, 0x21FD04u);
    ctx->pc = 0x21FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCFCu;
    // 0x21fd00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCFCu, 0x21FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD04u;
label_21fd04:
    // 0x21fd04: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21fd08:
    // 0x21fd08: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD08u;
    SET_GPR_U32(ctx, 31, 0x21FD10u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD08u, 0x21FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD10u;
label_21fd10:
    // 0x21fd10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FD10u;
    {
        const bool branch_taken_0x21fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD10u;
        // 0x21fd14: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd10) {
            ctx->pc = 0x21FD30u;
            goto label_21fd30;
        }
    }
    ctx->pc = 0x21FD18u;
    // 0x21fd18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fd1c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FD1Cu;
    SET_GPR_U32(ctx, 31, 0x21FD24u);
    ctx->pc = 0x21FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD1Cu;
    // 0x21fd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD1Cu, 0x21FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FD24u;
    {
        const bool branch_taken_0x21fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD24u;
        // 0x21fd28: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd24) {
            ctx->pc = 0x21FD40u;
            goto label_21fd40;
        }
    }
    ctx->pc = 0x21FD2Cu;
    // 0x21fd2c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fd30:
    // 0x21fd30: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FD30u;
    SET_GPR_U32(ctx, 31, 0x21FD38u);
    ctx->pc = 0x21FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD30u;
    // 0x21fd34: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FD30u, 0x21FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD38u;
label_21fd38:
    // 0x21fd38: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x21FD38u;
    {
        const bool branch_taken_0x21fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd38) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD40u;
label_21fd40:
    // 0x21fd40: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD40u;
    SET_GPR_U32(ctx, 31, 0x21FD48u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD40u, 0x21FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD48u;
label_21fd48:
    // 0x21fd48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD48u;
        // 0x21fd4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD68u;
            goto label_21fd68;
        }
    }
    ctx->pc = 0x21FD50u;
    // 0x21fd50: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fd54: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FD54u;
    SET_GPR_U32(ctx, 31, 0x21FD5Cu);
    ctx->pc = 0x21FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD54u;
    // 0x21fd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD54u, 0x21FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD5Cu;
label_21fd5c:
    // 0x21fd5c: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x21FD5Cu;
    {
        const bool branch_taken_0x21fd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd5c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD64u;
    // 0x21fd64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fd68:
    // 0x21fd68: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FD68u;
    SET_GPR_U32(ctx, 31, 0x21FD70u);
    ctx->pc = 0x21FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD68u;
    // 0x21fd6c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FD68u, 0x21FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD70u;
label_21fd70:
    // 0x21fd70: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD78u;
label_21fd78:
    // 0x21fd78: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD78u;
    SET_GPR_U32(ctx, 31, 0x21FD80u);
    ctx->pc = 0x21FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD78u;
    // 0x21fd7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD78u, 0x21FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD80u;
label_21fd80:
    // 0x21fd80: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x21FD80u;
    {
        const bool branch_taken_0x21fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD80u;
        // 0x21fd84: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd80) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD88u;
    // 0x21fd88: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FD88u;
    SET_GPR_U32(ctx, 31, 0x21FD90u);
    ctx->pc = 0x21FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD88u;
    // 0x21fd8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FD88u, 0x21FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x21FD90u;
    {
        const bool branch_taken_0x21fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd90) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD98u;
label_21fd98:
    // 0x21fd98: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FD98u;
    SET_GPR_U32(ctx, 31, 0x21FDA0u);
    ctx->pc = 0x21FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD98u;
    // 0x21fd9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FD98u, 0x21FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0x104001bb  beqz        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x21FDA0u;
    {
        const bool branch_taken_0x21fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fda0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FDA8u;
    // 0x21fda8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDA8u;
    SET_GPR_U32(ctx, 31, 0x21FDB0u);
    ctx->pc = 0x21FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDA8u;
    // 0x21fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDA8u, 0x21FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDB0u;
label_21fdb0:
    // 0x21fdb0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x21FDB0u;
    {
        const bool branch_taken_0x21fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fdb0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FDB8u;
label_21fdb8:
    // 0x21fdb8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDB8u;
    SET_GPR_U32(ctx, 31, 0x21FDC0u);
    ctx->pc = 0x21FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDB8u;
    // 0x21fdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDB8u, 0x21FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDC0u;
label_21fdc0:
    // 0x21fdc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDC0u;
    {
        const bool branch_taken_0x21fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDC0u;
        // 0x21fdc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdc0) {
            ctx->pc = 0x21FDD8u;
            goto label_21fdd8;
        }
    }
    ctx->pc = 0x21FDC8u;
    // 0x21fdc8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21fdcc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDCCu;
    SET_GPR_U32(ctx, 31, 0x21FDD4u);
    ctx->pc = 0x21FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDCCu;
    // 0x21fdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDCCu, 0x21FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDD4u;
label_21fdd4:
    // 0x21fdd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21fdd8:
    // 0x21fdd8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDD8u;
    SET_GPR_U32(ctx, 31, 0x21FDE0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDD8u, 0x21FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE0u;
label_21fde0:
    // 0x21fde0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDE0u;
    {
        const bool branch_taken_0x21fde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde0) {
            ctx->pc = 0x21FDF8u;
            goto label_21fdf8;
        }
    }
    ctx->pc = 0x21FDE8u;
    // 0x21fde8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21fdec: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FDECu;
    SET_GPR_U32(ctx, 31, 0x21FDF4u);
    ctx->pc = 0x21FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDECu;
    // 0x21fdf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FDECu, 0x21FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDF4u;
label_21fdf4:
    // 0x21fdf4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_21fdf8:
    // 0x21fdf8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FDF8u;
    SET_GPR_U32(ctx, 31, 0x21FE00u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FDF8u, 0x21FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE00u;
label_21fe00:
    // 0x21fe00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE00u;
    {
        const bool branch_taken_0x21fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE00u;
        // 0x21fe04: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe00) {
            ctx->pc = 0x21FE18u;
            goto label_21fe18;
        }
    }
    ctx->pc = 0x21FE08u;
    // 0x21fe08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21fe0c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE0Cu;
    SET_GPR_U32(ctx, 31, 0x21FE14u);
    ctx->pc = 0x21FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE0Cu;
    // 0x21fe10: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE0Cu, 0x21FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE14u;
label_21fe14:
    // 0x21fe14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21fe18:
    // 0x21fe18: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE18u;
    SET_GPR_U32(ctx, 31, 0x21FE20u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE18u, 0x21FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE20u;
label_21fe20:
    // 0x21fe20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE20u;
    {
        const bool branch_taken_0x21fe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE20u;
        // 0x21fe24: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe20) {
            ctx->pc = 0x21FE40u;
            goto label_21fe40;
        }
    }
    ctx->pc = 0x21FE28u;
    // 0x21fe28: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21fe2c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FE2Cu;
    SET_GPR_U32(ctx, 31, 0x21FE34u);
    ctx->pc = 0x21FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE2Cu;
    // 0x21fe30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE2Cu, 0x21FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE34u;
label_21fe34:
    // 0x21fe34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FE34u;
    {
        const bool branch_taken_0x21fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE34u;
        // 0x21fe38: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe34) {
            ctx->pc = 0x21FE50u;
            goto label_21fe50;
        }
    }
    ctx->pc = 0x21FE3Cu;
    // 0x21fe3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fe40:
    // 0x21fe40: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE40u;
    SET_GPR_U32(ctx, 31, 0x21FE48u);
    ctx->pc = 0x21FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE40u;
    // 0x21fe44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE40u, 0x21FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x21FE48u;
    {
        const bool branch_taken_0x21fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe48) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE50u;
label_21fe50:
    // 0x21fe50: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE50u;
    SET_GPR_U32(ctx, 31, 0x21FE58u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE50u, 0x21FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FE58u;
    {
        const bool branch_taken_0x21fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe58) {
            ctx->pc = 0x21FE78u;
            goto label_21fe78;
        }
    }
    ctx->pc = 0x21FE60u;
    // 0x21fe60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fe64: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x21FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE64u;
    // 0x21fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE64u, 0x21FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE6Cu;
label_21fe6c:
    // 0x21fe6c: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE74u;
    // 0x21fe74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fe78:
    // 0x21fe78: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE78u;
    SET_GPR_U32(ctx, 31, 0x21FE80u);
    ctx->pc = 0x21FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE78u;
    // 0x21fe7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE78u, 0x21FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE80u;
label_21fe80:
    // 0x21fe80: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FE88u;
    SET_GPR_U32(ctx, 31, 0x21FE90u);
    ctx->pc = 0x21FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE88u;
    // 0x21fe8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FE88u, 0x21FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE90u;
label_21fe90:
    // 0x21fe90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FEA8u;
            goto label_21fea8;
        }
    }
    ctx->pc = 0x21FE98u;
    // 0x21fe98: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21fe9c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FE9Cu;
    SET_GPR_U32(ctx, 31, 0x21FEA4u);
    ctx->pc = 0x21FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE9Cu;
    // 0x21fea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FE9Cu, 0x21FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEA4u;
label_21fea4:
    // 0x21fea4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21fea8:
    // 0x21fea8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FEA8u;
    SET_GPR_U32(ctx, 31, 0x21FEB0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FEA8u, 0x21FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEB0u;
label_21feb0:
    // 0x21feb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEB0u;
    {
        const bool branch_taken_0x21feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEB0u;
        // 0x21feb4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feb0) {
            ctx->pc = 0x21FED0u;
            goto label_21fed0;
        }
    }
    ctx->pc = 0x21FEB8u;
    // 0x21feb8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21febc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FEBCu;
    SET_GPR_U32(ctx, 31, 0x21FEC4u);
    ctx->pc = 0x21FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEBCu;
    // 0x21fec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEBCu, 0x21FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEC4u;
label_21fec4:
    // 0x21fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FEE8u;
            goto label_21fee8;
        }
    }
    ctx->pc = 0x21FECCu;
    // 0x21fecc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21fed0:
    // 0x21fed0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FED0u;
    SET_GPR_U32(ctx, 31, 0x21FED8u);
    ctx->pc = 0x21FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FED0u;
    // 0x21fed4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FED0u, 0x21FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21fedc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FEDCu;
    SET_GPR_U32(ctx, 31, 0x21FEE4u);
    ctx->pc = 0x21FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEDCu;
    // 0x21fee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FEDCu, 0x21FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEE4u;
label_21fee4:
    // 0x21fee4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_21fee8:
    // 0x21fee8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FEE8u;
    SET_GPR_U32(ctx, 31, 0x21FEF0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FEE8u, 0x21FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEF0u;
label_21fef0:
    // 0x21fef0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FEF0u;
    {
        const bool branch_taken_0x21fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fef0) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FEF8u;
    // 0x21fef8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x21fefc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FEFCu;
    SET_GPR_U32(ctx, 31, 0x21FF04u);
    ctx->pc = 0x21FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEFCu;
    // 0x21ff00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEFCu, 0x21FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF04u;
label_21ff04:
    // 0x21ff04: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x21FF04u;
    {
        const bool branch_taken_0x21ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff04) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FF0Cu;
    // 0x21ff0c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21ff10:
    // 0x21ff10: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF10u;
    // 0x21ff14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF10u, 0x21FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ff1c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF1Cu;
    SET_GPR_U32(ctx, 31, 0x21FF24u);
    ctx->pc = 0x21FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF1Cu;
    // 0x21ff20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF1Cu, 0x21FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF24u;
label_21ff24:
    // 0x21ff24: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x21FF24u;
    {
        const bool branch_taken_0x21ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff24) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF2Cu;
    SET_GPR_U32(ctx, 31, 0x21FF34u);
    ctx->pc = 0x21FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF2Cu;
    // 0x21ff30: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF2Cu, 0x21FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF34u;
label_21ff34:
    // 0x21ff34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FF34u;
    {
        const bool branch_taken_0x21ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF34u;
        // 0x21ff38: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff34) {
            ctx->pc = 0x21FF54u;
            goto label_21ff54;
        }
    }
    ctx->pc = 0x21FF3Cu;
    // 0x21ff3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ff40: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FF40u;
    SET_GPR_U32(ctx, 31, 0x21FF48u);
    ctx->pc = 0x21FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF40u;
    // 0x21ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FF40u, 0x21FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF48u;
label_21ff48:
    // 0x21ff48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FF48u;
    {
        const bool branch_taken_0x21ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff48) {
            ctx->pc = 0x21FF6Cu;
            goto label_21ff6c;
        }
    }
    ctx->pc = 0x21FF50u;
    // 0x21ff50: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21ff54:
    // 0x21ff54: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF54u;
    SET_GPR_U32(ctx, 31, 0x21FF5Cu);
    ctx->pc = 0x21FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF54u;
    // 0x21ff58: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF54u, 0x21FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF5Cu;
label_21ff5c:
    // 0x21ff5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ff60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF60u;
    SET_GPR_U32(ctx, 31, 0x21FF68u);
    ctx->pc = 0x21FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF60u;
    // 0x21ff64: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF60u, 0x21FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF68u;
label_21ff68:
    // 0x21ff68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ff6c:
    // 0x21ff6c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF6Cu;
    SET_GPR_U32(ctx, 31, 0x21FF74u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF6Cu, 0x21FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF74u;
label_21ff74:
    // 0x21ff74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF74u;
    {
        const bool branch_taken_0x21ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF74u;
        // 0x21ff78: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff74) {
            ctx->pc = 0x21FF8Cu;
            goto label_21ff8c;
        }
    }
    ctx->pc = 0x21FF7Cu;
    // 0x21ff7c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x21ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x21ff80: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF80u;
    SET_GPR_U32(ctx, 31, 0x21FF88u);
    ctx->pc = 0x21FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF80u;
    // 0x21ff84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF80u, 0x21FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF88u;
label_21ff88:
    // 0x21ff88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21ff8c:
    // 0x21ff8c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FF8Cu;
    SET_GPR_U32(ctx, 31, 0x21FF94u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FF8Cu, 0x21FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FF94u;
    {
        const bool branch_taken_0x21ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff94) {
            ctx->pc = 0x21FFB4u;
            goto label_21ffb4;
        }
    }
    ctx->pc = 0x21FF9Cu;
    // 0x21ff9c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21ffa0: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFA0u;
    // 0x21ffa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFA0u, 0x21FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFA8u;
label_21ffa8:
    // 0x21ffa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FFA8u;
    {
        const bool branch_taken_0x21ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa8) {
            ctx->pc = 0x21FFC4u;
            goto label_21ffc4;
        }
    }
    ctx->pc = 0x21FFB0u;
    // 0x21ffb0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ffb4:
    // 0x21ffb4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FFB4u;
    SET_GPR_U32(ctx, 31, 0x21FFBCu);
    ctx->pc = 0x21FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFB4u;
    // 0x21ffb8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FFB4u, 0x21FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFBCu;
label_21ffbc:
    // 0x21ffbc: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x21FFBCu;
    {
        const bool branch_taken_0x21ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffbc) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFC4u;
label_21ffc4:
    // 0x21ffc4: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FFC4u;
    SET_GPR_U32(ctx, 31, 0x21FFCCu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FFC4u, 0x21FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFCCu;
label_21ffcc:
    // 0x21ffcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21FFCCu;
    {
        const bool branch_taken_0x21ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFCCu;
        // 0x21ffd0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffcc) {
            ctx->pc = 0x21FFECu;
            goto label_21ffec;
        }
    }
    ctx->pc = 0x21FFD4u;
    // 0x21ffd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21ffd8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FFD8u;
    SET_GPR_U32(ctx, 31, 0x21FFE0u);
    ctx->pc = 0x21FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD8u;
    // 0x21ffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFD8u, 0x21FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x1040012b  beqz        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x21FFE0u;
    {
        const bool branch_taken_0x21ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffe0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFE8u;
    // 0x21ffe8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ffec:
    // 0x21ffec: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FFECu;
    SET_GPR_U32(ctx, 31, 0x21FFF4u);
    ctx->pc = 0x21FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFECu;
    // 0x21fff0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FFECu, 0x21FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFFCu;
label_21fffc:
    // 0x21fffc: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FFFCu;
    SET_GPR_U32(ctx, 31, 0x220004u);
    ctx->pc = 0x220000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFFCu;
    // 0x220000: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FFFCu, 0x220004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220004u;
label_220004:
    // 0x220004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220004u;
    {
        const bool branch_taken_0x220004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220004) {
            ctx->pc = 0x220024u;
            goto label_220024;
        }
    }
    ctx->pc = 0x22000Cu;
    // 0x22000c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x220010: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x220010u;
    SET_GPR_U32(ctx, 31, 0x220018u);
    ctx->pc = 0x220014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220010u;
    // 0x220014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220010u, 0x220018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220018u;
label_220018:
    // 0x220018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220018u;
    {
        const bool branch_taken_0x220018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220018u;
        // 0x22001c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220018) {
            ctx->pc = 0x22003Cu;
            goto label_22003c;
        }
    }
    ctx->pc = 0x220020u;
    // 0x220020: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_220024:
    // 0x220024: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220024u;
    SET_GPR_U32(ctx, 31, 0x22002Cu);
    ctx->pc = 0x220028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220024u;
    // 0x220028: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220024u, 0x22002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22002Cu;
label_22002c:
    // 0x22002c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x220030: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220030u;
    SET_GPR_U32(ctx, 31, 0x220038u);
    ctx->pc = 0x220034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220030u;
    // 0x220034: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220030u, 0x220038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220038u;
label_220038:
    // 0x220038: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22003c:
    // 0x22003c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22003Cu;
    SET_GPR_U32(ctx, 31, 0x220044u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22003Cu, 0x220044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220044u;
label_220044:
    // 0x220044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220044u;
    {
        const bool branch_taken_0x220044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220044u;
        // 0x220048: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220044) {
            ctx->pc = 0x22005Cu;
            goto label_22005c;
        }
    }
    ctx->pc = 0x22004Cu;
    // 0x22004c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x220050: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220050u;
    SET_GPR_U32(ctx, 31, 0x220058u);
    ctx->pc = 0x220054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220050u;
    // 0x220054: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220050u, 0x220058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220058u;
label_220058:
    // 0x220058: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22005c:
    // 0x22005c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22005Cu;
    SET_GPR_U32(ctx, 31, 0x220064u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22005Cu, 0x220064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220064u;
label_220064:
    // 0x220064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220064u;
    {
        const bool branch_taken_0x220064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220064u;
        // 0x220068: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220064) {
            ctx->pc = 0x22007Cu;
            goto label_22007c;
        }
    }
    ctx->pc = 0x22006Cu;
    // 0x22006c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x220070: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220070u;
    // 0x220074: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220070u, 0x220078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220078u;
label_220078:
    // 0x220078: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22007c:
    // 0x22007c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22007Cu;
    SET_GPR_U32(ctx, 31, 0x220084u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22007Cu, 0x220084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220084u;
label_220084:
    // 0x220084: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220084u;
    {
        const bool branch_taken_0x220084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220084) {
            ctx->pc = 0x2200A4u;
            goto label_2200a4;
        }
    }
    ctx->pc = 0x22008Cu;
    // 0x22008c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x220090: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x220090u;
    SET_GPR_U32(ctx, 31, 0x220098u);
    ctx->pc = 0x220094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220090u;
    // 0x220094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220090u, 0x220098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220098u;
label_220098:
    // 0x220098: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220098u;
    {
        const bool branch_taken_0x220098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220098u;
        // 0x22009c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220098) {
            ctx->pc = 0x2200B4u;
            goto label_2200b4;
        }
    }
    ctx->pc = 0x2200A0u;
    // 0x2200a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2200a4:
    // 0x2200a4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A4u;
    // 0x2200a8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200A4u, 0x2200ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2200ACu;
    {
        const bool branch_taken_0x2200ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200ACu;
        // 0x2200b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200ac) {
            ctx->pc = 0x2200E8u;
            goto label_2200e8;
        }
    }
    ctx->pc = 0x2200B4u;
label_2200b4:
    // 0x2200b4: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2200B4u;
    SET_GPR_U32(ctx, 31, 0x2200BCu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2200B4u, 0x2200BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200BCu;
label_2200bc:
    // 0x2200bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2200BCu;
    {
        const bool branch_taken_0x2200bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2200C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200BCu;
        // 0x2200c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200bc) {
            ctx->pc = 0x2200DCu;
            goto label_2200dc;
        }
    }
    ctx->pc = 0x2200C4u;
    // 0x2200c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2200c8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2200C8u;
    SET_GPR_U32(ctx, 31, 0x2200D0u);
    ctx->pc = 0x2200CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200C8u;
    // 0x2200cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2200C8u, 0x2200D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200D0u;
label_2200d0:
    // 0x2200d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2200D0u;
    {
        const bool branch_taken_0x2200d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2200d0) {
            ctx->pc = 0x2200E4u;
            goto label_2200e4;
        }
    }
    ctx->pc = 0x2200D8u;
    // 0x2200d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2200dc:
    // 0x2200dc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200DCu;
    SET_GPR_U32(ctx, 31, 0x2200E4u);
    ctx->pc = 0x2200E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200DCu;
    // 0x2200e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200DCu, 0x2200E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200E4u;
label_2200e4:
    // 0x2200e4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2200e8:
    // 0x2200e8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2200E8u;
    SET_GPR_U32(ctx, 31, 0x2200F0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2200E8u, 0x2200F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200F0u;
label_2200f0:
    // 0x2200f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2200F0u;
    {
        const bool branch_taken_0x2200f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F0u;
        // 0x2200f4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200f0) {
            ctx->pc = 0x220108u;
            goto label_220108;
        }
    }
    ctx->pc = 0x2200F8u;
    // 0x2200f8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2200fc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2200FCu;
    SET_GPR_U32(ctx, 31, 0x220104u);
    ctx->pc = 0x220100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200FCu;
    // 0x220100: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2200FCu, 0x220104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220108:
    // 0x220108: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220108u;
    SET_GPR_U32(ctx, 31, 0x220110u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220108u, 0x220110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220110u;
label_220110:
    // 0x220110: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220110u;
        // 0x220114: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220110) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220118u;
    // 0x220118: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 31, 0x220120u);
    ctx->pc = 0x22011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220118u;
    // 0x22011c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220118u, 0x220120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220120u;
label_220120:
    // 0x220120: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x220120u;
    {
        const bool branch_taken_0x220120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220120) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220128u;
label_220128:
    // 0x220128: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 31, 0x220130u);
    ctx->pc = 0x22012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220128u;
    // 0x22012c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220128u, 0x220130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220130u;
    {
        const bool branch_taken_0x220130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220130) {
            ctx->pc = 0x220150u;
            goto label_220150;
        }
    }
    ctx->pc = 0x220138u;
    // 0x220138: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22013c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x22013Cu;
    SET_GPR_U32(ctx, 31, 0x220144u);
    ctx->pc = 0x220140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22013Cu;
    // 0x220140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22013Cu, 0x220144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220144u;
label_220144:
    // 0x220144: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220144u;
    {
        const bool branch_taken_0x220144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220144) {
            ctx->pc = 0x220168u;
            goto label_220168;
        }
    }
    ctx->pc = 0x22014Cu;
    // 0x22014c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_220150:
    // 0x220150: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220150u;
    SET_GPR_U32(ctx, 31, 0x220158u);
    ctx->pc = 0x220154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220150u;
    // 0x220154: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220150u, 0x220158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220158u;
label_220158:
    // 0x220158: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x220158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22015c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22015Cu;
    SET_GPR_U32(ctx, 31, 0x220164u);
    ctx->pc = 0x220160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22015Cu;
    // 0x220160: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22015Cu, 0x220164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220164u;
label_220164:
    // 0x220164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220168:
    // 0x220168: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220168u;
    SET_GPR_U32(ctx, 31, 0x220170u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220168u, 0x220170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220170u;
label_220170:
    // 0x220170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220170u;
    {
        const bool branch_taken_0x220170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220170) {
            ctx->pc = 0x220188u;
            goto label_220188;
        }
    }
    ctx->pc = 0x220178u;
    // 0x220178: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22017c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22017Cu;
    SET_GPR_U32(ctx, 31, 0x220184u);
    ctx->pc = 0x220180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22017Cu;
    // 0x220180: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22017Cu, 0x220184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220184u;
label_220184:
    // 0x220184: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_220188:
    // 0x220188: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220188u;
    SET_GPR_U32(ctx, 31, 0x220190u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220188u, 0x220190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220190u;
label_220190:
    // 0x220190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220190u;
    {
        const bool branch_taken_0x220190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220190) {
            ctx->pc = 0x2201A8u;
            goto label_2201a8;
        }
    }
    ctx->pc = 0x220198u;
    // 0x220198: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22019c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22019Cu;
    SET_GPR_U32(ctx, 31, 0x2201A4u);
    ctx->pc = 0x2201A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22019Cu;
    // 0x2201a0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22019Cu, 0x2201A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201A4u;
label_2201a4:
    // 0x2201a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2201a8:
    // 0x2201a8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2201A8u;
    SET_GPR_U32(ctx, 31, 0x2201B0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2201A8u, 0x2201B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201B0u;
label_2201b0:
    // 0x2201b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2201B0u;
    {
        const bool branch_taken_0x2201b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B0u;
        // 0x2201b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201b0) {
            ctx->pc = 0x2201D0u;
            goto label_2201d0;
        }
    }
    ctx->pc = 0x2201B8u;
    // 0x2201b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2201bc: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2201BCu;
    SET_GPR_U32(ctx, 31, 0x2201C4u);
    ctx->pc = 0x2201C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201BCu;
    // 0x2201c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2201BCu, 0x2201C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201C4u;
label_2201c4:
    // 0x2201c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2201C4u;
    {
        const bool branch_taken_0x2201c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C4u;
        // 0x2201c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201c4) {
            ctx->pc = 0x2201E8u;
            goto label_2201e8;
        }
    }
    ctx->pc = 0x2201CCu;
    // 0x2201cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2201ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2201d0:
    // 0x2201d0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201D0u;
    SET_GPR_U32(ctx, 31, 0x2201D8u);
    ctx->pc = 0x2201D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201D0u;
    // 0x2201d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201D0u, 0x2201D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201D8u;
label_2201d8:
    // 0x2201d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2201dc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201DCu;
    SET_GPR_U32(ctx, 31, 0x2201E4u);
    ctx->pc = 0x2201E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201DCu;
    // 0x2201e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201DCu, 0x2201E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201E4u;
label_2201e4:
    // 0x2201e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2201e8:
    // 0x2201e8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2201E8u;
    SET_GPR_U32(ctx, 31, 0x2201F0u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2201E8u, 0x2201F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201F0u;
label_2201f0:
    // 0x2201f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2201F0u;
    {
        const bool branch_taken_0x2201f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f0) {
            ctx->pc = 0x220208u;
            goto label_220208;
        }
    }
    ctx->pc = 0x2201F8u;
    // 0x2201f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2201fc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x220200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201FCu;
    // 0x220200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201FCu, 0x220204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_220208:
    // 0x220208: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220208u;
    SET_GPR_U32(ctx, 31, 0x220210u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220208u, 0x220210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220210u;
label_220210:
    // 0x220210: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x220210u;
    {
        const bool branch_taken_0x220210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220210u;
        // 0x220214: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220210) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220218u;
    // 0x220218: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 31, 0x220220u);
    ctx->pc = 0x22021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220218u;
    // 0x22021c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220218u, 0x220220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220220u;
label_220220:
    // 0x220220: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x220220u;
    {
        const bool branch_taken_0x220220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220220) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220228u;
label_220228:
    // 0x220228: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22022c: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x22022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x220230: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x220234: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x220234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x220238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x22023c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220240: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x220240u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x220244: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220248: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x220248u;
    {
        const bool branch_taken_0x220248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220248u;
        // 0x22024c: 0x24c6b4e0  addiu       $a2, $a2, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220248) {
            ctx->pc = 0x2202C0u;
            goto label_2202c0;
        }
    }
    ctx->pc = 0x220250u;
    // 0x220250: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220258: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22025c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220260: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220264: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220264u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220268:
    // 0x220268: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x220268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x22026c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22026Cu;
    {
        const bool branch_taken_0x22026c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x22026c) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x220274u;
    // 0x220274: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x220278: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x22027c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22027Cu;
    {
        const bool branch_taken_0x22027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22027Cu;
        // 0x220280: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22027c) {
            ctx->pc = 0x220290u;
            goto label_220290;
        }
    }
    ctx->pc = 0x220284u;
    // 0x220284: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220284u;
    {
        const bool branch_taken_0x220284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220284u;
        // 0x220288: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220284) {
            ctx->pc = 0x220290u;
            goto label_220290;
        }
    }
    ctx->pc = 0x22028Cu;
    // 0x22028c: 0xa503000a  sh          $v1, 0xA($t0)
    ctx->pc = 0x22028cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
label_220290:
    // 0x220290: 0x9504000c  lhu         $a0, 0xC($t0)
    ctx->pc = 0x220290u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x220294: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220298: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220298u;
    {
        const bool branch_taken_0x220298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220298) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x2202A0u;
    // 0x2202a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2202A0u;
    {
        const bool branch_taken_0x2202a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a0) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x2202A8u;
    // 0x2202a8: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x2202a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
label_2202ac:
    // 0x2202ac: 0x0  nop
    ctx->pc = 0x2202acu;
    // NOP
    // 0x2202b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2202b4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x2202b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2202b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2202B8u;
    {
        const bool branch_taken_0x2202b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B8u;
        // 0x2202bc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202b8) {
            ctx->pc = 0x220268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220268;
        }
    }
    ctx->pc = 0x2202C0u;
label_2202c0:
    // 0x2202c0: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x2202c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2202c4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2202c8: 0x14830071  bne         $a0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2202C8u;
    {
        const bool branch_taken_0x2202c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202c8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2202D0u;
    // 0x2202d0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2202D0u;
    SET_GPR_U32(ctx, 31, 0x2202D8u);
    ctx->pc = 0x2202D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202D0u;
    // 0x2202d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2202D0u, 0x2202D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2202D8u;
label_2202d8:
    // 0x2202d8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2202D8u;
    {
        const bool branch_taken_0x2202d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2202d8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2202E0u;
label_2202e0:
    // 0x2202e0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2202e4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x2202e8: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x2202ec: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x2202ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x2202f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x2202f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x2202f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2202f8: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x2202f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x2202fc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2202fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220300: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x220300u;
    {
        const bool branch_taken_0x220300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220300u;
        // 0x220304: 0x2508b4e0  addiu       $t0, $t0, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220300) {
            ctx->pc = 0x220378u;
            goto label_220378;
        }
    }
    ctx->pc = 0x220308u;
    // 0x220308: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x220308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22030c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22030cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220310: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x220314: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220318: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22031c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220320:
    // 0x220320: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x220324: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x220324u;
    {
        const bool branch_taken_0x220324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220324) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x22032Cu;
    // 0x22032c: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x22032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x220330: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220334: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220334u;
    {
        const bool branch_taken_0x220334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220334) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x22033Cu;
    // 0x22033c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22033Cu;
    {
        const bool branch_taken_0x22033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22033c) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x220344u;
    // 0x220344: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220344u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_220348:
    // 0x220348: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22034c: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220350: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220350u;
    {
        const bool branch_taken_0x220350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220350) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220358u;
    // 0x220358: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220358u;
    {
        const bool branch_taken_0x220358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220358) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220360u;
    // 0x220360: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_220364:
    // 0x220364: 0x0  nop
    ctx->pc = 0x220364u;
    // NOP
    // 0x220368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22036c: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220370: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x220370u;
    {
        const bool branch_taken_0x220370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220370) {
            ctx->pc = 0x220320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220320;
        }
    }
    ctx->pc = 0x220378u;
label_220378:
    // 0x220378: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x22037c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220380: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x22039Cu;
            goto label_22039c;
        }
    }
    ctx->pc = 0x220388u;
    // 0x220388: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x22038c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22038Cu;
    SET_GPR_U32(ctx, 31, 0x220394u);
    ctx->pc = 0x220390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22038Cu;
    // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22038Cu, 0x220394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220394u;
label_220394:
    // 0x220394: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220394) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22039Cu;
label_22039c:
    // 0x22039c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22039c) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x2203A4u;
    // 0x2203a4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203a8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203A8u;
    SET_GPR_U32(ctx, 31, 0x2203B0u);
    ctx->pc = 0x2203ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A8u;
    // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203A8u, 0x2203B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203B8u;
label_2203b8:
    // 0x2203b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2203bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2203BCu;
    {
        const bool branch_taken_0x2203bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203bc) {
            ctx->pc = 0x2203D8u;
            goto label_2203d8;
        }
    }
    ctx->pc = 0x2203C4u;
    // 0x2203c4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203c8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203C8u;
    SET_GPR_U32(ctx, 31, 0x2203D0u);
    ctx->pc = 0x2203CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203C8u;
    // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203C8u, 0x2203D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2203D0u;
    {
        const bool branch_taken_0x2203d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203d0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203D8u;
label_2203d8:
    // 0x2203d8: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2203D8u;
    {
        const bool branch_taken_0x2203d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2203d8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203E0u;
    // 0x2203e0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2203e4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2203E4u;
    SET_GPR_U32(ctx, 31, 0x2203ECu);
    ctx->pc = 0x2203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E4u;
    // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2203E4u, 0x2203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2203ECu;
    {
        const bool branch_taken_0x2203ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203ec) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203F4u;
label_2203f4:
    // 0x2203f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2203f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2203fc: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x220400: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x220404: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x220408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22040c: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x22040cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x220410: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220414: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220414) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22041Cu;
    // 0x22041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220420: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
    // 0x220424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x220428: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22042c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220430: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220434:
    // 0x220434: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x220438: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x220438u;
    {
        const bool branch_taken_0x220438 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220438) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220440u;
    // 0x220440: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x220440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x220444: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220448: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220448u;
    {
        const bool branch_taken_0x220448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220448) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220450u;
    // 0x220450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220450u;
    {
        const bool branch_taken_0x220450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220450) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220458u;
    // 0x220458: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220458u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_22045c:
    // 0x22045c: 0x0  nop
    ctx->pc = 0x22045cu;
    // NOP
    // 0x220460: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x220464: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220468u;
    {
        const bool branch_taken_0x220468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220468) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220470u;
    // 0x220470: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220478u;
    // 0x220478: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_22047c:
    // 0x22047c: 0x0  nop
    ctx->pc = 0x22047cu;
    // NOP
    // 0x220480: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x220484: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x220484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220488: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x220488u;
    {
        const bool branch_taken_0x220488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220488) {
            ctx->pc = 0x220434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220434;
        }
    }
    ctx->pc = 0x220490u;
label_220490:
    // 0x220490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x220494u;
}
