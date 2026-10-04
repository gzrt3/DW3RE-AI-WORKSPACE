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

// Function: entry_0016bb30
// Address: 0x16bb30 - 0x16bb60
void entry_0016bb30_0x16bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb30_0x16bb30");
#endif

    ctx->pc = 0x16bb30u;

    // 0x16bb30: 0x8f84871c  lw          $a0, -0x78E4($gp)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x16bb34: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bb38: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16bb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x16bb3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BB3Cu;
    {
        const bool branch_taken_0x16bb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB3Cu;
        // 0x16bb40: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb3c) {
            ctx->pc = 0x16BB60u;
            return;
        }
    }
    ctx->pc = 0x16BB44u;
    // 0x16bb44: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb48: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bb48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x281EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EBCu, _value); } while (0);
    // 0x16bb4c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb50: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb54: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16bb58: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb5c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    ctx->pc = 0x16bb60u;
}
