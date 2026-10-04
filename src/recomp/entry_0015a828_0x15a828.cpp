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

// Function: entry_0015a828
// Address: 0x15a828 - 0x15a880
void entry_0015a828_0x15a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a828_0x15a828");
#endif

    ctx->pc = 0x15a828u;

    // 0x15a828: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15a82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a830: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x15a834: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x15a834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15a838: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x15a83c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x15a840: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15a844: 0x246335a1  addiu       $v1, $v1, 0x35A1
    ctx->pc = 0x15a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13729));
    // 0x15a848: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x15a84c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15a850: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a854: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x15a858: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15a858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a85c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15a860: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x15a860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x15a864: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a868: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x15a868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x15a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A874u;
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
    // 0x15a878: 0x0  nop
    ctx->pc = 0x15a878u;
    // NOP
    // 0x15a87c: 0x0  nop
    ctx->pc = 0x15a87cu;
    // NOP
    ctx->pc = 0x15a880u;
}
