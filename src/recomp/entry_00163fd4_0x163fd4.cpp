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

// Function: entry_00163fd4
// Address: 0x163fd4 - 0x163ff4
void entry_00163fd4_0x163fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163fd4_0x163fd4");
#endif

    switch (ctx->pc) {
        case 0x163fecu: goto label_163fec;
        default: break;
    }

    ctx->pc = 0x163fd4u;

    // 0x163fd4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x163fd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163fdc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163FDCu;
    {
        const bool branch_taken_0x163fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163fdc) {
            ctx->pc = 0x163FF4u;
            return;
        }
    }
    ctx->pc = 0x163FE4u;
    // 0x163fe4: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x163FE4u;
    SET_GPR_U32(ctx, 31, 0x163FECu);
    ctx->pc = 0x163FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163FE4u;
    // 0x163fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x163FE4u, 0x163FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163FECu;
label_163fec:
    // 0x163fec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163FECu;
    {
        const bool branch_taken_0x163fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fec) {
            ctx->pc = 0x164018u;
            return;
        }
    }
    ctx->pc = 0x163FF4u;
}
