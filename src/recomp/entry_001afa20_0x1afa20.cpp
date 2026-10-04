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

// Function: entry_001afa20
// Address: 0x1afa20 - 0x1afa64
void entry_001afa20_0x1afa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa20_0x1afa20");
#endif

    switch (ctx->pc) {
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa48u: goto label_1afa48;
        default: break;
    }

    ctx->pc = 0x1afa20u;

    // 0x1afa20: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AFA20u;
    SET_GPR_U32(ctx, 31, 0x1AFA28u);
    ctx->pc = 0x1AFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA20u;
    // 0x1afa24: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AFA20u, 0x1AFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA28u;
label_1afa28:
    // 0x1afa28: 0x8e4272b8  lw          $v0, 0x72B8($s2)
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29368)));
    // 0x1afa2c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AFA2Cu;
    {
        const bool branch_taken_0x1afa2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA2Cu;
        // 0x1afa30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa2c) {
            ctx->pc = 0x1AFAD8u;
            return;
        }
    }
    ctx->pc = 0x1AFA34u;
    // 0x1afa34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AFA34u;
    {
        const bool branch_taken_0x1afa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA34u;
        // 0x1afa38: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa34) {
            ctx->pc = 0x1AFA64u;
            return;
        }
    }
    ctx->pc = 0x1AFA3Cu;
    // 0x1afa3c: 0x0  nop
    ctx->pc = 0x1afa3cu;
    // NOP
    // 0x1afa40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1afa44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afa48:
    // 0x1afa48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afa4c: 0x0  nop
    ctx->pc = 0x1afa4cu;
    // NOP
    // 0x1afa50: 0x0  nop
    ctx->pc = 0x1afa50u;
    // NOP
    // 0x1afa54: 0x0  nop
    ctx->pc = 0x1afa54u;
    // NOP
    // 0x1afa58: 0x0  nop
    ctx->pc = 0x1afa58u;
    // NOP
    // 0x1afa5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFA5Cu;
    {
        const bool branch_taken_0x1afa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa5c) {
            ctx->pc = 0x1AFA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa48;
        }
    }
    ctx->pc = 0x1AFA64u;
}
