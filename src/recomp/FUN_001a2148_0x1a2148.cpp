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

// Function: FUN_001a2148
// Address: 0x1a2148 - 0x1a21ac
void FUN_001a2148_0x1a2148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2148_0x1a2148");
#endif

    switch (ctx->pc) {
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a218cu: goto label_1a218c;
        case 0x1a2198u: goto label_1a2198;
        default: break;
    }

    ctx->pc = 0x1a2148u;

    // 0x1a2148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a214c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1a214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a2150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2154: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a2158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a215c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A215Cu;
    SET_GPR_U32(ctx, 31, 0x1A2164u);
    ctx->pc = 0x1A2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A215Cu;
    // 0x1a2160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A215Cu, 0x1A2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2164u;
label_1a2164:
    // 0x1a2164: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a216c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A216Cu;
    SET_GPR_U32(ctx, 31, 0x1A2174u);
    ctx->pc = 0x1A2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A216Cu;
    // 0x1a2170: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A216Cu, 0x1A2174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2174u;
label_1a2174:
    // 0x1a2174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2174u;
    {
        const bool branch_taken_0x1a2174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2174u;
        // 0x1a2178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2174) {
            ctx->pc = 0x1A2190u;
            goto label_1a2190;
        }
    }
    ctx->pc = 0x1A217Cu;
    // 0x1a217c: 0x0  nop
    ctx->pc = 0x1a217cu;
    // NOP
label_1a2180:
    // 0x1a2180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2184: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2184u;
    SET_GPR_U32(ctx, 31, 0x1A218Cu);
    ctx->pc = 0x1A2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2184u;
    // 0x1a2188: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2184u, 0x1A218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A218Cu;
label_1a218c:
    // 0x1a218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2190:
    // 0x1a2190: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A2190u;
    SET_GPR_U32(ctx, 31, 0x1A2198u);
    ctx->pc = 0x1A2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2190u;
    // 0x1a2194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A2190u, 0x1A2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2198u;
label_1a2198:
    // 0x1a2198: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A2198u;
    {
        const bool branch_taken_0x1a2198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2198u;
        // 0x1a219c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2198) {
            ctx->pc = 0x1A2180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A21A0u;
    // 0x1a21a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a21a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a21a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a21a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a21acu;
}
