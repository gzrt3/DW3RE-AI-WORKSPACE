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

// Function: FUN_00123960
// Address: 0x123960 - 0x1239a0
void FUN_00123960_0x123960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123960_0x123960");
#endif

    switch (ctx->pc) {
        case 0x123980u: goto label_123980;
        default: break;
    }

    ctx->pc = 0x123960u;

    // 0x123960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123968: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x123968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x12396c: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x12396cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x123970: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x123970u;
    {
        const bool branch_taken_0x123970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123970) {
            ctx->pc = 0x123988u;
            goto label_123988;
        }
    }
    ctx->pc = 0x123978u;
    // 0x123978: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x123978u;
    SET_GPR_U32(ctx, 31, 0x123980u);
    ctx->pc = 0x12397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123978u;
    // 0x12397c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x123978u, 0x123980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123980u;
label_123980:
    // 0x123980: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x123980u;
    {
        const bool branch_taken_0x123980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123980u;
        // 0x123984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123980) {
            ctx->pc = 0x1239A0u;
            return;
        }
    }
    ctx->pc = 0x123988u;
label_123988:
    // 0x123988: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x12398c: 0xa08302e3  sb          $v1, 0x2E3($a0)
    ctx->pc = 0x12398cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x123990: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x123990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x123994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x123998: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x123998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x12399c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1239a0u;
}
