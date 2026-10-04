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

// Function: entry_0022a4fc
// Address: 0x22a4fc - 0x22a528
void entry_0022a4fc_0x22a4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a4fc_0x22a4fc");
#endif

    ctx->pc = 0x22a4fcu;

    // 0x22a4fc: 0x90c3003d  lbu         $v1, 0x3D($a2)
    ctx->pc = 0x22a4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 61)));
    // 0x22a500: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22A500u;
    {
        const bool branch_taken_0x22a500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a500) {
            ctx->pc = 0x22A560u;
            return;
        }
    }
    ctx->pc = 0x22A508u;
    // 0x22a508: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x22a508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
    // 0x22a50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a510: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x22a514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a518: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22a51c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a520: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22a520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22a524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x22a528u;
}
