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

// Function: entry_0011591c
// Address: 0x11591c - 0x115958
void entry_0011591c_0x11591c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011591c_0x11591c");
#endif

    switch (ctx->pc) {
        case 0x115928u: goto label_115928;
        case 0x115934u: goto label_115934;
        case 0x115940u: goto label_115940;
        case 0x115948u: goto label_115948;
        default: break;
    }

    ctx->pc = 0x11591cu;

    // 0x11591c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x115920: 0xc044a9c  jal         func_112A70
    ctx->pc = 0x115920u;
    SET_GPR_U32(ctx, 31, 0x115928u);
    ctx->pc = 0x115924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115920u;
    // 0x115924: 0x24842470  addiu       $a0, $a0, 0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A70u, 0x115920u, 0x115928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115928u;
label_115928:
    // 0x115928: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x115928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x11592c: 0xc044bf4  jal         func_112FD0
    ctx->pc = 0x11592Cu;
    SET_GPR_U32(ctx, 31, 0x115934u);
    ctx->pc = 0x115930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11592Cu;
    // 0x115930: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112FD0u, 0x11592Cu, 0x115934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115934u;
label_115934:
    // 0x115934: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x115934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x115938: 0xc0456d4  jal         func_115B50
    ctx->pc = 0x115938u;
    SET_GPR_U32(ctx, 31, 0x115940u);
    ctx->pc = 0x11593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115938u;
    // 0x11593c: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B50u, 0x115938u, 0x115940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115940u;
label_115940:
    // 0x115940: 0xc045b68  jal         func_116DA0
    ctx->pc = 0x115940u;
    SET_GPR_U32(ctx, 31, 0x115948u);
    ctx->pc = 0x116DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA0u, 0x115940u, 0x115948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115948u;
label_115948:
    // 0x115948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11594c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115950: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x115954: 0x24632210  addiu       $v1, $v1, 0x2210
    ctx->pc = 0x115954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8720));
    ctx->pc = 0x115958u;
}
