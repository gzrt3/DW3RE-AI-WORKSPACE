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

// Function: FUN_002437d0
// Address: 0x2437d0 - 0x2438d8
void FUN_002437d0_0x2437d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002437d0_0x2437d0");
#endif

    switch (ctx->pc) {
        case 0x243818u: goto label_243818;
        default: break;
    }

    ctx->pc = 0x2437d0u;

    // 0x2437d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2437d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2437d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2437dc: 0x28c10013  slti        $at, $a2, 0x13
    ctx->pc = 0x2437dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2437e0: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2437e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x2437e4: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2437e8: 0x2442023e  addiu       $v0, $v0, 0x23E
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 574));
    // 0x2437ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2437ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2437f0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x2437f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2437f4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2437F4u;
    {
        const bool branch_taken_0x2437f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2437F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2437F4u;
        // 0x2437f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2437f4) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x2437FCu;
    // 0x2437fc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x243800: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243804: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x243808: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24380c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x24380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x243810: 0x0  nop
    ctx->pc = 0x243810u;
    // NOP
    // 0x243814: 0xc41004  sllv        $v0, $a0, $a2
    ctx->pc = 0x243814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_243818:
    // 0x243818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24381c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24381Cu;
    {
        const bool branch_taken_0x24381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24381c) {
            ctx->pc = 0x243834u;
            goto label_243834;
        }
    }
    ctx->pc = 0x243824u;
    // 0x243824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x243828: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x243828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x24382c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x24382Cu;
    {
        const bool branch_taken_0x24382c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24382c) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x243834u;
label_243834:
    // 0x243834: 0x0  nop
    ctx->pc = 0x243834u;
    // NOP
    // 0x243838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24383c: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x24383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x243840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243840u;
        // 0x243844: 0xc41004  sllv        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243840) {
            ctx->pc = 0x243818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243818;
        }
    }
    ctx->pc = 0x243848u;
label_243848:
    // 0x243848: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x24384c: 0x2442eb08  addiu       $v0, $v0, -0x14F8
    ctx->pc = 0x24384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961928));
    // 0x243850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x243850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x243854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x243854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x243858: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x24385c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x24385cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243860: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243860u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x243864: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243864u;
    {
        const bool branch_taken_0x243864 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x243868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243864u;
        // 0x243868: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243864) {
            ctx->pc = 0x243874u;
            goto label_243874;
        }
    }
    ctx->pc = 0x24386Cu;
    // 0x24386c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24386Cu;
    {
        const bool branch_taken_0x24386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24386Cu;
        // 0x243870: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24386c) {
            ctx->pc = 0x2438BCu;
            goto label_2438bc;
        }
    }
    ctx->pc = 0x243874u;
label_243874:
    // 0x243874: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x243874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x243878: 0x24630238  addiu       $v1, $v1, 0x238
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 568));
    // 0x24387c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x243880: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x243880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243884: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x243884u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x243888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x243888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24388c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24388cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x243890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x243894: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x243894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243898: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243898u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x24389c: 0x29010064  slti        $at, $t0, 0x64
    ctx->pc = 0x24389cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2438a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x2438B0u;
            goto label_2438b0;
        }
    }
    ctx->pc = 0x2438A8u;
    // 0x2438a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2438A8u;
    {
        const bool branch_taken_0x2438a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x8143c  dsll32      $v0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438a8) {
            ctx->pc = 0x2438B8u;
            goto label_2438b8;
        }
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2438b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x2438b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
label_2438b8:
    // 0x2438b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2438bc:
    // 0x2438bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2438bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2438c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2438c4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2438C4u;
    {
        const bool branch_taken_0x2438c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2438c4) {
            ctx->pc = 0x2438D4u;
            goto label_2438d4;
        }
    }
    ctx->pc = 0x2438CCu;
    // 0x2438cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2438CCu;
    {
        const bool branch_taken_0x2438cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438cc) {
            ctx->pc = 0x2438D8u;
            return;
        }
    }
    ctx->pc = 0x2438D4u;
label_2438d4:
    // 0x2438d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2438d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2438d8u;
}
