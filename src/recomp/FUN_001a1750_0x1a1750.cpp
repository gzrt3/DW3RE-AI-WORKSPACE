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

// Function: FUN_001a1750
// Address: 0x1a1750 - 0x1a1784
void FUN_001a1750_0x1a1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1750_0x1a1750");
#endif

    ctx->pc = 0x1a1750u;

    // 0x1a1750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1a1754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1758: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a175c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1a175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1a1760: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a1760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1a1764: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x1a1764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x1a1768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a176c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1a176cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1a1770: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1a1774: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1a1774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1a1778: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1a1778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x1a177c: 0x80685ea  j           func_1A17A8
    ctx->pc = 0x1A177Cu;
    ctx->pc = 0x1A1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A177Cu;
    // 0x1a1780: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    FUN_001a17a8_0x1a17a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A1784u;
}
