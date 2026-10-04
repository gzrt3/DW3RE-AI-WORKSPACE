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

// Function: entry_00131c00
// Address: 0x131c00 - 0x131c38
void entry_00131c00_0x131c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c00_0x131c00");
#endif

    switch (ctx->pc) {
        case 0x131c2cu: goto label_131c2c;
        default: break;
    }

    ctx->pc = 0x131c00u;

    // 0x131c00: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x131c04: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x131c08: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x131c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131c0c: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131c0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131c10: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131c10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131c14: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x131c18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131c20: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x131c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131c24: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131C24u;
    SET_GPR_U32(ctx, 31, 0x131C2Cu);
    ctx->pc = 0x131C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C24u;
    // 0x131c28: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131C24u, 0x131C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C2Cu;
label_131c2c:
    // 0x131c2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x131c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131C30u;
    {
        const bool branch_taken_0x131c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C30u;
        // 0x131c34: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c30) {
            ctx->pc = 0x131C3Cu;
            return;
        }
    }
    ctx->pc = 0x131C38u;
}
