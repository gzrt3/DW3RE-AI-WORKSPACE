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

// Function: entry_001c6370
// Address: 0x1c6370 - 0x1c63c0
void entry_001c6370_0x1c6370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6370_0x1c6370");
#endif

    ctx->pc = 0x1c6370u;

    // 0x1c6370: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6374: 0xa20302e2  sb          $v1, 0x2E2($s0)
    ctx->pc = 0x1c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c637c: 0xa20002e8  sb          $zero, 0x2E8($s0)
    ctx->pc = 0x1c637cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6384: 0xa20002e9  sb          $zero, 0x2E9($s0)
    ctx->pc = 0x1c6384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6388: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x1c6388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c638c: 0xa20002eb  sb          $zero, 0x2EB($s0)
    ctx->pc = 0x1c638cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6390: 0xa20002ec  sb          $zero, 0x2EC($s0)
    ctx->pc = 0x1c6390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 748), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6394: 0xa60202f2  sh          $v0, 0x2F2($s0)
    ctx->pc = 0x1c6394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c6398: 0xa60202f4  sh          $v0, 0x2F4($s0)
    ctx->pc = 0x1c6398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 756), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c639c: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1c639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x1c63a0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x1c63a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c63a8: 0x34eb8080  ori         $t3, $a3, 0x8080
    ctx->pc = 0x1c63a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x1c63ac: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x1c63b0: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1c63b4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1c63b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63bc: 0x34ec0008  ori         $t4, $a3, 0x8
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x1c63c0u;
}
