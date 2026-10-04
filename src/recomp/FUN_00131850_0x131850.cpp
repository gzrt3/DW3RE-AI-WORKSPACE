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

// Function: FUN_00131850
// Address: 0x131850 - 0x131908
void FUN_00131850_0x131850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131850_0x131850");
#endif

    switch (ctx->pc) {
        case 0x13187cu: goto label_13187c;
        default: break;
    }

    ctx->pc = 0x131850u;

    // 0x131850: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x131850u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x131854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131858: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x131858u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13185c: 0x3c0a002f  lui         $t2, 0x2F
    ctx->pc = 0x13185cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)47 << 16));
    // 0x131860: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x131864: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x131864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x131868: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x131868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13186c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x13186cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131870: 0x254a2570  addiu       $t2, $t2, 0x2570
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9584));
    // 0x131874: 0x25083b80  addiu       $t0, $t0, 0x3B80
    ctx->pc = 0x131874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15232));
    // 0x131878: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_13187c:
    // 0x13187c: 0x14d1021  addu        $v0, $t2, $t5
    ctx->pc = 0x13187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x131880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131884: 0x9449000a  lhu         $t1, 0xA($v0)
    ctx->pc = 0x131884u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x131888: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13188c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x131890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x131894: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x131894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x131898: 0x1047000b  beq         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x131898u;
    {
        const bool branch_taken_0x131898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131898) {
            ctx->pc = 0x1318C8u;
            goto label_1318c8;
        }
    }
    ctx->pc = 0x1318A0u;
    // 0x1318a0: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1318A0u;
    {
        const bool branch_taken_0x1318a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1318a0) {
            ctx->pc = 0x1318C0u;
            goto label_1318c0;
        }
    }
    ctx->pc = 0x1318A8u;
    // 0x1318a8: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1318A8u;
    {
        const bool branch_taken_0x1318a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1318a8) {
            ctx->pc = 0x1318B8u;
            goto label_1318b8;
        }
    }
    ctx->pc = 0x1318B0u;
    // 0x1318b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1318B0u;
    {
        const bool branch_taken_0x1318b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318b0) {
            ctx->pc = 0x1318CCu;
            goto label_1318cc;
        }
    }
    ctx->pc = 0x1318B8u;
label_1318b8:
    // 0x1318b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1318B8u;
    {
        const bool branch_taken_0x1318b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318B8u;
        // 0x1318bc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318b8) {
            ctx->pc = 0x1318CCu;
            goto label_1318cc;
        }
    }
    ctx->pc = 0x1318C0u;
label_1318c0:
    // 0x1318c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1318C0u;
    {
        const bool branch_taken_0x1318c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1318C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318C0u;
        // 0x1318c4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318c0) {
            ctx->pc = 0x1318CCu;
            goto label_1318cc;
        }
    }
    ctx->pc = 0x1318C8u;
label_1318c8:
    // 0x1318c8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1318cc:
    // 0x1318cc: 0x0  nop
    ctx->pc = 0x1318ccu;
    // NOP
    // 0x1318d0: 0x15830005  bne         $t4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1318D0u;
    {
        const bool branch_taken_0x1318d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1318d0) {
            ctx->pc = 0x1318E8u;
            goto label_1318e8;
        }
    }
    ctx->pc = 0x1318D8u;
    // 0x1318d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1318dc: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x1318dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1318e0: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1318E0u;
    {
        const bool branch_taken_0x1318e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1318E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318E0u;
        // 0x1318e4: 0x25ad47b8  addiu       $t5, $t5, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318e0) {
            ctx->pc = 0x13187Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13187c;
        }
    }
    ctx->pc = 0x1318E8u;
label_1318e8:
    // 0x1318e8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1318ec: 0x15820003  bne         $t4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1318ECu;
    {
        const bool branch_taken_0x1318ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x1318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318ECu;
        // 0x1318f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318ec) {
            ctx->pc = 0x1318FCu;
            goto label_1318fc;
        }
    }
    ctx->pc = 0x1318F4u;
    // 0x1318f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1318F4u;
    {
        const bool branch_taken_0x1318f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318f4) {
            ctx->pc = 0x131908u;
            return;
        }
    }
    ctx->pc = 0x1318FCu;
label_1318fc:
    // 0x1318fc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1318fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131900: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x131900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x131904: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x131908u;
}
