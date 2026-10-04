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

// Function: entry_00167ab4
// Address: 0x167ab4 - 0x167ae0
void entry_00167ab4_0x167ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167ab4_0x167ab4");
#endif

    switch (ctx->pc) {
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac8u: goto label_167ac8;
        default: break;
    }

    ctx->pc = 0x167ab4u;

    // 0x167ab4: 0x0  nop
    ctx->pc = 0x167ab4u;
    // NOP
    // 0x167ab8: 0xc0592ac  jal         func_164AB0
    ctx->pc = 0x167AB8u;
    SET_GPR_U32(ctx, 31, 0x167AC0u);
    ctx->pc = 0x167ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AB8u;
    // 0x167abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AB0u, 0x167AB8u, 0x167AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC0u;
label_167ac0:
    // 0x167ac0: 0xc04f564  jal         func_13D590
    ctx->pc = 0x167AC0u;
    SET_GPR_U32(ctx, 31, 0x167AC8u);
    ctx->pc = 0x167AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AC0u;
    // 0x167ac4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D590u, 0x167AC0u, 0x167AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC8u;
label_167ac8:
    // 0x167ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x167AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AD4u;
        // 0x167ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167ADCu;
    // 0x167adc: 0x0  nop
    ctx->pc = 0x167adcu;
    // NOP
    ctx->pc = 0x167ae0u;
}
