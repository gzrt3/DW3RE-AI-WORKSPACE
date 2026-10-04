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

// Function: FUN_00212e10
// Address: 0x212e10 - 0x212e54
void FUN_00212e10_0x212e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212e10_0x212e10");
#endif

    ctx->pc = 0x212e10u;

    // 0x212e10: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x212E10u;
    {
        const bool branch_taken_0x212e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E10u;
        // 0x212e14: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e10) {
            ctx->pc = 0x212E38u;
            goto label_212e38;
        }
    }
    ctx->pc = 0x212E18u;
    // 0x212e18: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212e20: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x587564u));
    // 0x212e24: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x212e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x212e28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x212e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x212e2c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212e30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212E30u;
    {
        const bool branch_taken_0x212e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E30u;
        // 0x212e34: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e30) {
            ctx->pc = 0x212E54u;
            return;
        }
    }
    ctx->pc = 0x212E38u;
label_212e38:
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
    ctx->pc = 0x212e54u;
}
