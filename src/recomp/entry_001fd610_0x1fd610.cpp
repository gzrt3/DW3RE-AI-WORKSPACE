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

// Function: entry_001fd610
// Address: 0x1fd610 - 0x1fd65c
void entry_001fd610_0x1fd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd610_0x1fd610");
#endif

    ctx->pc = 0x1fd610u;

    // 0x1fd610: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1fd614: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1fd614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fd618: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd61c: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
    // 0x1fd620: 0x34854dd3  ori         $a1, $a0, 0x4DD3
    ctx->pc = 0x1fd620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
    // 0x1fd624: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1fd624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1fd628: 0x2aa40002  slti        $a0, $s5, 0x2
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd62c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1fd630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fd634: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fd638: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd63c: 0x0  nop
    ctx->pc = 0x1fd63cu;
    // NOP
    // 0x1fd640: 0x0  nop
    ctx->pc = 0x1fd640u;
    // NOP
    // 0x1fd644: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd644u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1fd648: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1fd64c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1fd650: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fd654: 0x1480ff81  bnez        $a0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x1FD654u;
    {
        const bool branch_taken_0x1fd654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD654u;
        // 0x1fd658: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd654) {
            ctx->pc = 0x1FD45Cu;
            return;
        }
    }
    ctx->pc = 0x1FD65Cu;
}
