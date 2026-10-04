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

// Function: entry_001af794
// Address: 0x1af794 - 0x1af7e4
void entry_001af794_0x1af794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af794_0x1af794");
#endif

    switch (ctx->pc) {
        case 0x1af7c0u: goto label_1af7c0;
        default: break;
    }

    ctx->pc = 0x1af794u;

    // 0x1af794: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x1af798: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1af79c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1af79cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x1af7a0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1af7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1af7a4: 0x26a45fc0  addiu       $a0, $s5, 0x5FC0
    ctx->pc = 0x1af7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1af7b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF7B0u;
    {
        const bool branch_taken_0x1af7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7b0) {
            ctx->pc = 0x1AF7E4u;
            return;
        }
    }
    ctx->pc = 0x1AF7B8u;
    // 0x1af7b8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1af7bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1af7c0:
    // 0x1af7c0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1af7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1af7c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF7C4u;
    {
        const bool branch_taken_0x1af7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c4) {
            ctx->pc = 0x1AF7E4u;
            return;
        }
    }
    ctx->pc = 0x1AF7CCu;
    // 0x1af7cc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1af7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1af7d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1af7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af7d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1af7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af7d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1af7dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AF7DCu;
    {
        const bool branch_taken_0x1af7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af7dc) {
            ctx->pc = 0x1AF7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF7DCu;
            // 0x1af7e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af7c0;
        }
    }
    ctx->pc = 0x1AF7E4u;
}
