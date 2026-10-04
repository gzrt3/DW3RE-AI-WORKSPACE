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

// Function: entry_0020fc30
// Address: 0x20fc30 - 0x20fc58
void entry_0020fc30_0x20fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fc30_0x20fc30");
#endif

    ctx->pc = 0x20fc30u;

    // 0x20fc30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20fc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc34: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x20fc38: 0xc13021  addu        $a2, $a2, $at
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fc3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fc40: 0x3421393c  ori         $at, $at, 0x393C
    ctx->pc = 0x20fc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14652);
    // 0x20fc44: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20fc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc4c: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20fc50: 0x3c0a3e00  lui         $t2, 0x3E00
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15872 << 16));
    // 0x20fc54: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->pc = 0x20fc58u;
}
