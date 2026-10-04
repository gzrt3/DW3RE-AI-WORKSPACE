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

// Function: entry_00145d30
// Address: 0x145d30 - 0x145d94
void entry_00145d30_0x145d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145d30_0x145d30");
#endif

    switch (ctx->pc) {
        case 0x145d3cu: goto label_145d3c;
        case 0x145d48u: goto label_145d48;
        case 0x145d54u: goto label_145d54;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d64u: goto label_145d64;
        case 0x145d6cu: goto label_145d6c;
        case 0x145d78u: goto label_145d78;
        case 0x145d8cu: goto label_145d8c;
        default: break;
    }

    ctx->pc = 0x145d30u;

    // 0x145d30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d34: 0xc0401b8  jal         func_1006E0
    ctx->pc = 0x145D34u;
    SET_GPR_U32(ctx, 31, 0x145D3Cu);
    ctx->pc = 0x145D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D34u;
    // 0x145d38: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x145D34u, 0x145D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D3Cu;
label_145d3c:
    // 0x145d3c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x145d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x145d40: 0xc044ad0  jal         func_112B40
    ctx->pc = 0x145D40u;
    SET_GPR_U32(ctx, 31, 0x145D48u);
    ctx->pc = 0x145D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D40u;
    // 0x145d44: 0x24842470  addiu       $a0, $a0, 0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B40u, 0x145D40u, 0x145D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D48u;
label_145d48:
    // 0x145d48: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x145d4c: 0xc044dd4  jal         func_113750
    ctx->pc = 0x145D4Cu;
    SET_GPR_U32(ctx, 31, 0x145D54u);
    ctx->pc = 0x145D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D4Cu;
    // 0x145d50: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113750u, 0x145D4Cu, 0x145D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D54u;
label_145d54:
    // 0x145d54: 0xc08c2f0  jal         func_230BC0
    ctx->pc = 0x145D54u;
    SET_GPR_U32(ctx, 31, 0x145D5Cu);
    ctx->pc = 0x230BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BC0u, 0x145D54u, 0x145D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D5Cu;
label_145d5c:
    // 0x145d5c: 0xc0544a0  jal         func_151280
    ctx->pc = 0x145D5Cu;
    SET_GPR_U32(ctx, 31, 0x145D64u);
    ctx->pc = 0x151280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151280u, 0x145D5Cu, 0x145D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D64u;
label_145d64:
    // 0x145d64: 0xc0656b0  jal         func_195AC0
    ctx->pc = 0x145D64u;
    SET_GPR_U32(ctx, 31, 0x145D6Cu);
    ctx->pc = 0x195AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AC0u, 0x145D64u, 0x145D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D6Cu;
label_145d6c:
    // 0x145d6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d70: 0xc040220  jal         func_100880
    ctx->pc = 0x145D70u;
    SET_GPR_U32(ctx, 31, 0x145D78u);
    ctx->pc = 0x145D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D70u;
    // 0x145d74: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100880u, 0x145D70u, 0x145D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D78u;
label_145d78:
    // 0x145d78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d7c: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x145d7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x145d80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d84: 0xc04e004  jal         func_138010
    ctx->pc = 0x145D84u;
    SET_GPR_U32(ctx, 31, 0x145D8Cu);
    ctx->pc = 0x145D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D84u;
    // 0x145d88: 0x9025490e  lbu         $a1, 0x490E($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18702)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138010u, 0x145D84u, 0x145D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D8Cu;
label_145d8c:
    // 0x145d8c: 0xc041500  jal         func_105400
    ctx->pc = 0x145D8Cu;
    SET_GPR_U32(ctx, 31, 0x145D94u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145D8Cu, 0x145D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D94u;
}
