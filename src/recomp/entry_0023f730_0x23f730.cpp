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

// Function: entry_0023f730
// Address: 0x23f730 - 0x23f770
void entry_0023f730_0x23f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f730_0x23f730");
#endif

    switch (ctx->pc) {
        case 0x23f738u: goto label_23f738;
        case 0x23f740u: goto label_23f740;
        case 0x23f748u: goto label_23f748;
        case 0x23f750u: goto label_23f750;
        default: break;
    }

    ctx->pc = 0x23f730u;

    // 0x23f730: 0xc07aaa0  jal         func_1EAA80
    ctx->pc = 0x23F730u;
    SET_GPR_U32(ctx, 31, 0x23F738u);
    ctx->pc = 0x1EAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA80u, 0x23F730u, 0x23F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x23F738u;
    SET_GPR_U32(ctx, 31, 0x23F740u);
    ctx->pc = 0x23F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F738u;
    // 0x23f73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x23F738u, 0x23F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F740u;
label_23f740:
    // 0x23f740: 0xc060258  jal         func_180960
    ctx->pc = 0x23F740u;
    SET_GPR_U32(ctx, 31, 0x23F748u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F740u, 0x23F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F748u;
label_23f748:
    // 0x23f748: 0xc060258  jal         func_180960
    ctx->pc = 0x23F748u;
    SET_GPR_U32(ctx, 31, 0x23F750u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F748u, 0x23F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F750u;
label_23f750:
    // 0x23f750: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x23f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x23f754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f75c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23f75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23f760: 0x3e00008  jr          $ra
    ctx->pc = 0x23F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F760u;
        // 0x23f764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F768u;
    // 0x23f768: 0x0  nop
    ctx->pc = 0x23f768u;
    // NOP
    // 0x23f76c: 0x0  nop
    ctx->pc = 0x23f76cu;
    // NOP
    ctx->pc = 0x23f770u;
}
