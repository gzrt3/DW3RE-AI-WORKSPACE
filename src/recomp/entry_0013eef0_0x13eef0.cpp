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

// Function: entry_0013eef0
// Address: 0x13eef0 - 0x13ef40
void entry_0013eef0_0x13eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eef0_0x13eef0");
#endif

    ctx->pc = 0x13eef0u;

label_13eef0:
    // 0x13eef0: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x13eef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x13eef4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x13eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x13eef8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x13eef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x13eefc: 0xad400020  sw          $zero, 0x20($t2)
    ctx->pc = 0x13eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
    // 0x13ef00: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x13ef00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13ef04: 0xad400040  sw          $zero, 0x40($t2)
    ctx->pc = 0x13ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 64), GPR_U32(ctx, 0));
    // 0x13ef08: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x13ef08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x13ef0c: 0xad400060  sw          $zero, 0x60($t2)
    ctx->pc = 0x13ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 0));
    // 0x13ef10: 0xad400080  sw          $zero, 0x80($t2)
    ctx->pc = 0x13ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 128), GPR_U32(ctx, 0));
    // 0x13ef14: 0xad4000a0  sw          $zero, 0xA0($t2)
    ctx->pc = 0x13ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 160), GPR_U32(ctx, 0));
    // 0x13ef18: 0xad4000c0  sw          $zero, 0xC0($t2)
    ctx->pc = 0x13ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 192), GPR_U32(ctx, 0));
    // 0x13ef1c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13EF1Cu;
    {
        const bool branch_taken_0x13ef1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF1Cu;
        // 0x13ef20: 0xad4000e0  sw          $zero, 0xE0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef1c) {
            ctx->pc = 0x13EEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eef0;
        }
    }
    ctx->pc = 0x13EF24u;
    // 0x13ef24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13ef28: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x13ef28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13ef2c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13EF2Cu;
    {
        const bool branch_taken_0x13ef2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EF2Cu;
        // 0x13ef30: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef2c) {
            ctx->pc = 0x13EEE0u;
            return;
        }
    }
    ctx->pc = 0x13EF34u;
    // 0x13ef34: 0xaf808528  sw          $zero, -0x7AD8($gp)
    ctx->pc = 0x13ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935848), GPR_U32(ctx, 0));
    // 0x13ef38: 0xaf80852c  sw          $zero, -0x7AD4($gp)
    ctx->pc = 0x13ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935852), GPR_U32(ctx, 0));
    // 0x13ef3c: 0xaf808530  sw          $zero, -0x7AD0($gp)
    ctx->pc = 0x13ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 0));
    ctx->pc = 0x13ef40u;
}
