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

// Function: entry_00100a48
// Address: 0x100a48 - 0x100a6c
void entry_00100a48_0x100a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a48_0x100a48");
#endif

    ctx->pc = 0x100a48u;

    // 0x100a48: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x100a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a50: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100a54: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x100a58: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x100a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x100a5c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x100a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x100a60: 0xa66021  addu        $t4, $a1, $a2
    ctx->pc = 0x100a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x100a64: 0xdd860000  ld          $a2, 0x0($t4)
    ctx->pc = 0x100a64u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x100a68: 0xfc860040  sd          $a2, 0x40($a0)
    ctx->pc = 0x100a68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 6));
    ctx->pc = 0x100a6cu;
}
