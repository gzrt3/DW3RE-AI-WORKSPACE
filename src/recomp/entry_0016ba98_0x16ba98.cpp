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

// Function: entry_0016ba98
// Address: 0x16ba98 - 0x16bad4
void entry_0016ba98_0x16ba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba98_0x16ba98");
#endif

    ctx->pc = 0x16ba98u;

    // 0x16ba98: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x16ba9c: 0xaf8486f4  sw          $a0, -0x790C($gp)
    ctx->pc = 0x16ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
    // 0x16baa0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x16baa4: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16baa8: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16baa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x16baac: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x16BAACu;
    {
        const bool branch_taken_0x16baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAACu;
        // 0x16bab0: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baac) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BAB4u;
    // 0x16bab4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bab8: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x281EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EBCu, _value); } while (0);
    // 0x16babc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bac0: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bac4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16bac8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bacc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x16BACCu;
    {
        const bool branch_taken_0x16bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BACCu;
        // 0x16bad0: 0xac231eb0  sw          $v1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bacc) {
            ctx->pc = 0x16BBA0u;
            return;
        }
    }
    ctx->pc = 0x16BAD4u;
}
