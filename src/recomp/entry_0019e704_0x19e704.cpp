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

// Function: entry_0019e704
// Address: 0x19e704 - 0x19e758
void entry_0019e704_0x19e704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e704_0x19e704");
#endif

    ctx->pc = 0x19e704u;

    // 0x19e704: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x19e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19e708: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x19e70c: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x19e710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19e718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e71c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x19e71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19e720: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19e724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19e728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e72c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x19e730: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x19e730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x19e734: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x19e734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
    // 0x19e738: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19e738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19e73c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19e740: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19e740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x19e744: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19e744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19e748: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19e748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19e74c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x19e750: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x19e754: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x19e758u;
}
