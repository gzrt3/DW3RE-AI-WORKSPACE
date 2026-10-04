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

// Function: entry_002153e0
// Address: 0x2153e0 - 0x215414
void entry_002153e0_0x2153e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002153e0_0x2153e0");
#endif

    ctx->pc = 0x2153e0u;

    // 0x2153e0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2153E0u;
    {
        const bool branch_taken_0x2153e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153E0u;
        // 0x2153e4: 0x28640048  slti        $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153e0) {
            ctx->pc = 0x21546Cu;
            return;
        }
    }
    ctx->pc = 0x2153E8u;
    // 0x2153e8: 0x28610049  slti        $at, $v1, 0x49
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)73) ? 1 : 0);
    // 0x2153ec: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2153ECu;
    {
        const bool branch_taken_0x2153ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153ECu;
        // 0x2153f0: 0x2465ffc0  addiu       $a1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153ec) {
            ctx->pc = 0x215468u;
            return;
        }
    }
    ctx->pc = 0x2153F4u;
    // 0x2153f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2153f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2153f8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2153fc: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x215400: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x215404: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215404u;
    {
        const bool branch_taken_0x215404 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215404u;
        // 0x215408: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215404) {
            ctx->pc = 0x215414u;
            return;
        }
    }
    ctx->pc = 0x21540Cu;
    // 0x21540c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x21540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215410: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
    ctx->pc = 0x215414u;
}
