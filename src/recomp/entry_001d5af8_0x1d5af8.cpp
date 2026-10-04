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

// Function: entry_001d5af8
// Address: 0x1d5af8 - 0x1d5b1c
void entry_001d5af8_0x1d5af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5af8_0x1d5af8");
#endif

    ctx->pc = 0x1d5af8u;

    // 0x1d5af8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d5afc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5b00: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1d5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b04: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1d5b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5b08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d5b0c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5b10: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d5b14: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d5b18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1d5b1cu;
}
