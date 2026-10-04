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

// Function: entry_001a0d6c
// Address: 0x1a0d6c - 0x1a0da0
void entry_001a0d6c_0x1a0d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d6c_0x1a0d6c");
#endif

    ctx->pc = 0x1a0d6cu;

    // 0x1a0d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0d74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a0d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1a0d78: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a0d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0d7c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a0d80: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0d84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a0d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a0d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0d90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d98: 0x8068252  j           func_1A0948
    ctx->pc = 0x1A0D98u;
    ctx->pc = 0x1A0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D98u;
    // 0x1a0d9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0948u;
    entry_001a0948_0x1a0948(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0DA0u;
}
