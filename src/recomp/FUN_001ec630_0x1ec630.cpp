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

// Function: FUN_001ec630
// Address: 0x1ec630 - 0x1ec680
void FUN_001ec630_0x1ec630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec630_0x1ec630");
#endif

    switch (ctx->pc) {
        case 0x1ec66cu: goto label_1ec66c;
        default: break;
    }

    ctx->pc = 0x1ec630u;

    // 0x1ec630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec638: 0x8f828f20  lw          $v0, -0x70E0($gp)
    ctx->pc = 0x1ec638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
    // 0x1ec63c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EC63Cu;
    {
        const bool branch_taken_0x1ec63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC63Cu;
        // 0x1ec640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec63c) {
            ctx->pc = 0x1EC67Cu;
            goto label_1ec67c;
        }
    }
    ctx->pc = 0x1EC644u;
    // 0x1ec644: 0x8f828f24  lw          $v0, -0x70DC($gp)
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
    // 0x1ec648: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC648u;
    {
        const bool branch_taken_0x1ec648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec648) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC650u;
    // 0x1ec650: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ec650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ec654: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ec658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ec658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC65Cu;
    {
        const bool branch_taken_0x1ec65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC65Cu;
        // 0x1ec660: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec65c) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC664u;
    // 0x1ec664: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1EC664u;
    SET_GPR_U32(ctx, 31, 0x1EC66Cu);
    ctx->pc = 0x1EC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC664u;
    // 0x1ec668: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1EC664u, 0x1EC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC66Cu;
label_1ec66c:
    // 0x1ec66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec670: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC670u;
    {
        const bool branch_taken_0x1ec670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC670u;
        // 0x1ec674: 0xaf828f24  sw          $v0, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec670) {
            ctx->pc = 0x1EC67Cu;
            goto label_1ec67c;
        }
    }
    ctx->pc = 0x1EC678u;
label_1ec678:
    // 0x1ec678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec67c:
    // 0x1ec67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ec680u;
}
