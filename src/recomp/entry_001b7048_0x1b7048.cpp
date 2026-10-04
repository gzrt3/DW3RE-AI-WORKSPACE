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

// Function: entry_001b7048
// Address: 0x1b7048 - 0x1b7088
void entry_001b7048_0x1b7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7048_0x1b7048");
#endif

    ctx->pc = 0x1b7048u;

    // 0x1b7048: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B7048u;
    {
        const bool branch_taken_0x1b7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7048u;
        // 0x1b704c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7048) {
            ctx->pc = 0x1B7088u;
            return;
        }
    }
    ctx->pc = 0x1B7050u;
    // 0x1b7050: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b7054: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7054u;
    {
        const bool branch_taken_0x1b7054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7054u;
        // 0x1b7058: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7054) {
            ctx->pc = 0x1B7070u;
            goto label_1b7070;
        }
    }
    ctx->pc = 0x1B705Cu;
    // 0x1b705c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1b705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b7060: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7060u;
    {
        const bool branch_taken_0x1b7060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7060) {
            ctx->pc = 0x1B7064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7060u;
            // 0x1b7064: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7068u;
    // 0x1b7068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7068u;
    {
        const bool branch_taken_0x1b7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7068) {
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7070u;
label_1b7070:
    // 0x1b7070: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_1b7074:
    // 0x1b7074: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7074u;
            // 0x1b7078: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7088u;
            return;
        }
    }
    ctx->pc = 0x1B707Cu;
    // 0x1b707c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1b7080: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b7084: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1b7084u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    ctx->pc = 0x1b7088u;
}
