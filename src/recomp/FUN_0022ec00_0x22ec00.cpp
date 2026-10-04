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

// Function: FUN_0022ec00
// Address: 0x22ec00 - 0x22ec80
void FUN_0022ec00_0x22ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022ec00_0x22ec00");
#endif

    switch (ctx->pc) {
        case 0x22ec18u: goto label_22ec18;
        case 0x22ec54u: goto label_22ec54;
        default: break;
    }

    ctx->pc = 0x22ec00u;

    // 0x22ec00: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22EC00u;
    {
        const bool branch_taken_0x22ec00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec00) {
            ctx->pc = 0x22EC44u;
            goto label_22ec44;
        }
    }
    ctx->pc = 0x22EC08u;
    // 0x22ec08: 0x8f8584b0  lw          $a1, -0x7B50($gp)
    ctx->pc = 0x22ec08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x22ec0c: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x22EC0Cu;
    {
        const bool branch_taken_0x22ec0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec0c) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC14u;
    // 0x22ec14: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22ec18:
    // 0x22ec18: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x22ec1c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC1Cu;
    {
        const bool branch_taken_0x22ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec1c) {
            ctx->pc = 0x22EC30u;
            goto label_22ec30;
        }
    }
    ctx->pc = 0x22EC24u;
    // 0x22ec24: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x22ec28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22ec2c: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ec30:
    // 0x22ec30: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22ec34: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22EC34u;
    {
        const bool branch_taken_0x22ec34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec34) {
            ctx->pc = 0x22EC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec18;
        }
    }
    ctx->pc = 0x22EC3Cu;
    // 0x22ec3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22EC3Cu;
    {
        const bool branch_taken_0x22ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec3c) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC44u;
label_22ec44:
    // 0x22ec44: 0x8f8584b0  lw          $a1, -0x7B50($gp)
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x22ec48: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x22EC48u;
    {
        const bool branch_taken_0x22ec48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec48) {
            ctx->pc = 0x22EC7Cu;
            goto label_22ec7c;
        }
    }
    ctx->pc = 0x22EC50u;
    // 0x22ec50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22ec50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22ec54:
    // 0x22ec54: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x22ec54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
    // 0x22ec58: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EC58u;
    {
        const bool branch_taken_0x22ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ec58) {
            ctx->pc = 0x22EC6Cu;
            goto label_22ec6c;
        }
    }
    ctx->pc = 0x22EC60u;
    // 0x22ec60: 0x94a30056  lhu         $v1, 0x56($a1)
    ctx->pc = 0x22ec60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 86)));
    // 0x22ec64: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x22ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x22ec68: 0xa4a30056  sh          $v1, 0x56($a1)
    ctx->pc = 0x22ec68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 86), (uint16_t)GPR_U32(ctx, 3));
label_22ec6c:
    // 0x22ec6c: 0x0  nop
    ctx->pc = 0x22ec6cu;
    // NOP
    // 0x22ec70: 0x8ca50044  lw          $a1, 0x44($a1)
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x22ec74: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22EC74u;
    {
        const bool branch_taken_0x22ec74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ec74) {
            ctx->pc = 0x22EC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ec54;
        }
    }
    ctx->pc = 0x22EC7Cu;
label_22ec7c:
    // 0x22ec7c: 0x0  nop
    ctx->pc = 0x22ec7cu;
    // NOP
    ctx->pc = 0x22ec80u;
}
