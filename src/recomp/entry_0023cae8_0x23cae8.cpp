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

// Function: entry_0023cae8
// Address: 0x23cae8 - 0x23cb2c
void entry_0023cae8_0x23cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cae8_0x23cae8");
#endif

    switch (ctx->pc) {
        case 0x23cb0cu: goto label_23cb0c;
        default: break;
    }

    ctx->pc = 0x23cae8u;

    // 0x23cae8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23cae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23caecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caf0: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x23caf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x23caf4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x23caf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23cafc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23cb00: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23CB00u;
    {
        const bool branch_taken_0x23cb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB00u;
        // 0x23cb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb00) {
            ctx->pc = 0x23CB2Cu;
            return;
        }
    }
    ctx->pc = 0x23CB08u;
    // 0x23cb08: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x23cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23cb0c:
    // 0x23cb0c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23cb0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23cb10: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23cb10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23cb14: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x23cb18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cb1c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cb20: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB20u;
            // 0x23cb24: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb0c;
        }
    }
    ctx->pc = 0x23CB28u;
    // 0x23cb28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23cb2cu;
}
