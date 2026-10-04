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

// Function: FUN_00225f80
// Address: 0x225f80 - 0x226180
void FUN_00225f80_0x225f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00225f80_0x225f80");
#endif

    switch (ctx->pc) {
        case 0x225fa4u: goto label_225fa4;
        case 0x225fb4u: goto label_225fb4;
        case 0x225ff4u: goto label_225ff4;
        case 0x2260a4u: goto label_2260a4;
        case 0x2260b4u: goto label_2260b4;
        case 0x2260ccu: goto label_2260cc;
        case 0x2260e0u: goto label_2260e0;
        case 0x226134u: goto label_226134;
        default: break;
    }

    ctx->pc = 0x225f80u;

    // 0x225f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225f84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x225f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225f98: 0xa0244913  sb          $a0, 0x4913($at)
    ctx->pc = 0x225f98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x334913u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334913u, _value); } while (0);
    // 0x225f9c: 0xc084b84  jal         func_212E10
    ctx->pc = 0x225F9Cu;
    SET_GPR_U32(ctx, 31, 0x225FA4u);
    ctx->pc = 0x225FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F9Cu;
    // 0x225fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212E10u, 0x225F9Cu, 0x225FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FA4u;
label_225fa4:
    // 0x225fa4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x225fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fac: 0xc06eb08  jal         func_1BAC20
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x225FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FACu;
    // 0x225fb0: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x225FACu, 0x225FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x225fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x225fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225fbc: 0x8c222570  lw          $v0, 0x2570($at)
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2F2570u));
    // 0x225fc0: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x225fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x225fc4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x225fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x225fc8: 0x8c2225b8  lw          $v0, 0x25B8($at)
    ctx->pc = 0x225fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2F25B8u));
    // 0x225fcc: 0x24430012  addiu       $v1, $v0, 0x12
    ctx->pc = 0x225fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x225fd0: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x225fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x225fd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225FD4u;
    {
        const bool branch_taken_0x225fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FD4u;
        // 0x225fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fd4) {
            ctx->pc = 0x225FE4u;
            goto label_225fe4;
        }
    }
    ctx->pc = 0x225FDCu;
    // 0x225fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225fe0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x225fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_225fe4:
    // 0x225fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fe8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x225fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x225fec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x225fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x225ff0: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_225ff4:
    // 0x225ff4: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x225ff8: 0x24453620  addiu       $a1, $v0, 0x3620
    ctx->pc = 0x225ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x225ffc: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x225ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
    // 0x226000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226000u;
    {
        const bool branch_taken_0x226000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226000) {
            ctx->pc = 0x226014u;
            goto label_226014;
        }
    }
    ctx->pc = 0x226008u;
    // 0x226008: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x226008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22600c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22600Cu;
    {
        const bool branch_taken_0x22600c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22600c) {
            ctx->pc = 0x226028u;
            goto label_226028;
        }
    }
    ctx->pc = 0x226014u;
label_226014:
    // 0x226014: 0x0  nop
    ctx->pc = 0x226014u;
    // NOP
    // 0x226018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22601c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x226020: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x226020u;
    {
        const bool branch_taken_0x226020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226020u;
        // 0x226024: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226020) {
            ctx->pc = 0x225FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225ff4;
        }
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22602c: 0x10c2002e  beq         $a2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22602Cu;
    {
        const bool branch_taken_0x22602c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x22602c) {
            ctx->pc = 0x2260E8u;
            goto label_2260e8;
        }
    }
    ctx->pc = 0x226034u;
    // 0x226034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226038: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x226038u;
    {
        const bool branch_taken_0x226038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x226038) {
            ctx->pc = 0x2260E8u;
            goto label_2260e8;
        }
    }
    ctx->pc = 0x226040u;
    // 0x226040: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x226040u;
    {
        const bool branch_taken_0x226040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226040u;
        // 0x226044: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226040) {
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x226048u;
    // 0x226048: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x226048u;
    {
        const bool branch_taken_0x226048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226048u;
        // 0x22604c: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226048) {
            ctx->pc = 0x226138u;
            goto label_226138;
        }
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x246349b0  addiu       $v1, $v1, 0x49B0
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18864));
    // 0x226054: 0x9062005c  lbu         $v0, 0x5C($v1)
    ctx->pc = 0x226054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x226058: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x226058u;
    {
        const bool branch_taken_0x226058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226058) {
            ctx->pc = 0x2260ACu;
            goto label_2260ac;
        }
    }
    ctx->pc = 0x226060u;
    // 0x226060: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x226064: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x226064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x226068: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x22606c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226070: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x226074: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x226078: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22607c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226084: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226088: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22608c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22608cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226090: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226094: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226098: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22609c: 0xc05da58  jal         func_176960
    ctx->pc = 0x22609Cu;
    SET_GPR_U32(ctx, 31, 0x2260A4u);
    ctx->pc = 0x2260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22609Cu;
    // 0x2260a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22609Cu, 0x2260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A4u;
