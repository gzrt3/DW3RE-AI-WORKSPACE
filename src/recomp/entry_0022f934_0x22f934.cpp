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

// Function: entry_0022f934
// Address: 0x22f934 - 0x22f97c
void entry_0022f934_0x22f934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f934_0x22f934");
#endif

    switch (ctx->pc) {
        case 0x22f93cu: goto label_22f93c;
        default: break;
    }

    ctx->pc = 0x22f934u;

    // 0x22f934: 0xc0901c0  jal         func_240700
    ctx->pc = 0x22F934u;
    SET_GPR_U32(ctx, 31, 0x22F93Cu);
    ctx->pc = 0x240700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240700u, 0x22F934u, 0x22F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F93Cu;
label_22f93c:
    // 0x22f93c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F93Cu;
        // 0x22f940: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22F980u;
            return;
        }
    }
    ctx->pc = 0x22F944u;
    // 0x22f944: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f94c: 0x8c220094  lw          $v0, 0x94($at)
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B0094u));
    // 0x22f950: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22F97Cu;
            return;
        }
    }
    ctx->pc = 0x22F958u;
    // 0x22f958: 0x8c2200f4  lw          $v0, 0xF4($at)
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
    // 0x22f95c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F97Cu;
            return;
        }
    }
    ctx->pc = 0x22F964u;
    // 0x22f964: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f968: 0x8c2200dc  lw          $v0, 0xDC($at)
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B00DCu));
    // 0x22f96c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F96Cu;
    {
        const bool branch_taken_0x22f96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F96Cu;
        // 0x22f970: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f96c) {
            ctx->pc = 0x22F97Cu;
            return;
        }
    }
    ctx->pc = 0x22F974u;
    // 0x22f974: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F974u;
    SET_GPR_U32(ctx, 31, 0x22F97Cu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F974u, 0x22F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F97Cu;
}
