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

// Function: FUN_0017c460
// Address: 0x17c460 - 0x17c480
void FUN_0017c460_0x17c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c460_0x17c460");
#endif

    ctx->pc = 0x17c460u;

    // 0x17c460: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17c464: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x17c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x17c468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17c46c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x17c470: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17c474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17c478: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17c47c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17c480u;
}
