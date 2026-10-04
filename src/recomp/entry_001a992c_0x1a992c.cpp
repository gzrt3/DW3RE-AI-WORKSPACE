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

// Function: entry_001a992c
// Address: 0x1a992c - 0x1a9970
void entry_001a992c_0x1a992c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a992c_0x1a992c");
#endif

    switch (ctx->pc) {
        case 0x1a9934u: goto label_1a9934;
        case 0x1a993cu: goto label_1a993c;
        default: break;
    }

    ctx->pc = 0x1a992cu;

    // 0x1a992c: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A992Cu;
    SET_GPR_U32(ctx, 31, 0x1A9934u);
    ctx->pc = 0x1A9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A992Cu;
    // 0x1a9930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A992Cu, 0x1A9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9934u;
label_1a9934:
    // 0x1a9934: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A9934u;
    SET_GPR_U32(ctx, 31, 0x1A993Cu);
    ctx->pc = 0x1A9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9934u;
    // 0x1a9938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A9934u, 0x1A993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A993Cu;
label_1a993c:
    // 0x1a993c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9940: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1a9940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a9944: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a9948: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a9948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a994c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a994cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a9950: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a9954: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a9954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9958: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a9958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a995c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a995cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9960: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a9960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9964: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9964u;
        // 0x1a9968: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A996Cu;
    // 0x1a996c: 0x0  nop
    ctx->pc = 0x1a996cu;
    // NOP
    ctx->pc = 0x1a9970u;
}
