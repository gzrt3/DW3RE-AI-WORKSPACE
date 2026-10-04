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

// Function: entry_00136970
// Address: 0x136970 - 0x136994
void entry_00136970_0x136970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136970_0x136970");
#endif

    switch (ctx->pc) {
        case 0x136978u: goto label_136978;
        case 0x136980u: goto label_136980;
        default: break;
    }

    ctx->pc = 0x136970u;

    // 0x136970: 0xc04d51c  jal         func_135470
    ctx->pc = 0x136970u;
    SET_GPR_U32(ctx, 31, 0x136978u);
    ctx->pc = 0x135470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135470u, 0x136970u, 0x136978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136978u;
label_136978:
    // 0x136978: 0xc0590dc  jal         func_164370
    ctx->pc = 0x136978u;
    SET_GPR_U32(ctx, 31, 0x136980u);
    ctx->pc = 0x13697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136978u;
    // 0x13697c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x136978u, 0x136980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136980u;
label_136980:
    // 0x136980: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136980u;
    {
        const bool branch_taken_0x136980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136980u;
        // 0x136984: 0x3c030013  lui         $v1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136980) {
            ctx->pc = 0x136994u;
            return;
        }
    }
    ctx->pc = 0x136988u;
    // 0x136988: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x136988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x13698c: 0x24637d10  addiu       $v1, $v1, 0x7D10
    ctx->pc = 0x13698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32016));
    // 0x136990: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x136990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x136994u;
}
