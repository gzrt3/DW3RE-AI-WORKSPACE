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

// Function: entry_00131bb8
// Address: 0x131bb8 - 0x131bdc
void entry_00131bb8_0x131bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131bb8_0x131bb8");
#endif

    switch (ctx->pc) {
        case 0x131bd4u: goto label_131bd4;
        default: break;
    }

    ctx->pc = 0x131bb8u;

    // 0x131bb8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x131bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x131bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bc0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131bc4: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131bc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131bc8: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131bc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131bcc: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131BCCu;
    SET_GPR_U32(ctx, 31, 0x131BD4u);
    ctx->pc = 0x131BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BCCu;
    // 0x131bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131BCCu, 0x131BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BD4u;
label_131bd4:
    // 0x131bd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x131BD4u;
    {
        const bool branch_taken_0x131bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BD4u;
        // 0x131bd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bd4) {
            ctx->pc = 0x131C40u;
            return;
        }
    }
    ctx->pc = 0x131BDCu;
}
