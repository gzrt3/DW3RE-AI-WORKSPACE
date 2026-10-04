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

// Function: entry_001a3c64
// Address: 0x1a3c64 - 0x1a3cd0
void entry_001a3c64_0x1a3c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3c64_0x1a3c64");
#endif

    ctx->pc = 0x1a3c64u;

    // 0x1a3c64: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1a3c68: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x1a3c6c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x1a3c70: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1a3c74: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x1a3c78: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x1a3c7c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1a3c80: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x1a3c84: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1a3c88: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1a3c8c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a3c90: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a3c94: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1a3c98: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1a3c9c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x1a3ca0: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1a3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x1a3ca4: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x1a3ca8: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1a3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x1a3cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a3cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3cb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3cb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3cb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3CD0u;
}
