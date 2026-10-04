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

// Function: entry_001ab054
// Address: 0x1ab054 - 0x1ab090
void entry_001ab054_0x1ab054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab054_0x1ab054");
#endif

    switch (ctx->pc) {
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab064u: goto label_1ab064;
        default: break;
    }

    ctx->pc = 0x1ab054u;

    // 0x1ab054: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1AB054u;
    SET_GPR_U32(ctx, 31, 0x1AB05Cu);
    ctx->pc = 0x1AB058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB054u;
    // 0x1ab058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1AB054u, 0x1AB05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB05Cu;
label_1ab05c:
    // 0x1ab05c: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1AB05Cu;
    SET_GPR_U32(ctx, 31, 0x1AB064u);
    ctx->pc = 0x1AB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB05Cu;
    // 0x1ab060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1AB05Cu, 0x1AB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB064u;
label_1ab064:
    // 0x1ab064: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1ab064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab068: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ab068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ab06c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ab06cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ab070: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1ab070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ab074: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ab074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ab078: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1ab078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ab07c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ab07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ab080: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1ab080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab084: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ab084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab088: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB088u;
        // 0x1ab08c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB090u;
}
