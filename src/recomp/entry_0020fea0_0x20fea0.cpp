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

// Function: entry_0020fea0
// Address: 0x20fea0 - 0x20febc
void entry_0020fea0_0x20fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fea0_0x20fea0");
#endif

    ctx->pc = 0x20fea0u;

    // 0x20fea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20fea8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x20feac: 0x34454ef0  ori         $a1, $v0, 0x4EF0
    ctx->pc = 0x20feacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20208);
    // 0x20feb0: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x20feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x20feb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20feb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x20febcu;
}
