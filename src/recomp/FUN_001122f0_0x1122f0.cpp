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

// Function: FUN_001122f0
// Address: 0x1122f0 - 0x112348
void FUN_001122f0_0x1122f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001122f0_0x1122f0");
#endif

    ctx->pc = 0x1122f0u;

    // 0x1122f0: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1122f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x1122f4: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1122f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x1122f8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1122F8u;
    {
        const bool branch_taken_0x1122f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122F8u;
        // 0x1122fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122f8) {
            ctx->pc = 0x112338u;
            goto label_112338;
        }
    }
    ctx->pc = 0x112300u;
    // 0x112300: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x112300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x112304: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x112308: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x112308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11230c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x112310: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x112314: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112318: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11231c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11231Cu;
    {
        const bool branch_taken_0x11231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11231c) {
            ctx->pc = 0x112330u;
            goto label_112330;
        }
    }
    ctx->pc = 0x112324u;
    // 0x112324: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x112324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
    // 0x112328: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x112328u;
    {
        const bool branch_taken_0x112328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112328) {
            ctx->pc = 0x112348u;
            return;
        }
    }
    ctx->pc = 0x112330u;
label_112330:
    // 0x112330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x112330u;
    {
        const bool branch_taken_0x112330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112330u;
        // 0x112334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112330) {
            ctx->pc = 0x112348u;
            return;
        }
    }
    ctx->pc = 0x112338u;
label_112338:
    // 0x112338: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x112338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x11233c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11233Cu;
    {
        const bool branch_taken_0x11233c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11233c) {
            ctx->pc = 0x112348u;
            return;
        }
    }
    ctx->pc = 0x112344u;
    // 0x112344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112348u;
}
