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

// Function: entry_0022efc0
// Address: 0x22efc0 - 0x22efd8
void entry_0022efc0_0x22efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022efc0_0x22efc0");
#endif

    ctx->pc = 0x22efc0u;

    // 0x22efc0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x22efc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22efc8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x22efcc: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
    // 0x22efd0: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x22efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x22efd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22efd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x22efd8u;
}
