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

// Function: entry_00239fb0
// Address: 0x239fb0 - 0x23a31c
void entry_00239fb0_0x239fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239fb0_0x239fb0");
#endif

    switch (ctx->pc) {
        case 0x23a010u: goto label_23a010;
        case 0x23a040u: goto label_23a040;
        case 0x23a050u: goto label_23a050;
        case 0x23a060u: goto label_23a060;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a138u: goto label_23a138;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a240u: goto label_23a240;
        default: break;
    }

    ctx->pc = 0x239fb0u;

    // 0x239fb0: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x239fb4: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x239fb8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x239fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fbc: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x239fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
    // 0x239fc0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x239fc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x239fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239fc8: 0x26830828  addiu       $v1, $s4, 0x828
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x239fcc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x239fccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x239fd0: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x239fd0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239fd4: 0x824814  dsllv       $t1, $v0, $a0
    ctx->pc = 0x239fd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x239fd8: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x239fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x239fdc: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x239FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239FDCu;
            // 0x239fe0: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x239FE4u;
    // 0x239fe4: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x239fe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239FE8u;
    {
        const bool branch_taken_0x239fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE8u;
        // 0x239fec: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe8) {
            ctx->pc = 0x23A030u;
            goto label_23a030;
        }
    }
    ctx->pc = 0x239FF0u;
    // 0x239ff0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239ff4: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x239ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x239ff8: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x239ffc: 0x1261824  and         $v1, $t1, $a2
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x23a000: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23A000u;
    {
        const bool branch_taken_0x23a000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A000u;
        // 0x23a004: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a000) {
            ctx->pc = 0x23A02Cu;
            goto label_23a02c;
        }
    }
    ctx->pc = 0x23A008u;
    // 0x23a008: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23a008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a00c: 0x0  nop
    ctx->pc = 0x23a00cu;
    // NOP
label_23a010:
    // 0x23a010: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a014: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x23a018: 0x0  nop
    ctx->pc = 0x23a018u;
    // NOP
    // 0x23a01c: 0x0  nop
    ctx->pc = 0x23a01cu;
    // NOP
    // 0x23a020: 0x0  nop
    ctx->pc = 0x23a020u;
    // NOP
    // 0x23a024: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A024u;
    {
        const bool branch_taken_0x23a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A024u;
        // 0x23a028: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a024) {
            ctx->pc = 0x23A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a010;
        }
    }
    ctx->pc = 0x23A02Cu;
label_23a02c:
    // 0x23a02c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23a030:
    // 0x23a030: 0x244d0828  addiu       $t5, $v0, 0x828
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x23a034: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x23a034u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a038: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a03c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_23a040:
    // 0x23a040: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a044: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x23a048: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a04c: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_23a050:
    // 0x23a050: 0x12050016  beq         $s0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23A050u;
    {
        const bool branch_taken_0x23a050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a050) {
            ctx->pc = 0x23A0ACu;
            goto label_23a0ac;
        }
    }
    ctx->pc = 0x23A058u;
    // 0x23a058: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a05c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a060:
    // 0x23a060: 0x4c3024  and         $a2, $v0, $t4
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x23a064: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x23a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x23a068: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x23a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23a06c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a070: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23a070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23a078: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a07c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A07Cu;
    {
        const bool branch_taken_0x23a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A07Cu;
        // 0x23a080: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a07c) {
            ctx->pc = 0x23A088u;
            goto label_23a088;
        }
    }
    ctx->pc = 0x23A084u;
    // 0x23a084: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x23a084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_23a088:
    // 0x23a088: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a08c: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23A090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A08Cu;
            // 0x23a090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A270u;
            goto label_23a270;
        }
    }
    ctx->pc = 0x23A094u;
    // 0x23a094: 0x503008c  bgezl       $t0, . + 4 + (0x8C << 2)
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A094u;
            // 0x23a098: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A09Cu;
    // 0x23a09c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x23a09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a0a0: 0x5605ffef  bnel        $s0, $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23A0A0u;
    {
        const bool branch_taken_0x23a0a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x23a0a0) {
            ctx->pc = 0x23A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0A0u;
            // 0x23a0a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a060;
        }
    }
    ctx->pc = 0x23A0A8u;
    // 0x23a0a8: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_23a0ac:
    // 0x23a0ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A0ACu;
    {
        const bool branch_taken_0x23a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ACu;
        // 0x23a0b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ac) {
            ctx->pc = 0x23A0BCu;
            goto label_23a0bc;
        }
    }
    ctx->pc = 0x23A0B4u;
    // 0x23a0b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23a0b8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_23a0bc:
    // 0x23a0bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x23a0c0: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x23a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x23a0c4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x23A0C4u;
    {
        const bool branch_taken_0x23a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c4) {
            ctx->pc = 0x23A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0C4u;
            // 0x23a0c8: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a050;
        }
    }
    ctx->pc = 0x23A0CCu;
    // 0x23a0cc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x23a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x23a0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a0d4: 0x25c50828  addiu       $a1, $t6, 0x828
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2088));
    // 0x23a0d8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23a0d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23a0dc: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x23a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_23a0e0:
    // 0x23a0e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A0E0u;
    {
        const bool branch_taken_0x23a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E0u;
        // 0x23a0e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0e0) {
            ctx->pc = 0x23A0F8u;
            goto label_23a0f8;
        }
    }
    ctx->pc = 0x23A0E8u;
    // 0x23a0e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23a0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23a0f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A0F0u;
    {
        const bool branch_taken_0x23a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F0u;
        // 0x23a0f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f0) {
            ctx->pc = 0x23A10Cu;
            goto label_23a10c;
        }
    }
    ctx->pc = 0x23A0F8u;
