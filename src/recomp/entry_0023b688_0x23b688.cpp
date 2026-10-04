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

// Function: entry_0023b688
// Address: 0x23b688 - 0x23b6c8
void entry_0023b688_0x23b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b688_0x23b688");
#endif

    switch (ctx->pc) {
        case 0x23b694u: goto label_23b694;
        default: break;
    }

    ctx->pc = 0x23b688u;

    // 0x23b688: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23b68c: 0xc08eaf4  jal         func_23ABD0
    ctx->pc = 0x23B68Cu;
    SET_GPR_U32(ctx, 31, 0x23B694u);
    ctx->pc = 0x23B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B68Cu;
    // 0x23b690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABD0u, 0x23B68Cu, 0x23B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B694u;
label_23b694:
    // 0x23b694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b698: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b69c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x23b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x23b6a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x23b6a4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x23b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
    // 0x23b6a8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B6A8u;
    {
        const bool branch_taken_0x23b6a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A8u;
        // 0x23b6ac: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a8) {
            ctx->pc = 0x23B6C8u;
            return;
        }
    }
    ctx->pc = 0x23B6B0u;
    // 0x23b6b0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x23b6b4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x23b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23b6b8: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x23b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x23b6bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B6BCu;
    {
        const bool branch_taken_0x23b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6BCu;
        // 0x23b6c0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6bc) {
            ctx->pc = 0x23B6E8u;
            return;
        }
    }
    ctx->pc = 0x23B6C4u;
    // 0x23b6c4: 0x0  nop
    ctx->pc = 0x23b6c4u;
    // NOP
    ctx->pc = 0x23b6c8u;
}
