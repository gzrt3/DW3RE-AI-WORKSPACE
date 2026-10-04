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

// Function: FUN_0019f918
// Address: 0x19f918 - 0x19f974
void FUN_0019f918_0x19f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f918_0x19f918");
#endif

    switch (ctx->pc) {
        case 0x19f930u: goto label_19f930;
        case 0x19f940u: goto label_19f940;
        case 0x19f954u: goto label_19f954;
        case 0x19f960u: goto label_19f960;
        case 0x19f968u: goto label_19f968;
        default: break;
    }

    ctx->pc = 0x19f918u;

    // 0x19f918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f91c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f928: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F928u;
    SET_GPR_U32(ctx, 31, 0x19F930u);
    ctx->pc = 0x19F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F928u;
    // 0x19f92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F928u, 0x19F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F930u;
label_19f930:
    // 0x19f930: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x19f930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x19f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f938: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F938u;
    SET_GPR_U32(ctx, 31, 0x19F940u);
    ctx->pc = 0x19F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F938u;
    // 0x19f93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F938u, 0x19F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F940u;
label_19f940:
    // 0x19f940: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F940u;
        // 0x19f944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F96Cu;
            goto label_19f96c;
        }
    }
    ctx->pc = 0x19F948u;
    // 0x19f948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f94c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F94Cu;
    SET_GPR_U32(ctx, 31, 0x19F954u);
    ctx->pc = 0x19F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F94Cu;
    // 0x19f950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F94Cu, 0x19F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F954u;
label_19f954:
    // 0x19f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f958: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19F958u;
    SET_GPR_U32(ctx, 31, 0x19F960u);
    ctx->pc = 0x19F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F958u;
    // 0x19f95c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19F958u, 0x19F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F960u;
label_19f960:
    // 0x19f960: 0xc067f9c  jal         func_19FE70
    ctx->pc = 0x19F960u;
    SET_GPR_U32(ctx, 31, 0x19F968u);
    ctx->pc = 0x19F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F960u;
    // 0x19f964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FE70u, 0x19F960u, 0x19F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F968u;
label_19f968:
    // 0x19f968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f96c:
    // 0x19f96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f974u;
}
