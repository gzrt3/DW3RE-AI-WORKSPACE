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

// Function: entry_001a147c
// Address: 0x1a147c - 0x1a14bc
void entry_001a147c_0x1a147c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a147c_0x1a147c");
#endif

    switch (ctx->pc) {
        case 0x1a1484u: goto label_1a1484;
        case 0x1a14b8u: goto label_1a14b8;
        default: break;
    }

    ctx->pc = 0x1a147cu;

    // 0x1a147c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A147Cu;
    SET_GPR_U32(ctx, 31, 0x1A1484u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A147Cu, 0x1A1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1484u;
label_1a1484:
    // 0x1a1484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1488: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a148c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1a1490: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1494: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a1494u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1a1498: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1a149c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a14a0: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a14a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14a8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a14a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1a14ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a14acu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4));
    // 0x1a14b0: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A14B0u;
    SET_GPR_U32(ctx, 31, 0x1A14B8u);
    ctx->pc = 0x1A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14B0u;
    // 0x1a14b4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A14B0u, 0x1A14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14B8u;
label_1a14b8:
    // 0x1a14b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1a14bcu;
}
