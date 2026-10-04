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

// Function: FUN_0010a220
// Address: 0x10a220 - 0x10a234
void FUN_0010a220_0x10a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a220_0x10a220");
#endif

    ctx->pc = 0x10a220u;

    // 0x10a220: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x10a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x10a224: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10a228: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x10a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x10a22c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10a230: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x10a230u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10a234u;
}
