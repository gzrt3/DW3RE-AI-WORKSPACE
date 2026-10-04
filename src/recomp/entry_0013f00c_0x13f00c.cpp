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

// Function: entry_0013f00c
// Address: 0x13f00c - 0x13f040
void entry_0013f00c_0x13f00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f00c_0x13f00c");
#endif

    ctx->pc = 0x13f00cu;

    // 0x13f00c: 0x9202023a  lbu         $v0, 0x23A($s0)
    ctx->pc = 0x13f00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x13f010: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13F010u;
    {
        const bool branch_taken_0x13f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F010u;
        // 0x13f014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f010) {
            ctx->pc = 0x13F058u;
            return;
        }
    }
    ctx->pc = 0x13F018u;
    // 0x13f018: 0x920201a2  lbu         $v0, 0x1A2($s0)
    ctx->pc = 0x13f018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x13f01c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F054u;
            return;
        }
    }
    ctx->pc = 0x13F024u;
    // 0x13f024: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x13f024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13f028: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x13f02c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F02Cu;
    {
        const bool branch_taken_0x13f02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F02Cu;
        // 0x13f030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f02c) {
            ctx->pc = 0x13F040u;
            return;
        }
    }
    ctx->pc = 0x13F034u;
    // 0x13f034: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13f038: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F038u;
    {
        const bool branch_taken_0x13f038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f038) {
            ctx->pc = 0x13F054u;
            return;
        }
    }
    ctx->pc = 0x13F040u;
}
