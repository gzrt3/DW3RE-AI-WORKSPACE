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

// Function: entry_00149170
// Address: 0x149170 - 0x1491ac
void entry_00149170_0x149170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149170_0x149170");
#endif

    switch (ctx->pc) {
        case 0x149194u: goto label_149194;
        case 0x1491a4u: goto label_1491a4;
        default: break;
    }

    ctx->pc = 0x149170u;

    // 0x149170: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x149170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149174: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x149174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149178: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x149178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x14917c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14917Cu;
    {
        const bool branch_taken_0x14917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14917c) {
            ctx->pc = 0x1491B0u;
            return;
        }
    }
    ctx->pc = 0x149184u;
    // 0x149184: 0x9226003a  lbu         $a2, 0x3A($s1)
    ctx->pc = 0x149184u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x149188: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x149188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x14918c: 0xc052808  jal         func_14A020
    ctx->pc = 0x14918Cu;
    SET_GPR_U32(ctx, 31, 0x149194u);
    ctx->pc = 0x149190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14918Cu;
    // 0x149190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A020u, 0x14918Cu, 0x149194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149194u;
label_149194:
    // 0x149194: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149194u;
    {
        const bool branch_taken_0x149194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149194u;
        // 0x149198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149194) {
            ctx->pc = 0x1491ACu;
            return;
        }
    }
    ctx->pc = 0x14919Cu;
    // 0x14919c: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x14919Cu;
    SET_GPR_U32(ctx, 31, 0x1491A4u);
    ctx->pc = 0x1491A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14919Cu;
    // 0x1491a0: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x14919Cu, 0x1491A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1491A4u;
    {
        const bool branch_taken_0x1491a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491A4u;
        // 0x1491a8: 0xa620002c  sh          $zero, 0x2C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491a4) {
            ctx->pc = 0x1491B0u;
            return;
        }
    }
    ctx->pc = 0x1491ACu;
}
