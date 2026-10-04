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

// Function: entry_0020233c
// Address: 0x20233c - 0x202380
void entry_0020233c_0x20233c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020233c_0x20233c");
#endif

    ctx->pc = 0x20233cu;

    // 0x20233c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20233cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x202340: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x202344: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x202348: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20234c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202350: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202354: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202358: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20235c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202360: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x202364: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202368: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20236c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20236cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x202370: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x202374: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x202378: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x202378u;
    {
        const bool branch_taken_0x202378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202378u;
        // 0x20237c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202378) {
            ctx->pc = 0x2023D8u;
            return;
        }
    }
    ctx->pc = 0x202380u;
}
