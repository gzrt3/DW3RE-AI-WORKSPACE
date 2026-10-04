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

// Function: entry_001d2890
// Address: 0x1d2890 - 0x1d28e0
void entry_001d2890_0x1d2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2890_0x1d2890");
#endif

    ctx->pc = 0x1d2890u;

    // 0x1d2890: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d2894: 0x826021  addu        $t4, $a0, $v0
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2898: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d289c: 0x246a0010  addiu       $t2, $v1, 0x10
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d28a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d28a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d28a8: 0x611c3  sra         $v0, $a2, 7
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
    // 0x1d28ac: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x1d28acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d28b0: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d28b4: 0x252e0028  addiu       $t6, $t1, 0x28
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x1d28b8: 0xa46d0082  sh          $t5, 0x82($v1)
    ctx->pc = 0x1d28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28bc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28c0: 0xac690084  sw          $t1, 0x84($v1)
    ctx->pc = 0x1d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 9));
    // 0x1d28c4: 0xa46b0088  sh          $t3, 0x88($v1)
    ctx->pc = 0x1d28c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 136), (uint16_t)GPR_U32(ctx, 11));
    // 0x1d28c8: 0xa46e008a  sh          $t6, 0x8A($v1)
    ctx->pc = 0x1d28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 138), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d28cc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28d0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D28D0u;
    {
        const bool branch_taken_0x1d28d0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D0u;
        // 0x1d28d4: 0xac69008c  sw          $t1, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d0) {
            ctx->pc = 0x1D28E0u;
            return;
        }
    }
    ctx->pc = 0x1D28D8u;
    // 0x1d28d8: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x1d28dc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    ctx->pc = 0x1d28e0u;
}
