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

// Function: entry_001361e4
// Address: 0x1361e4 - 0x136258
void entry_001361e4_0x1361e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001361e4_0x1361e4");
#endif

    ctx->pc = 0x1361e4u;

    // 0x1361e4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361e8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1361ec: 0xac20a3e0  sw          $zero, -0x5C20($at)
    ctx->pc = 0x1361ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3E0u, _value); } while (0);
    // 0x1361f0: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x1361f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1361f4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1361f8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1361f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1361fc: 0xa023a400  sb          $v1, -0x5C00($at)
    ctx->pc = 0x1361fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A400u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A400u, _value); } while (0);
    // 0x136200: 0x82030018  lb          $v1, 0x18($s0)
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x136204: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136208: 0xa023a403  sb          $v1, -0x5BFD($at)
    ctx->pc = 0x136208u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A403u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A403u, _value); } while (0);
    // 0x13620c: 0x8203001c  lb          $v1, 0x1C($s0)
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x136210: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136214: 0xa023a404  sb          $v1, -0x5BFC($at)
    ctx->pc = 0x136214u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A404u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A404u, _value); } while (0);
    // 0x136218: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13621c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136220: 0xa023a405  sb          $v1, -0x5BFB($at)
    ctx->pc = 0x136220u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A405u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A405u, _value); } while (0);
    // 0x136224: 0x82030024  lb          $v1, 0x24($s0)
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x136228: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13622c: 0xa023a406  sb          $v1, -0x5BFA($at)
    ctx->pc = 0x13622cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A406u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A406u, _value); } while (0);
    // 0x136230: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x136230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x136234: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136238: 0xa023a407  sb          $v1, -0x5BF9($at)
    ctx->pc = 0x136238u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A407u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A407u, _value); } while (0);
    // 0x13623c: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x136240: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136244u;
    {
        const bool branch_taken_0x136244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136244u;
        // 0x136248: 0xa023a408  sb          $v1, -0x5BF8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136244) {
            ctx->pc = 0x136258u;
            return;
        }
    }
    ctx->pc = 0x13624Cu;
    // 0x13624c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136250u;
    {
        const bool branch_taken_0x136250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136250u;
        // 0x136254: 0xa020a401  sb          $zero, -0x5BFF($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943745), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136250) {
            ctx->pc = 0x136278u;
            return;
        }
    }
    ctx->pc = 0x136258u;
}
