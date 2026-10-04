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

// Function: entry_0023da70
// Address: 0x23da70 - 0x23da90
void entry_0023da70_0x23da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023da70_0x23da70");
#endif

    ctx->pc = 0x23da70u;

    // 0x23da70: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x23da74: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x23da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x23da78: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23da78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da7c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23da80: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x23da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x23da84: 0x0  nop
    ctx->pc = 0x23da84u;
    // NOP
    // 0x23da88: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x23da88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da8c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x23da8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x23da90u;
}
