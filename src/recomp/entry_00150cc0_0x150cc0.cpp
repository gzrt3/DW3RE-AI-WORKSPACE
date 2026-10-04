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

// Function: entry_00150cc0
// Address: 0x150cc0 - 0x150d00
void entry_00150cc0_0x150cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150cc0_0x150cc0");
#endif

    ctx->pc = 0x150cc0u;

    // 0x150cc0: 0xa4c0019c  sh          $zero, 0x19C($a2)
    ctx->pc = 0x150cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cc4: 0xa4c0019e  sh          $zero, 0x19E($a2)
    ctx->pc = 0x150cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cc8: 0xacc00194  sw          $zero, 0x194($a2)
    ctx->pc = 0x150cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 404), GPR_U32(ctx, 0));
    // 0x150ccc: 0xacc00200  sw          $zero, 0x200($a2)
    ctx->pc = 0x150cccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 512), GPR_U32(ctx, 0));
    // 0x150cd0: 0xa4c00208  sh          $zero, 0x208($a2)
    ctx->pc = 0x150cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x150cd4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x150cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x150cd8: 0x90c301a2  lbu         $v1, 0x1A2($a2)
    ctx->pc = 0x150cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
    // 0x150cdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CDCu;
    {
        const bool branch_taken_0x150cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150cdc) {
            ctx->pc = 0x150CECu;
            goto label_150cec;
        }
    }
    ctx->pc = 0x150CE4u;
    // 0x150ce4: 0xacc0020c  sw          $zero, 0x20C($a2)
    ctx->pc = 0x150ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 524), GPR_U32(ctx, 0));
    // 0x150ce8: 0xacc00204  sw          $zero, 0x204($a2)
    ctx->pc = 0x150ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 516), GPR_U32(ctx, 0));
label_150cec:
    // 0x150cec: 0x3e00008  jr          $ra
    ctx->pc = 0x150CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150CF4u;
    // 0x150cf4: 0x0  nop
    ctx->pc = 0x150cf4u;
    // NOP
    // 0x150cf8: 0x0  nop
    ctx->pc = 0x150cf8u;
    // NOP
    // 0x150cfc: 0x0  nop
    ctx->pc = 0x150cfcu;
    // NOP
    ctx->pc = 0x150d00u;
}
