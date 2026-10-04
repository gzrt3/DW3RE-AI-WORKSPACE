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

// Function: entry_001ccdb8
// Address: 0x1ccdb8 - 0x1ccde0
void entry_001ccdb8_0x1ccdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccdb8_0x1ccdb8");
#endif

    ctx->pc = 0x1ccdb8u;

    // 0x1ccdb8: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1ccdbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ccdc0: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccdc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccdcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDD0u;
        // 0x1ccdd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCDD8u;
    // 0x1ccdd8: 0x0  nop
    ctx->pc = 0x1ccdd8u;
    // NOP
    // 0x1ccddc: 0x0  nop
    ctx->pc = 0x1ccddcu;
    // NOP
    ctx->pc = 0x1ccde0u;
}
