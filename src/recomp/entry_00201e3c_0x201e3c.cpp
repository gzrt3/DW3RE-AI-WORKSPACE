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

// Function: entry_00201e3c
// Address: 0x201e3c - 0x201e80
void entry_00201e3c_0x201e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201e3c_0x201e3c");
#endif

    ctx->pc = 0x201e3cu;

    // 0x201e3c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x201e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x201e40: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x201e44: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x201e48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201e50: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x201e54: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201e58: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x201e5c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x201e64: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x201e6c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x201e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x201e70: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x201e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x201e74: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x201e78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x201E78u;
    {
        const bool branch_taken_0x201e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E78u;
        // 0x201e7c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e78) {
            ctx->pc = 0x201ED8u;
            return;
        }
    }
    ctx->pc = 0x201E80u;
}
