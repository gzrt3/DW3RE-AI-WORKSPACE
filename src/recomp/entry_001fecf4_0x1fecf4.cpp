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

// Function: entry_001fecf4
// Address: 0x1fecf4 - 0x1fed44
void entry_001fecf4_0x1fecf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fecf4_0x1fecf4");
#endif

    ctx->pc = 0x1fecf4u;

    // 0x1fecf4: 0x8f87909c  lw          $a3, -0x6F64($gp)
    ctx->pc = 0x1fecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
    // 0x1fecf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1fecfc: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x1fecfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x1fed00: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1fed04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fed08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fed0c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1fed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1fed10: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1fed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1fed14: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1fed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1fed18: 0x615021  addu        $t2, $v1, $at
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fed1c: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x1fed1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fed20: 0x10e6000c  beq         $a3, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0xac1821  addu        $v1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FED54u;
            return;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1fed28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1fed2c: 0x91470001  lbu         $a3, 0x1($t2)
    ctx->pc = 0x1fed2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1fed30: 0x28e10063  slti        $at, $a3, 0x63
    ctx->pc = 0x1fed30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x1fed34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FED44u;
            return;
        }
    }
    ctx->pc = 0x1FED3Cu;
    // 0x1fed3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FED3Cu;
    {
        const bool branch_taken_0x1fed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED3Cu;
        // 0x1fed40: 0x8c1821  addu        $v1, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed3c) {
            ctx->pc = 0x1FED4Cu;
            return;
        }
    }
    ctx->pc = 0x1FED44u;
}
