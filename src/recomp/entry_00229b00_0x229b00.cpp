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

// Function: entry_00229b00
// Address: 0x229b00 - 0x229b50
void entry_00229b00_0x229b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229b00_0x229b00");
#endif

    switch (ctx->pc) {
        case 0x229b08u: goto label_229b08;
        default: break;
    }

    ctx->pc = 0x229b00u;

    // 0x229b00: 0xc08a93c  jal         func_22A4F0
    ctx->pc = 0x229B00u;
    SET_GPR_U32(ctx, 31, 0x229B08u);
    ctx->pc = 0x22A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A4F0u, 0x229B00u, 0x229B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B08u;
label_229b08:
    // 0x229b08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b0c: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x229b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A280u));
    // 0x229b10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x229B10u;
    {
        const bool branch_taken_0x229b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229b10) {
            ctx->pc = 0x229B50u;
            return;
        }
    }
    ctx->pc = 0x229B18u;
    // 0x229b18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x229b1c: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334968u));
    // 0x229b20: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x229b24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b28: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x229b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A280u, _value); } while (0);
    // 0x229b2c: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x229b30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b34: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x229b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A284u, _value); } while (0);
    // 0x229b38: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x229b3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b40: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x229b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A288u, _value); } while (0);
    // 0x229b44: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x229b48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b4c: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x229b4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A28Cu, _value); } while (0);
    ctx->pc = 0x229b50u;
}
