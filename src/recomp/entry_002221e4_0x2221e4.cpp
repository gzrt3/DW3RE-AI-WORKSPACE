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

// Function: entry_002221e4
// Address: 0x2221e4 - 0x222224
void entry_002221e4_0x2221e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002221e4_0x2221e4");
#endif

    switch (ctx->pc) {
        case 0x22220cu: goto label_22220c;
        default: break;
    }

    ctx->pc = 0x2221e4u;

    // 0x2221e4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2221E4u;
    {
        const bool branch_taken_0x2221e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221e4) {
            ctx->pc = 0x222224u;
            return;
        }
    }
    ctx->pc = 0x2221ECu;
    // 0x2221ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2221ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2221f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2221f4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2221f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2221f8: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2221F8u;
    {
        const bool branch_taken_0x2221f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221f8) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222200u;
    // 0x222200: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222204: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 31, 0x22220Cu);
    ctx->pc = 0x222208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222204u;
    // 0x222208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222204u, 0x22220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22220Cu;
label_22220c:
    // 0x22220c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x22220Cu;
    {
        const bool branch_taken_0x22220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22220c) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222214u;
    // 0x222214: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222218: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22221c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x22221Cu;
    {
        const bool branch_taken_0x22221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22221Cu;
        // 0x222220: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22221c) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222224u;
}
