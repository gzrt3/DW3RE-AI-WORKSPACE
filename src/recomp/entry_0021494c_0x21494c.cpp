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

// Function: entry_0021494c
// Address: 0x21494c - 0x214978
void entry_0021494c_0x21494c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021494c_0x21494c");
#endif

    switch (ctx->pc) {
        case 0x21495cu: goto label_21495c;
        default: break;
    }

    ctx->pc = 0x21494cu;

    // 0x21494c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21494Cu;
    {
        const bool branch_taken_0x21494c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21494c) {
            ctx->pc = 0x214978u;
            return;
        }
    }
    ctx->pc = 0x214954u;
    // 0x214954: 0xc0855ac  jal         func_2156B0
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 31, 0x21495Cu);
    ctx->pc = 0x2156B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B0u, 0x214954u, 0x21495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x214960: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x214964: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x21496Cu;
    // 0x21496c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21496cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214970: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x214970u;
    {
        const bool branch_taken_0x214970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214970u;
        // 0x214974: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214970) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x214978u;
}
