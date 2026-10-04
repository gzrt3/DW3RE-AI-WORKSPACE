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

// Function: FUN_00235940
// Address: 0x235940 - 0x23598c
void FUN_00235940_0x235940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235940_0x235940");
#endif

    switch (ctx->pc) {
        case 0x235968u: goto label_235968;
        case 0x235978u: goto label_235978;
        default: break;
    }

    ctx->pc = 0x235940u;

    // 0x235940: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x235944: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235950: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235954: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x235954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x235958: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235958u;
    {
        const bool branch_taken_0x235958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235958u;
        // 0x23595c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235958) {
            ctx->pc = 0x235970u;
            goto label_235970;
        }
    }
    ctx->pc = 0x235960u;
    // 0x235960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235960u;
    {
        const bool branch_taken_0x235960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235960u;
        // 0x235964: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235960) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235968u;
label_235968:
    // 0x235968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x235968u;
    {
        const bool branch_taken_0x235968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235968u;
        // 0x23596c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235968) {
            ctx->pc = 0x235980u;
            goto label_235980;
        }
    }
    ctx->pc = 0x235970u;
label_235970:
    // 0x235970: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x235970u;
    SET_GPR_U32(ctx, 31, 0x235978u);
    ctx->pc = 0x235974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235970u;
    // 0x235974: 0x2624b168  addiu       $a0, $s1, -0x4E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x235970u, 0x235978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235978u;
label_235978:
    // 0x235978: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x235978u;
    {
        const bool branch_taken_0x235978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235978u;
        // 0x23597c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235978) {
            ctx->pc = 0x235968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235968;
        }
    }
    ctx->pc = 0x235980u;
label_235980:
    // 0x235980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23598cu;
}
