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

// Function: entry_0023d994
// Address: 0x23d994 - 0x23d9b8
void entry_0023d994_0x23d994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d994_0x23d994");
#endif

    ctx->pc = 0x23d994u;

    // 0x23d994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d9a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d9a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23d9a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d9a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23d9ac: 0x808f66e  j           func_23D9B8
    ctx->pc = 0x23D9ACu;
    ctx->pc = 0x23D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9ACu;
    // 0x23d9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9B8u;
    FUN_0023d9b8_0x23d9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23D9B4u;
    // 0x23d9b4: 0x0  nop
    ctx->pc = 0x23d9b4u;
    // NOP
    ctx->pc = 0x23d9b8u;
}
