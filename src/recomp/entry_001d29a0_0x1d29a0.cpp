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

// Function: entry_001d29a0
// Address: 0x1d29a0 - 0x1d2a0c
void entry_001d29a0_0x1d29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d29a0_0x1d29a0");
#endif

    ctx->pc = 0x1d29a0u;

    // 0x1d29a0: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d29a4: 0x240a005a  addiu       $t2, $zero, 0x5A
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1d29a8: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d29a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d29ac: 0x2409006c  addiu       $t1, $zero, 0x6C
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d29b0: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d29b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d29b4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d29b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d29b8: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d29b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d29bc: 0x240700ac  addiu       $a3, $zero, 0xAC
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1d29c0: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d29c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d29c8: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
    // 0x1d29cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d29d0: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d29d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d29d4: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d29d8: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d29d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d29dc: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d29dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29e0: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
    // 0x1d29e4: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d29e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d29e8: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d29e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d29ec: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d29ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d29f0: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29f4: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
    // 0x1d29f8: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d29f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d29fc: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d29fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d2a00: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2a04: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2a04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2a08: 0xac48009c  sw          $t0, 0x9C($v0)
    ctx->pc = 0x1d2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
    ctx->pc = 0x1d2a0cu;
}