label_2260a4:
    // 0x2260a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2260A4u;
    {
        const bool branch_taken_0x2260a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260a4) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260ACu;
label_2260ac:
    // 0x2260ac: 0xc044894  jal         func_112250
    ctx->pc = 0x2260ACu;
    SET_GPR_U32(ctx, 31, 0x2260B4u);
    ctx->pc = 0x2260B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260ACu;
    // 0x2260b0: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2260ACu, 0x2260B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260B4u;
label_2260b4:
    // 0x2260b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2260B4u;
    {
        const bool branch_taken_0x2260b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B4u;
        // 0x2260b8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260b4) {
            ctx->pc = 0x2260D4u;
            goto label_2260d4;
        }
    }
    ctx->pc = 0x2260BCu;
    // 0x2260bc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2260c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2260c4: 0xc05da58  jal         func_176960
    ctx->pc = 0x2260C4u;
    SET_GPR_U32(ctx, 31, 0x2260CCu);
    ctx->pc = 0x2260C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260C4u;
    // 0x2260c8: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x2260C4u, 0x2260CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260CCu;
label_2260cc:
    // 0x2260cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2260CCu;
    {
        const bool branch_taken_0x2260cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260cc) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260D4u;
label_2260d4:
    // 0x2260d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2260d8: 0xc05da58  jal         func_176960
    ctx->pc = 0x2260D8u;
    SET_GPR_U32(ctx, 31, 0x2260E0u);
    ctx->pc = 0x2260DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D8u;
    // 0x2260dc: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x2260D8u, 0x2260E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2260E0u;
    {
        const bool branch_taken_0x2260e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260e0) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260E8u;
label_2260e8:
    // 0x2260e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2260ec: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2260f0: 0x24424920  addiu       $v0, $v0, 0x4920
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18720));
    // 0x2260f4: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x2260f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x2260f8: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x334974u));
    // 0x2260fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226100: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33496Cu));
    // 0x226104: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x226108: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22610c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226114: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226118: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22611c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x226120: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226124: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x226128: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22612c: 0xc05da58  jal         func_176960
    ctx->pc = 0x22612Cu;
    SET_GPR_U32(ctx, 31, 0x226134u);
    ctx->pc = 0x226130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22612Cu;
    // 0x226130: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22612Cu, 0x226134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226134u;
label_226134:
    // 0x226134: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_226138:
    // 0x226138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22613c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22613Cu;
    {
        const bool branch_taken_0x22613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22613Cu;
        // 0x226140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22613c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226144u;
    // 0x226144: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x226144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226148: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226148u;
    {
        const bool branch_taken_0x226148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226148u;
        // 0x22614c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226148) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226150u;
    // 0x226150: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226150u;
    {
        const bool branch_taken_0x226150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226150) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226158u;
    // 0x226158: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x226158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x22615c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22615Cu;
        // 0x226160: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22615c) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226164u;
    // 0x226164: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226164) {
            ctx->pc = 0x226178u;
            goto label_226178;
        }
    }
    ctx->pc = 0x22616Cu;
label_22616c:
    // 0x22616c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226170:
    // 0x226170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226170u;
    {
        const bool branch_taken_0x226170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226170u;
        // 0x226174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226170) {
            ctx->pc = 0x226180u;
            return;
        }
    }
    ctx->pc = 0x226178u;
label_226178:
    // 0x226178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22617c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x226180u;
}
