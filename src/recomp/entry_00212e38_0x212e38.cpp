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

// Function: entry_00212e38
// Address: 0x212e38 - 0x212e60
void entry_00212e38_0x212e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212e38_0x212e38");
#endif

    ctx->pc = 0x212e38u;

    // 0x212e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212e3c: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30052)));
    // 0x212e40: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x212e44: 0x802027  not         $a0, $a0
    ctx->pc = 0x212e44u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x212e48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x212e4c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212e50: 0xac237564  sw          $v1, 0x7564($at)
    ctx->pc = 0x212e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587564u, _value); } while (0);
    // 0x212e54: 0x3e00008  jr          $ra
    ctx->pc = 0x212E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212E5Cu;
    // 0x212e5c: 0x0  nop
    ctx->pc = 0x212e5cu;
    // NOP
    ctx->pc = 0x212e60u;
}
