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

// Function: entry_0019abb0
// Address: 0x19abb0 - 0x19abd8
void entry_0019abb0_0x19abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abb0_0x19abb0");
#endif

    switch (ctx->pc) {
        case 0x19abc0u: goto label_19abc0;
        default: break;
    }

    ctx->pc = 0x19abb0u;

    // 0x19abb0: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19ABB0u;
    {
        const bool branch_taken_0x19abb0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19abb0) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19ABB8u;
    // 0x19abb8: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19ABB8u;
    SET_GPR_U32(ctx, 31, 0x19ABC0u);
    ctx->pc = 0x19ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABB8u;
    // 0x19abbc: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19ABB8u, 0x19ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19abc4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19abc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19abcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABF8u;
            return;
        }
    }
    ctx->pc = 0x19ABD4u;
    // 0x19abd4: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x19abd8u;
}
