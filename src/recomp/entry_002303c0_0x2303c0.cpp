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

// Function: entry_002303c0
// Address: 0x2303c0 - 0x2303e0
void entry_002303c0_0x2303c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002303c0_0x2303c0");
#endif

    ctx->pc = 0x2303c0u;

    // 0x2303c0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2303c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2303c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2303c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2303c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2303c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2303cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2303ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2303d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2303d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2303d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2303D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2303D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303D4u;
        // 0x2303d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2303DCu;
    // 0x2303dc: 0x0  nop
    ctx->pc = 0x2303dcu;
    // NOP
    ctx->pc = 0x2303e0u;
}
