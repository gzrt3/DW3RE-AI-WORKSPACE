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

// Function: FUN_00112250
// Address: 0x112250 - 0x1122dc
void FUN_00112250_0x112250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112250_0x112250");
#endif

    ctx->pc = 0x112250u;

    // 0x112250: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x112250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x112254: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x112254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x112258: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x112258u;
    {
        const bool branch_taken_0x112258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112258u;
        // 0x11225c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112258) {
            ctx->pc = 0x112298u;
            goto label_112298;
        }
    }
    ctx->pc = 0x112260u;
    // 0x112260: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x112260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x112264: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x112264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x112268: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11226c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x112270: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x112274: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112278: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11227c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11227Cu;
    {
        const bool branch_taken_0x11227c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11227c) {
            ctx->pc = 0x112290u;
            goto label_112290;
        }
    }
    ctx->pc = 0x112284u;
    // 0x112284: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x112284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
    // 0x112288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x112288u;
    {
        const bool branch_taken_0x112288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112288) {
            ctx->pc = 0x1122A8u;
            goto label_1122a8;
        }
    }
    ctx->pc = 0x112290u;
label_112290:
    // 0x112290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112290u;
    {
        const bool branch_taken_0x112290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112290u;
        // 0x112294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112290) {
            ctx->pc = 0x1122A8u;
            goto label_1122a8;
        }
    }
    ctx->pc = 0x112298u;
label_112298:
    // 0x112298: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x112298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x11229c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11229Cu;
    {
        const bool branch_taken_0x11229c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11229c) {
            ctx->pc = 0x1122A8u;
            goto label_1122a8;
        }
    }
    ctx->pc = 0x1122A4u;
    // 0x1122a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1122a8:
    // 0x1122a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1122A8u;
    {
        const bool branch_taken_0x1122a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122a8) {
            ctx->pc = 0x1122DCu;
            return;
        }
    }
    ctx->pc = 0x1122B0u;
    // 0x1122b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1122b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1122b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1122b8: 0x90840015  lbu         $a0, 0x15($a0)
    ctx->pc = 0x1122b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x1122bc: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1122BCu;
    {
        const bool branch_taken_0x1122bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1122C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122BCu;
        // 0x1122c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122bc) {
            ctx->pc = 0x1122D8u;
            goto label_1122d8;
        }
    }
    ctx->pc = 0x1122C4u;
    // 0x1122c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122C4u;
    {
        const bool branch_taken_0x1122c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1122c4) {
            ctx->pc = 0x1122D8u;
            goto label_1122d8;
        }
    }
    ctx->pc = 0x1122CCu;
    // 0x1122cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1122d0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1122D0u;
    {
        const bool branch_taken_0x1122d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1122d0) {
            ctx->pc = 0x1122DCu;
            return;
        }
    }
    ctx->pc = 0x1122D8u;
label_1122d8:
    // 0x1122d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1122d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122dcu;
}
