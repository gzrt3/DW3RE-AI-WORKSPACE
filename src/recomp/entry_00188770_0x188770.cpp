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

// Function: entry_00188770
// Address: 0x188770 - 0x188794
void entry_00188770_0x188770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188770_0x188770");
#endif

    switch (ctx->pc) {
        case 0x18878cu: goto label_18878c;
        default: break;
    }

    ctx->pc = 0x188770u;

    // 0x188770: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x188770u;
    {
        const bool branch_taken_0x188770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188770) {
            ctx->pc = 0x188794u;
            return;
        }
    }
    ctx->pc = 0x188778u;
    // 0x188778: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x188778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x18877c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188780: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x188780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x188784: 0xc062948  jal         func_18A520
    ctx->pc = 0x188784u;
    SET_GPR_U32(ctx, 31, 0x18878Cu);
    ctx->pc = 0x188788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188784u;
    // 0x188788: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x188784u, 0x18878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18878Cu;
label_18878c:
    // 0x18878c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18878Cu;
    {
        const bool branch_taken_0x18878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18878Cu;
        // 0x188790: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18878c) {
            ctx->pc = 0x1887B4u;
            return;
        }
    }
    ctx->pc = 0x188794u;
}
