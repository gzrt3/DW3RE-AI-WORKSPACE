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

// Function: FUN_001a2b78
// Address: 0x1a2b78 - 0x1a2bc8
void FUN_001a2b78_0x1a2b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2b78_0x1a2b78");
#endif

    switch (ctx->pc) {
        case 0x1a2bb0u: goto label_1a2bb0;
        default: break;
    }

    ctx->pc = 0x1a2b78u;

    // 0x1a2b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2b7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a2b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2b84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2b8c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a2b90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a2b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1a2b9c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a2ba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a2ba4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1a2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1a2ba8: 0xc068cea  jal         func_1A33A8
    ctx->pc = 0x1A2BA8u;
    SET_GPR_U32(ctx, 31, 0x1A2BB0u);
    ctx->pc = 0x1A2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BA8u;
    // 0x1a2bac: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A33A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A33A8u, 0x1A2BA8u, 0x1A2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BB0u;
label_1a2bb0:
    // 0x1a2bb0: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1a2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1a2bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2bc0: 0x8068cae  j           func_1A32B8
    ctx->pc = 0x1A2BC0u;
    ctx->pc = 0x1A2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BC0u;
    // 0x1a2bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32B8u;
    FUN_001a32b8_0x1a32b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2BC8u;
}
