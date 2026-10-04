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

// Function: FUN_001a6c18
// Address: 0x1a6c18 - 0x1a6c44
void FUN_001a6c18_0x1a6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6c18_0x1a6c18");
#endif

    switch (ctx->pc) {
        case 0x1a6c28u: goto label_1a6c28;
        case 0x1a6c38u: goto label_1a6c38;
        default: break;
    }

    ctx->pc = 0x1a6c18u;

    // 0x1a6c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6c20: 0xc0694f4  jal         func_1A53D0
    ctx->pc = 0x1A6C20u;
    SET_GPR_U32(ctx, 31, 0x1A6C28u);
    ctx->pc = 0x1A6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C20u;
    // 0x1a6c24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53D0u, 0x1A6C20u, 0x1A6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C28u;
label_1a6c28:
    // 0x1a6c28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a6c2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6c30: 0xc069154  jal         func_1A4550
    ctx->pc = 0x1A6C30u;
    SET_GPR_U32(ctx, 31, 0x1A6C38u);
    ctx->pc = 0x1A6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C30u;
    // 0x1a6c34: 0x8c651814  lw          $a1, 0x1814($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4550u, 0x1A6C30u, 0x1A6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C38u;
label_1a6c38:
    // 0x1a6c38: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1a6c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6c40: 0xac605b68  sw          $zero, 0x5B68($v1)
    ctx->pc = 0x1a6c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x285B68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285B68u, _value); } while (0);
    ctx->pc = 0x1a6c44u;
}
