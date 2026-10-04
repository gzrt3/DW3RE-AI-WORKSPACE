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

// Function: entry_0022a48c
// Address: 0x22a48c - 0x22a4d0
void entry_0022a48c_0x22a48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a48c_0x22a48c");
#endif

    ctx->pc = 0x22a48cu;

    // 0x22a48c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a490: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A280u));
    // 0x22a494: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A4D0u;
            return;
        }
    }
    ctx->pc = 0x22A49Cu;
    // 0x22a49c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a4a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4a4: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x22a4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x22a4a8: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x22a4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A280u, _value); } while (0);
    // 0x22a4ac: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x22a4b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4b4: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x22a4b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A284u, _value); } while (0);
    // 0x22a4b8: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x22a4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x22a4bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4c0: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x22a4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A288u, _value); } while (0);
    // 0x22a4c4: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x22a4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x22a4c8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4cc: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x22a4ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A28Cu, _value); } while (0);
    ctx->pc = 0x22a4d0u;
}
