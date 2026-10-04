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

// Function: entry_001fd400
// Address: 0x1fd400 - 0x1fd45c
void entry_001fd400_0x1fd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd400_0x1fd400");
#endif

    ctx->pc = 0x1fd400u;

    // 0x1fd400: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fd400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fd404: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fd404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fd408: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd40c: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x1fd410: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x1fd410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x1fd414: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1fd418: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1fd418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd41c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1fd420: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fd424: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fd428: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd42c: 0x0  nop
    ctx->pc = 0x1fd42cu;
    // NOP
    // 0x1fd430: 0x0  nop
    ctx->pc = 0x1fd430u;
    // NOP
    // 0x1fd434: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd434u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1fd438: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1fd43c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd43cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1fd440: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fd444: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
    ctx->pc = 0x1FD444u;
    {
        const bool branch_taken_0x1fd444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD444u;
        // 0x1fd448: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd444) {
            ctx->pc = 0x1FD260u;
            return;
        }
    }
    ctx->pc = 0x1FD44Cu;
    // 0x1fd44c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1FD44Cu;
    {
        const bool branch_taken_0x1fd44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd44c) {
            ctx->pc = 0x1FD65Cu;
            return;
        }
    }
    ctx->pc = 0x1FD454u;
    // 0x1fd454: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1fd454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fd458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd45cu;
}
