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

// Function: FUN_0022a4f0
// Address: 0x22a4f0 - 0x22a570
void FUN_0022a4f0_0x22a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022a4f0_0x22a4f0");
#endif

    switch (ctx->pc) {
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a528u: goto label_22a528;
        default: break;
    }

    ctx->pc = 0x22a4f0u;

    // 0x22a4f0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x22a4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4f8: 0x24c66d28  addiu       $a2, $a2, 0x6D28
    ctx->pc = 0x22a4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27944));
label_22a4fc:
    // 0x22a4fc: 0x90c3003d  lbu         $v1, 0x3D($a2)
    ctx->pc = 0x22a4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 61)));
    // 0x22a500: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22A500u;
    {
        const bool branch_taken_0x22a500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a500) {
            ctx->pc = 0x22A560u;
            goto label_22a560;
        }
    }
    ctx->pc = 0x22A508u;
    // 0x22a508: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x22a508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x22a50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a510: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x22a514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a518: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22a51c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a520: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22a520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22a524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a528:
    // 0x22a528: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22a52c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22a530: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A54Cu;
            goto label_22a54c;
        }
    }
    ctx->pc = 0x22A538u;
    // 0x22a538: 0x84a3021c  lh          $v1, 0x21C($a1)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x22a53c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22a540: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A540u;
    {
        const bool branch_taken_0x22a540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a540) {
            ctx->pc = 0x22A54Cu;
            goto label_22a54c;
        }
    }
    ctx->pc = 0x22A548u;
    // 0x22a548: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x22a548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
label_22a54c:
    // 0x22a54c: 0x0  nop
    ctx->pc = 0x22a54cu;
    // NOP
    // 0x22a550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22a554: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x22a554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22a558: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22A558u;
    {
        const bool branch_taken_0x22a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A558u;
        // 0x22a55c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a558) {
            ctx->pc = 0x22A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a528;
        }
    }
    ctx->pc = 0x22A560u;
label_22a560:
    // 0x22a560: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22a564: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x22a564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22a568: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A568u;
        // 0x22a56c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a4fc;
        }
    }
    ctx->pc = 0x22A570u;
}
