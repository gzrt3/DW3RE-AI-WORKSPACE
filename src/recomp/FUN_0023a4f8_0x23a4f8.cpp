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

// Function: FUN_0023a4f8
// Address: 0x23a4f8 - 0x23a5a0
void FUN_0023a4f8_0x23a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a4f8_0x23a4f8");
#endif

    switch (ctx->pc) {
        case 0x23a51cu: goto label_23a51c;
        case 0x23a554u: goto label_23a554;
        case 0x23a584u: goto label_23a584;
        default: break;
    }

    ctx->pc = 0x23a4f8u;

    // 0x23a4f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23a4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4fc: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a500: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23A500u;
    {
        const bool branch_taken_0x23a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A500u;
        // 0x23a504: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a500) {
            ctx->pc = 0x23A574u;
            goto label_23a574;
        }
    }
    ctx->pc = 0x23A508u;
    // 0x23a508: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x23a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x23a50c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23a510: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23A510u;
    {
        const bool branch_taken_0x23a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a510) {
            ctx->pc = 0x23A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A510u;
            // 0x23a514: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A578u;
            goto label_23a578;
        }
    }
    ctx->pc = 0x23A518u;
    // 0x23a518: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a51c:
    // 0x23a51c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23a51cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a520: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x23a524: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a528: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x23a52c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x23a530: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x23a534: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a538: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23a53c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x23a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x23a540: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23A540u;
    {
        const bool branch_taken_0x23a540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A540u;
        // 0x23a544: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a540) {
            ctx->pc = 0x23A51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a51c;
        }
    }
    ctx->pc = 0x23A548u;
    // 0x23a548: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a54c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A54Cu;
    {
        const bool branch_taken_0x23a54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A54Cu;
        // 0x23a550: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a54c) {
            ctx->pc = 0x23A574u;
            goto label_23a574;
        }
    }
    ctx->pc = 0x23A554u;
label_23a554:
    // 0x23a554: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23a554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a558: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23a55c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23a560: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a564: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23a564u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x23a568: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A568u;
    {
        const bool branch_taken_0x23a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A568u;
        // 0x23a56c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a568) {
            ctx->pc = 0x23A554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a554;
        }
    }
    ctx->pc = 0x23A570u;
    // 0x23a570: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a574:
    // 0x23a574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a578:
    // 0x23a578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a57c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A57Cu;
    {
        const bool branch_taken_0x23a57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A57Cu;
        // 0x23a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a57c) {
            ctx->pc = 0x23A5A0u;
            return;
        }
    }
    ctx->pc = 0x23A584u;
label_23a584:
    // 0x23a584: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23a588: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23a58c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23a590: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23a598: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A598u;
    {
        const bool branch_taken_0x23a598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a598) {
            ctx->pc = 0x23A584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a584;
        }
    }
    ctx->pc = 0x23A5A0u;
}
