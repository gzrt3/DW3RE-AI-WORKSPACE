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

// Function: entry_0024035c
// Address: 0x24035c - 0x2403b0
void entry_0024035c_0x24035c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024035c_0x24035c");
#endif

    ctx->pc = 0x24035cu;

    // 0x24035c: 0x0  nop
    ctx->pc = 0x24035cu;
    // NOP
    // 0x240360: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x240364: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240364u;
        // 0x240368: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240364) {
            ctx->pc = 0x2403A8u;
            goto label_2403a8;
        }
    }
    ctx->pc = 0x24036Cu;
    // 0x24036c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x240370: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x240374: 0x24e7caf8  addiu       $a3, $a3, -0x3508
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953720));
    // 0x240378: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x240378u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24037c: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x240380: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x240384: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x240388: 0x2463caf4  addiu       $v1, $v1, -0x350C
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953716));
    // 0x24038c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x240390: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x240394: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x240398: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x240398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x24039c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x24039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2403a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2403a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2403a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2403a8:
    // 0x2403a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2403A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2403A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2403B0u;
}
