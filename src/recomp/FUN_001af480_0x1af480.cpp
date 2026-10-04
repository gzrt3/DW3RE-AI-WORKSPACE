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

// Function: FUN_001af480
// Address: 0x1af480 - 0x1af4c8
void FUN_001af480_0x1af480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af480_0x1af480");
#endif

    switch (ctx->pc) {
        case 0x1af4b0u: goto label_1af4b0;
        default: break;
    }

    ctx->pc = 0x1af480u;

    // 0x1af480: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af484: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af488: 0x8c437294  lw          $v1, 0x7294($v0)
    ctx->pc = 0x1af488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287294u));
    // 0x1af48c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af490: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF490u;
    {
        const bool branch_taken_0x1af490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF490u;
        // 0x1af494: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af490) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF498u;
    // 0x1af498: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af49c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af4a0: 0xac6272d4  sw          $v0, 0x72D4($v1)
    ctx->pc = 0x1af4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D4u, _value); } while (0);
    // 0x1af4a4: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af4a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AF4A8u;
    SET_GPR_U32(ctx, 31, 0x1AF4B0u);
    ctx->pc = 0x1AF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4A8u;
    // 0x1af4ac: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AF4A8u, 0x1AF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4B0u;
label_1af4b0:
    // 0x1af4b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF4B0u;
    {
        const bool branch_taken_0x1af4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B0u;
        // 0x1af4b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4b0) {
            ctx->pc = 0x1AF4C0u;
            goto label_1af4c0;
        }
    }
    ctx->pc = 0x1AF4B8u;
label_1af4b8:
    // 0x1af4b8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af4bc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af4c0:
    // 0x1af4c0: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C0u;
    // 0x1af4c4: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AF4C0u, 0x1AF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4C8u;
}
