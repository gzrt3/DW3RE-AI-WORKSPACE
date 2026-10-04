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

// Function: entry_00115964
// Address: 0x115964 - 0x1159b0
void entry_00115964_0x115964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115964_0x115964");
#endif

    switch (ctx->pc) {
        case 0x11599cu: goto label_11599c;
        case 0x1159a4u: goto label_1159a4;
        case 0x1159acu: goto label_1159ac;
        default: break;
    }

    ctx->pc = 0x115964u;

label_115964:
    // 0x115964: 0x0  nop
    ctx->pc = 0x115964u;
    // NOP
    // 0x115968: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x115968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x11596c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115970: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x115970u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x115974: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x115974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x115978: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x11597c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11597Cu;
    {
        const bool branch_taken_0x11597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11597c) {
            ctx->pc = 0x115964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115964;
        }
    }
    ctx->pc = 0x115984u;
    // 0x115984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x115984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x115988: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x115988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11598c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x24c60204  addiu       $a2, $a2, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11598c) {
            ctx->pc = 0x115958u;
            return;
        }
    }
    ctx->pc = 0x115994u;
    // 0x115994: 0xc08c274  jal         func_2309D0
    ctx->pc = 0x115994u;
    SET_GPR_U32(ctx, 31, 0x11599Cu);
    ctx->pc = 0x2309D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2309D0u, 0x115994u, 0x11599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11599Cu;
label_11599c:
    // 0x11599c: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x11599Cu;
    SET_GPR_U32(ctx, 31, 0x1159A4u);
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x11599Cu, 0x1159A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159A4u;
label_1159a4:
    // 0x1159a4: 0xc0655bc  jal         func_1956F0
    ctx->pc = 0x1159A4u;
    SET_GPR_U32(ctx, 31, 0x1159ACu);
    ctx->pc = 0x1956F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1956F0u, 0x1159A4u, 0x1159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159ACu;
label_1159ac:
    // 0x1159ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1159acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1159b0u;
}
