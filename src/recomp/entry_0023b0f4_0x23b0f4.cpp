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

// Function: entry_0023b0f4
// Address: 0x23b0f4 - 0x23b130
void entry_0023b0f4_0x23b0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b0f4_0x23b0f4");
#endif

    switch (ctx->pc) {
        case 0x23b108u: goto label_23b108;
        default: break;
    }

    ctx->pc = 0x23b0f4u;

    // 0x23b0f4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x23b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23b0f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b0fc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x23b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x23b100: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x23B100u;
    SET_GPR_U32(ctx, 31, 0x23B108u);
    ctx->pc = 0x23B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B100u;
    // 0x23b104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x23B100u, 0x23B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23b108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b11c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b120: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23b120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b124: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b128: 0x3e00008  jr          $ra
    ctx->pc = 0x23B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B130u;
}
