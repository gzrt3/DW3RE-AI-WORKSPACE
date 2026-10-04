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

// Function: FUN_0016bd00
// Address: 0x16bd00 - 0x16bd2c
void FUN_0016bd00_0x16bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bd00_0x16bd00");
#endif

    ctx->pc = 0x16bd00u;

    // 0x16bd00: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bd04: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x16bd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x16bd08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BD08u;
    {
        const bool branch_taken_0x16bd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD08u;
        // 0x16bd0c: 0xaf8386f4  sw          $v1, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd08) {
            ctx->pc = 0x16BD2Cu;
            return;
        }
    }
    ctx->pc = 0x16BD10u;
    // 0x16bd10: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd14: 0xac231ebc  sw          $v1, 0x1EBC($at)
    ctx->pc = 0x16bd14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EBCu, _value); } while (0);
    // 0x16bd18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd1c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bd20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x16bd24: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bd28: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16bd2cu;
}
