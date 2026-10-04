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

// Function: entry_001a1eac
// Address: 0x1a1eac - 0x1a1ee0
void entry_001a1eac_0x1a1eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1eac_0x1a1eac");
#endif

    ctx->pc = 0x1a1eacu;

    // 0x1a1eac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1a1eb0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a1eb4: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a1eb8: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x1a1eb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a1ebc: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1a1ebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a1ec0: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a1ec4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a1ec8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x1a1ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a1ecc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1a1eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a1ed0: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a1ed4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a1ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ED8u;
        // 0x1a1edc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1EE0u;
}
