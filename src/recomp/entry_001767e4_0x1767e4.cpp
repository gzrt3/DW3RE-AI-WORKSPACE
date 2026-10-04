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

// Function: entry_001767e4
// Address: 0x1767e4 - 0x176844
void entry_001767e4_0x1767e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767e4_0x1767e4");
#endif

    switch (ctx->pc) {
        case 0x176840u: goto label_176840;
        default: break;
    }

    ctx->pc = 0x1767e4u;

    // 0x1767e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1767e8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1767ec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1767f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767f4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
    // 0x1767f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1767f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1767fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x176800: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x176804: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x176808: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
    // 0x17680c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176810: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x176814: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x176814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176818: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17681c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x176820: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176828: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x176828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17682c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176830: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x176834: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176838: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 31, 0x176840u);
    ctx->pc = 0x17683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176838u;
    // 0x17683c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176838u, 0x176840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->pc = 0x176844u;
}
