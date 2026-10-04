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

// Function: entry_00235a14
// Address: 0x235a14 - 0x235a4c
void entry_00235a14_0x235a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235a14_0x235a14");
#endif

    switch (ctx->pc) {
        case 0x235a1cu: goto label_235a1c;
        default: break;
    }

    ctx->pc = 0x235a14u;

    // 0x235a14: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x235A14u;
    SET_GPR_U32(ctx, 31, 0x235A1Cu);
    ctx->pc = 0x235A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A14u;
    // 0x235a18: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x235A14u, 0x235A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A1Cu;
label_235a1c:
    // 0x235a1c: 0x2404ff9d  addiu       $a0, $zero, -0x63
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235A20u;
    {
        const bool branch_taken_0x235a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a20) {
            ctx->pc = 0x235A40u;
            goto label_235a40;
        }
    }
    ctx->pc = 0x235A28u;
    // 0x235a28: 0x56230009  bnel        $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x235A28u;
    {
        const bool branch_taken_0x235a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x235a28) {
            ctx->pc = 0x235A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A28u;
            // 0x235a2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235A50u;
            return;
        }
    }
    ctx->pc = 0x235A30u;
    // 0x235a30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x235a34: 0xaf8282ec  sw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 2));
    // 0x235a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235A38u;
    {
        const bool branch_taken_0x235a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a38) {
            ctx->pc = 0x235A48u;
            goto label_235a48;
        }
    }
    ctx->pc = 0x235A40u;
label_235a40:
    // 0x235a40: 0xaf8482ec  sw          $a0, -0x7D14($gp)
    ctx->pc = 0x235a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 4));
    // 0x235a44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x235a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_235a48:
    // 0x235a48: 0x8f8282ec  lw          $v0, -0x7D14($gp)
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    ctx->pc = 0x235a4cu;
}
