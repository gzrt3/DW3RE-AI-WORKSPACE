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

// Function: FUN_001cf5c0
// Address: 0x1cf5c0 - 0x1cf638
void FUN_001cf5c0_0x1cf5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf5c0_0x1cf5c0");
#endif

    ctx->pc = 0x1cf5c0u;

    // 0x1cf5c0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cf5c4: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1cf5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x1cf5c8: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1cf5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cf5cc: 0x24c603c0  addiu       $a2, $a2, 0x3C0
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x1cf5d0: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x1cf5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1cf5d4: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1cf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x1cf5d8: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1cf5dc: 0x24a503c4  addiu       $a1, $a1, 0x3C4
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 964));
    // 0x1cf5e0: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cf5e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf5e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cf5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cf5ec: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1cf5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf5f0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1cf5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cf5f4: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x1cf5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1cf5f8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x1cf5fc: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x1cf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1cf600: 0x24e77a80  addiu       $a3, $a3, 0x7A80
    ctx->pc = 0x1cf600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
    // 0x1cf604: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1cf604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1cf608: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cf608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cf60c: 0x84a70220  lh          $a3, 0x220($a1)
    ctx->pc = 0x1cf60cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x1cf610: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf614: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF614u;
    {
        const bool branch_taken_0x1cf614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF614u;
        // 0x1cf618: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf614) {
            ctx->pc = 0x1CF624u;
            goto label_1cf624;
        }
    }
    ctx->pc = 0x1CF61Cu;
    // 0x1cf61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF61Cu;
    {
        const bool branch_taken_0x1cf61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF61Cu;
        // 0x1cf620: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf61c) {
            ctx->pc = 0x1CF62Cu;
            goto label_1cf62c;
        }
    }
    ctx->pc = 0x1CF624u;
label_1cf624:
    // 0x1cf624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf628: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_1cf62c:
    // 0x1cf62c: 0x84a7021c  lh          $a3, 0x21C($a1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x1cf630: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cf634: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x1cf638u;
}
