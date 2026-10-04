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

// Function: FUN_001a18d8
// Address: 0x1a18d8 - 0x1a192c
void FUN_001a18d8_0x1a18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a18d8_0x1a18d8");
#endif

    ctx->pc = 0x1a18d8u;

    // 0x1a18d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a18d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a18e0: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1a18e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1a18e4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1a18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a18e8: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x1a18e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a18ec: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1a18f0: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x1a18f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x1a18f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a18f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a18f8: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x1a18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x1a18fc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a1900: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1a1900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1a1904: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1a1904u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1908: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x1a1908u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x1a190c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A190Cu;
    {
        const bool branch_taken_0x1a190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A190Cu;
        // 0x1a1910: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a190c) {
            ctx->pc = 0x1A1920u;
            goto label_1a1920;
        }
    }
    ctx->pc = 0x1A1914u;
    // 0x1a1914: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a1918: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a191c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1a191cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1a1920:
    // 0x1a1920: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1924: 0x80685ea  j           func_1A17A8
    ctx->pc = 0x1A1924u;
    ctx->pc = 0x1A1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1924u;
    // 0x1a1928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    FUN_001a17a8_0x1a17a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A192Cu;
}
