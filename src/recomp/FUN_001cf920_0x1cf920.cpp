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

// Function: FUN_001cf920
// Address: 0x1cf920 - 0x1cf984
void FUN_001cf920_0x1cf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf920_0x1cf920");
#endif

    switch (ctx->pc) {
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf980u: goto label_1cf980;
        default: break;
    }

    ctx->pc = 0x1cf920u;

    // 0x1cf920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf92c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CF92Cu;
    {
        const bool branch_taken_0x1cf92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF92Cu;
        // 0x1cf930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf92c) {
            ctx->pc = 0x1CF96Cu;
            goto label_1cf96c;
        }
    }
    ctx->pc = 0x1CF934u;
    // 0x1cf934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf93c:
    // 0x1cf93c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cf940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf944: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x1cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x1cf948: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf94c: 0xc073e68  jal         func_1CF9A0
    ctx->pc = 0x1CF94Cu;
    SET_GPR_U32(ctx, 31, 0x1CF954u);
    ctx->pc = 0x1CF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF94Cu;
    // 0x1cf950: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9A0u, 0x1CF94Cu, 0x1CF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF954u;
label_1cf954:
    // 0x1cf954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf958: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1cf958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf95c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CF95Cu;
    {
        const bool branch_taken_0x1cf95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF95Cu;
        // 0x1cf960: 0x26312780  addiu       $s1, $s1, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf95c) {
            ctx->pc = 0x1CF93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf93c;
        }
    }
    ctx->pc = 0x1CF964u;
    // 0x1cf964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF964u;
    {
        const bool branch_taken_0x1cf964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF964u;
        // 0x1cf968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf964) {
            ctx->pc = 0x1CF984u;
            return;
        }
    }
    ctx->pc = 0x1CF96Cu;
label_1cf96c:
    // 0x1cf96c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cf96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cf970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf974: 0x24847a80  addiu       $a0, $a0, 0x7A80
    ctx->pc = 0x1cf974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31360));
    // 0x1cf978: 0xc073e68  jal         func_1CF9A0
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x1CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF978u;
    // 0x1cf97c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9A0u, 0x1CF978u, 0x1CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cf984u;
}
