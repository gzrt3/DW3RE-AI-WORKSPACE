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

// Function: entry_0019f7f8
// Address: 0x19f7f8 - 0x19f824
void entry_0019f7f8_0x19f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7f8_0x19f7f8");
#endif

    switch (ctx->pc) {
        case 0x19f818u: goto label_19f818;
        default: break;
    }

    ctx->pc = 0x19f7f8u;

    // 0x19f7f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19f7fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19f800: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19f808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f80c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19f810: 0xc067cca  jal         func_19F328
    ctx->pc = 0x19F810u;
    SET_GPR_U32(ctx, 31, 0x19F818u);
    ctx->pc = 0x19F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F810u;
    // 0x19f814: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F328u, 0x19F810u, 0x19F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F818u;
label_19f818:
    // 0x19f818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19f81c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19f820: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x19f820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    ctx->pc = 0x19f824u;
}
