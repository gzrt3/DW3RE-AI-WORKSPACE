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

// Function: entry_001ab80c
// Address: 0x1ab80c - 0x1ab850
void entry_001ab80c_0x1ab80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab80c_0x1ab80c");
#endif

    switch (ctx->pc) {
        case 0x1ab844u: goto label_1ab844;
        default: break;
    }

    ctx->pc = 0x1ab80cu;

    // 0x1ab80c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1ab810: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab814: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1ab814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x374640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374640u, _value); } while (0);
    // 0x1ab818: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab81c: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1ab820: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
    // 0x1ab824: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab82c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab830: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ab830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab834: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab838: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab83c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB83Cu;
    SET_GPR_U32(ctx, 31, 0x1AB844u);
    ctx->pc = 0x1AB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB83Cu;
    // 0x1ab840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB83Cu, 0x1AB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB844u;
label_1ab844:
    // 0x1ab844: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB844u;
    {
        const bool branch_taken_0x1ab844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB844u;
        // 0x1ab848: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab844) {
            ctx->pc = 0x1AB850u;
            return;
        }
    }
    ctx->pc = 0x1AB84Cu;
    // 0x1ab84c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ab850u;
}
