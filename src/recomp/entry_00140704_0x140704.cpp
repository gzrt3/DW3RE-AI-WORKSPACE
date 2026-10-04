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

// Function: entry_00140704
// Address: 0x140704 - 0x14072c
void entry_00140704_0x140704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140704_0x140704");
#endif

    switch (ctx->pc) {
        case 0x140724u: goto label_140724;
        default: break;
    }

    ctx->pc = 0x140704u;

    // 0x140704: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x140704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140708: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14070c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x14070cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x140710: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x140710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x140714: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140714u;
    {
        const bool branch_taken_0x140714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140714) {
            ctx->pc = 0x14073Cu;
            return;
        }
    }
    ctx->pc = 0x14071Cu;
    // 0x14071c: 0xc04e334  jal         func_138CD0
    ctx->pc = 0x14071Cu;
    SET_GPR_U32(ctx, 31, 0x140724u);
    ctx->pc = 0x138CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CD0u, 0x14071Cu, 0x140724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140724u;
label_140724:
    // 0x140724: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140724u;
    {
        const bool branch_taken_0x140724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140724u;
        // 0x140728: 0x92020232  lbu         $v0, 0x232($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140724) {
            ctx->pc = 0x140740u;
            return;
        }
    }
    ctx->pc = 0x14072Cu;
}
