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

// Function: entry_00201dd8
// Address: 0x201dd8 - 0x201e3c
void entry_00201dd8_0x201dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201dd8_0x201dd8");
#endif

    switch (ctx->pc) {
        case 0x201de4u: goto label_201de4;
        case 0x201e24u: goto label_201e24;
        default: break;
    }

    ctx->pc = 0x201dd8u;

    // 0x201dd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201ddc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x201DDCu;
    SET_GPR_U32(ctx, 31, 0x201DE4u);
    ctx->pc = 0x201DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DDCu;
    // 0x201de0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x201DDCu, 0x201DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DE4u;
label_201de4:
    // 0x201de4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201de8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x201dec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x201df0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x201df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201df8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201dfc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e00: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201e04: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201e08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201e0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201e14: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x201e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x201e18: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x201e1c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x201E1Cu;
    SET_GPR_U32(ctx, 31, 0x201E24u);
    ctx->pc = 0x201E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E1Cu;
    // 0x201e20: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201E1Cu, 0x201E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E24u;
label_201e24:
    // 0x201e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e28: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201e30: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x201e34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x201E34u;
    {
        const bool branch_taken_0x201e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E34u;
        // 0x201e38: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e34) {
            ctx->pc = 0x201ED8u;
            return;
        }
    }
    ctx->pc = 0x201E3Cu;
}
