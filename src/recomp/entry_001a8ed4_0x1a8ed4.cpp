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

// Function: entry_001a8ed4
// Address: 0x1a8ed4 - 0x1a8f10
void entry_001a8ed4_0x1a8ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ed4_0x1a8ed4");
#endif

    switch (ctx->pc) {
        case 0x1a8edcu: goto label_1a8edc;
        case 0x1a8ee4u: goto label_1a8ee4;
        default: break;
    }

    ctx->pc = 0x1a8ed4u;

    // 0x1a8ed4: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A8ED4u;
    SET_GPR_U32(ctx, 31, 0x1A8EDCu);
    ctx->pc = 0x1A8ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8ED4u;
    // 0x1a8ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A8ED4u, 0x1A8EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EDCu;
label_1a8edc:
    // 0x1a8edc: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A8EDCu;
    SET_GPR_U32(ctx, 31, 0x1A8EE4u);
    ctx->pc = 0x1A8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EDCu;
    // 0x1a8ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A8EDCu, 0x1A8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EE4u;
label_1a8ee4:
    // 0x1a8ee4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8ee8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8eec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8ef0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a8ef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8ef4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a8ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a8ef8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8efc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a8efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a8f00: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a8f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8f04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a8f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F08u;
        // 0x1a8f0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F10u;
}
