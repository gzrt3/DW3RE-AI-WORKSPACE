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

// Function: entry_0023d600
// Address: 0x23d600 - 0x23d640
void entry_0023d600_0x23d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d600_0x23d600");
#endif

    ctx->pc = 0x23d600u;

label_23d600:
    // 0x23d600: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d600u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d604: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23d608: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23d60c: 0x9042e1f1  lbu         $v0, -0x1E0F($v0)
    ctx->pc = 0x23d60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959601)));
    // 0x23d610: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d614: 0x0  nop
    ctx->pc = 0x23d614u;
    // NOP
    // 0x23d618: 0x0  nop
    ctx->pc = 0x23d618u;
    // NOP
    // 0x23d61c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D61Cu;
    {
        const bool branch_taken_0x23d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d61c) {
            ctx->pc = 0x23D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d600;
        }
    }
    ctx->pc = 0x23D624u;
    // 0x23d624: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23d628: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D628u;
    {
        const bool branch_taken_0x23d628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D628u;
        // 0x23d62c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d628) {
            ctx->pc = 0x23D640u;
            return;
        }
    }
    ctx->pc = 0x23D630u;
    // 0x23d630: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d634: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23d638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D638u;
    {
        const bool branch_taken_0x23d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D638u;
        // 0x23d63c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d638) {
            ctx->pc = 0x23D650u;
            return;
        }
    }
    ctx->pc = 0x23D640u;
}
