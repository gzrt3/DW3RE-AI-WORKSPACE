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

// Function: entry_00212b44
// Address: 0x212b44 - 0x212b6c
void entry_00212b44_0x212b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212b44_0x212b44");
#endif

    switch (ctx->pc) {
        case 0x212b54u: goto label_212b54;
        case 0x212b64u: goto label_212b64;
        default: break;
    }

    ctx->pc = 0x212b44u;

    // 0x212b44: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212B44u;
    {
        const bool branch_taken_0x212b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x212b44) {
            ctx->pc = 0x212B6Cu;
            return;
        }
    }
    ctx->pc = 0x212B4Cu;
    // 0x212b4c: 0xc08a614  jal         func_229850
    ctx->pc = 0x212B4Cu;
    SET_GPR_U32(ctx, 31, 0x212B54u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x212B4Cu, 0x212B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B54u;
label_212b54:
    // 0x212b54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b5c: 0xc0900a8  jal         func_2402A0
    ctx->pc = 0x212B5Cu;
    SET_GPR_U32(ctx, 31, 0x212B64u);
    ctx->pc = 0x212B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B5Cu;
    // 0x212b60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2402A0u, 0x212B5Cu, 0x212B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B64u;
label_212b64:
    // 0x212b64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x212B64u;
    {
        const bool branch_taken_0x212b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b64) {
            ctx->pc = 0x212BBCu;
            return;
        }
    }
    ctx->pc = 0x212B6Cu;
}
