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

// Function: entry_00196770
// Address: 0x196770 - 0x1967a0
void entry_00196770_0x196770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196770_0x196770");
#endif

    ctx->pc = 0x196770u;

    // 0x196770: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x196774: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x196778: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19677c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x196780: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x196784: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x196788: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x19678c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x196790: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x196794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x196798: 0x3e00008  jr          $ra
    ctx->pc = 0x196798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967A0u;
}
