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

// Function: entry_001403d0
// Address: 0x1403d0 - 0x140400
void entry_001403d0_0x1403d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001403d0_0x1403d0");
#endif

    ctx->pc = 0x1403d0u;

    // 0x1403d0: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x1403d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1403d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1403d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1403d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1403d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1403dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1403dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1403e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1403E0u;
    {
        const bool branch_taken_0x1403e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e0) {
            ctx->pc = 0x140400u;
            return;
        }
    }
    ctx->pc = 0x1403E8u;
    // 0x1403e8: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x1403e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1403ec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1403f0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1403f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1403f4: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1403f4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1403f8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1403F8u;
    {
        const bool branch_taken_0x1403f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1403F8u;
        // 0x1403fc: 0xa6020222  sh          $v0, 0x222($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403f8) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140400u;
}