label_23a0f8:
    // 0x23a0f8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x23a0fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a100: 0x0  nop
    ctx->pc = 0x23a100u;
    // NOP
    // 0x23a104: 0x1044fff6  beq         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0e0;
        }
    }
    ctx->pc = 0x23A10Cu;
label_23a10c:
    // 0x23a10c: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x23a10cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x23a110: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a114: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23a118: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A118u;
            // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x23A120u;
    // 0x23a120: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x23A120u;
    {
        const bool branch_taken_0x23a120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a120) {
            ctx->pc = 0x23A160u;
            goto label_23a160;
        }
    }
    ctx->pc = 0x23A128u;
    // 0x23a128: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A130u;
    // 0x23a130: 0x9e430004  lwu         $v1, 0x4($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23a134: 0x0  nop
    ctx->pc = 0x23a134u;
    // NOP
label_23a138:
    // 0x23a138: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a13c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x23a140: 0x0  nop
    ctx->pc = 0x23a140u;
    // NOP
    // 0x23a144: 0x0  nop
    ctx->pc = 0x23a144u;
    // NOP
    // 0x23a148: 0x0  nop
    ctx->pc = 0x23a148u;
    // NOP
    // 0x23a14c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A14Cu;
    {
        const bool branch_taken_0x23a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a14c) {
            ctx->pc = 0x23A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a138;
        }
    }
    ctx->pc = 0x23A154u;
    // 0x23a154: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A15Cu;
    // 0x23a15c: 0x0  nop
    ctx->pc = 0x23a15cu;
    // NOP
label_23a160:
    // 0x23a160: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a164:
    // 0x23a164: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a168: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a16c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23a170: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23a174: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A198u;
            goto label_23a198;
        }
    }
    ctx->pc = 0x23A180u;
    // 0x23a180: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23a184: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a188: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23a18c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1A0u;
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A194u;
    // 0x23a194: 0x0  nop
    ctx->pc = 0x23a194u;
    // NOP
label_23a198:
    // 0x23a198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a19c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1a0:
    // 0x23a1a0: 0x26900828  addiu       $s0, $s4, 0x828
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x23a1a4: 0x2412fffc  addiu       $s2, $zero, -0x4
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a1a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a1b0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x23a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x23a1b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A1D0u;
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1C0u;
    // 0x23a1c0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a1c4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x23A1C4u;
    {
        const bool branch_taken_0x23a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1c4) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A1CCu;
    // 0x23a1cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a1d0:
    // 0x23a1d0: 0xc08e672  jal         func_2399C8
    ctx->pc = 0x23A1D0u;
    SET_GPR_U32(ctx, 31, 0x23A1D8u);
    ctx->pc = 0x23A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1D0u;
    // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2399C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2399C8u, 0x23A1D0u, 0x23A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1D8u;
label_23a1d8:
    // 0x23a1d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23a1e0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x23a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x23a1e4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a1e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A1E8u;
    {
        const bool branch_taken_0x23a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1e8) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1F0u;
    // 0x23a1f0: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23a1f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a1f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23a1fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A204u;
    // 0x23a204: 0x0  nop
    ctx->pc = 0x23a204u;
    // NOP
label_23a208:
    // 0x23a208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a20c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a210:
    // 0x23a210: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x23a214: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a218: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a21c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23a224: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A228u;
    {
        const bool branch_taken_0x23a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a228) {
            ctx->pc = 0x23A238u;
            goto label_23a238;
        }
    }
    ctx->pc = 0x23A230u;
    // 0x23a230: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23A230u;
    {
        const bool branch_taken_0x23a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a230) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A238u;
label_23a238:
    // 0x23a238: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x23A238u;
    SET_GPR_U32(ctx, 31, 0x23A240u);
    ctx->pc = 0x23A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A238u;
    // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x23A238u, 0x23A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A240u;
label_23a240:
    // 0x23a240: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23A240u;
    {
        const bool branch_taken_0x23a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a240) {
            ctx->pc = 0x23A328u;
            return;
        }
    }
    ctx->pc = 0x23A248u;
    // 0x23a248: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a24c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a254: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a258: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23a25c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23a260: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a264: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23A264u;
    {
        const bool branch_taken_0x23a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a264) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x23A26Cu;
    // 0x23a26c: 0x0  nop
    ctx->pc = 0x23a26cu;
    // NOP
label_23a270:
    // 0x23a270: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a274: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23a278: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x23a278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x23a27c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x23a27cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x23a280: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x23a284: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a288: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x23a28c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x23a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x23a290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a294: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a294u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x23a298: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x23a29c: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2a4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x23a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x23a2a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23a2ac: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x23a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x23a2b0: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x23a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x23a2b4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x23a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x23a2b8: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x23a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x23a2bc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x23a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x23a2c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23A2C0u;
    {
        const bool branch_taken_0x23a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2c0) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x23A2C8u;
label_23a2c8:
    // 0x23a2c8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a2d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23a2dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23a2e0: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a2e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23A2E4u;
    {
        const bool branch_taken_0x23a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2e4) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x23A2ECu;
    // 0x23a2ec: 0x0  nop
    ctx->pc = 0x23a2ecu;
    // NOP
label_23a2f0:
    // 0x23a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a2f4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x23a2f8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x23a2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a304: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x23a308: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23a30c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x23a310: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x23a310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x23a314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x23a31cu;
}
