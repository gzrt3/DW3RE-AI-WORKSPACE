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

// Function: entry_0014063c
// Address: 0x14063c - 0x14067c
void entry_0014063c_0x14063c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014063c_0x14063c");
#endif

    ctx->pc = 0x14063cu;

    // 0x14063c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x140640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140644: 0x30420044  andi        $v0, $v0, 0x44
    ctx->pc = 0x140644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)68);
    // 0x140648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x140648u;
    {
        const bool branch_taken_0x140648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140648) {
            ctx->pc = 0x14067Cu;
            return;
        }
    }
    ctx->pc = 0x140650u;
    // 0x140650: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140654: 0x2402ff9f  addiu       $v0, $zero, -0x61
    ctx->pc = 0x140654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
    // 0x140658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14065c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x14065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x140660: 0x9202023a  lbu         $v0, 0x23A($s0)
    ctx->pc = 0x140660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x140664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140664u;
    {
        const bool branch_taken_0x140664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140664) {
            ctx->pc = 0x14067Cu;
            return;
        }
    }
    ctx->pc = 0x14066Cu;
    // 0x14066c: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x14066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140670: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x140670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x140674: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140678: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x140678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    ctx->pc = 0x14067cu;
}
