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

// Function: entry_00131bdc
// Address: 0x131bdc - 0x131c00
void entry_00131bdc_0x131bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131bdc_0x131bdc");
#endif

    switch (ctx->pc) {
        case 0x131bf4u: goto label_131bf4;
        default: break;
    }

    ctx->pc = 0x131bdcu;

    // 0x131bdc: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x131be0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x131be0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131be4: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131be4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131be8: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131be8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131bec: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131BECu;
    SET_GPR_U32(ctx, 31, 0x131BF4u);
    ctx->pc = 0x131BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BECu;
    // 0x131bf0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131BECu, 0x131BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF4u;
label_131bf4:
    // 0x131bf4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x131bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x131bf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BF8u;
        // 0x131bfc: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131C3Cu;
            return;
        }
    }
    ctx->pc = 0x131C00u;
}
