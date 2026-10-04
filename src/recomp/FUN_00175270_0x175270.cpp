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

// Function: FUN_00175270
// Address: 0x175270 - 0x175298
void FUN_00175270_0x175270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00175270_0x175270");
#endif

    ctx->pc = 0x175270u;

    // 0x175270: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x175274: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x175274u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x175278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x175278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17527c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x17527cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x175280: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175284: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x175288: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17528c: 0x24a52150  addiu       $a1, $a1, 0x2150
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8528));
    // 0x175290: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175294: 0xa6a021  addu        $s4, $a1, $a2
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x175298u;
}
