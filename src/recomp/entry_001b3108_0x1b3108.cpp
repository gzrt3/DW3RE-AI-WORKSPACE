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

// Function: entry_001b3108
// Address: 0x1b3108 - 0x1b3150
void entry_001b3108_0x1b3108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3108_0x1b3108");
#endif

    ctx->pc = 0x1b3108u;

label_1b3108:
    // 0x1b3108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b3108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b310c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B310Cu;
    {
        const bool branch_taken_0x1b310c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B310Cu;
        // 0x1b3110: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b310c) {
            ctx->pc = 0x1B3150u;
            return;
        }
    }
    ctx->pc = 0x1B3114u;
    // 0x1b3114: 0x0  nop
    ctx->pc = 0x1b3114u;
    // NOP
    // 0x1b3118: 0x0  nop
    ctx->pc = 0x1b3118u;
    // NOP
    // 0x1b311c: 0x0  nop
    ctx->pc = 0x1b311cu;
    // NOP
    // 0x1b3120: 0x0  nop
    ctx->pc = 0x1b3120u;
    // NOP
    // 0x1b3124: 0x460fff8  bltz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3124u;
    {
        const bool branch_taken_0x1b3124 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3124u;
        // 0x1b3128: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3124) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B312Cu;
    // 0x1b312c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B312Cu;
    {
        const bool branch_taken_0x1b312c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b312c) {
            ctx->pc = 0x1B3130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B312Cu;
            // 0x1b3130: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3164u;
            return;
        }
    }
    ctx->pc = 0x1B3134u;
    // 0x1b3134: 0x0  nop
    ctx->pc = 0x1b3134u;
    // NOP
    // 0x1b3138: 0x0  nop
    ctx->pc = 0x1b3138u;
    // NOP
    // 0x1b313c: 0x0  nop
    ctx->pc = 0x1b313cu;
    // NOP
    // 0x1b3140: 0x0  nop
    ctx->pc = 0x1b3140u;
    // NOP
    // 0x1b3144: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B3144u;
    {
        const bool branch_taken_0x1b3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3144u;
        // 0x1b3148: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3144) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B314Cu;
    // 0x1b314c: 0x0  nop
    ctx->pc = 0x1b314cu;
    // NOP
    ctx->pc = 0x1b3150u;
}
