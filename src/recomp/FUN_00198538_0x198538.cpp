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

// Function: FUN_00198538
// Address: 0x198538 - 0x198580
void FUN_00198538_0x198538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198538_0x198538");
#endif

    ctx->pc = 0x198538u;

    // 0x198538: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19853c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19853cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198540: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x198540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x198544: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198548: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x198548u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 7));
    // 0x19854c: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x19854cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x198550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198558: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198558u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 2));
    // 0x19855c: 0xf  sync
    ctx->pc = 0x19855cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x198560: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x198560u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
    // 0x198564: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x198564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x198568: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x198568u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x19856c: 0x40f  sync.p
    ctx->pc = 0x19856cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x198570: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x198574: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x198578: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
    // 0x19857c: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x19857cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    ctx->pc = 0x198580u;
}
