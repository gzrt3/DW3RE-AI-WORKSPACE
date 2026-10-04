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

// Function: entry_0023b614
// Address: 0x23b614 - 0x23b660
void entry_0023b614_0x23b614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b614_0x23b614");
#endif

    switch (ctx->pc) {
        case 0x23b62cu: goto label_23b62c;
        default: break;
    }

    ctx->pc = 0x23b614u;

    // 0x23b614: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x23b614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x23b618: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23b618u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x23b61c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23B61Cu;
    {
        const bool branch_taken_0x23b61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B61Cu;
        // 0x23b620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b61c) {
            ctx->pc = 0x23B688u;
            return;
        }
    }
    ctx->pc = 0x23B624u;
    // 0x23b624: 0xc08eaf4  jal         func_23ABD0
    ctx->pc = 0x23B624u;
    SET_GPR_U32(ctx, 31, 0x23B62Cu);
    ctx->pc = 0x23B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B624u;
    // 0x23b628: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABD0u, 0x23B624u, 0x23B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B62Cu;
label_23b62c:
    // 0x23b62c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b630: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x23B630u;
    {
        const bool branch_taken_0x23b630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b630) {
            ctx->pc = 0x23B660u;
            return;
        }
    }
    ctx->pc = 0x23B638u;
    // 0x23b638: 0x52023  negu        $a0, $a1
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x23b63c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b640: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x23b640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x23b644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b648: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x23b64c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b650: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x23b654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B654u;
    {
        const bool branch_taken_0x23b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B654u;
        // 0x23b658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b654) {
            ctx->pc = 0x23B668u;
            return;
        }
    }
    ctx->pc = 0x23B65Cu;
    // 0x23b65c: 0x0  nop
    ctx->pc = 0x23b65cu;
    // NOP
    ctx->pc = 0x23b660u;
}
