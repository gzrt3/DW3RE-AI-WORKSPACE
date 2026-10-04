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

// Function: entry_00113c24
// Address: 0x113c24 - 0x113c7c
void entry_00113c24_0x113c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c24_0x113c24");
#endif

    ctx->pc = 0x113c24u;

    // 0x113c24: 0x0  nop
    ctx->pc = 0x113c24u;
    // NOP
    // 0x113c28: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x113c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x113c2c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x113c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113c30: 0x8d250028  lw          $a1, 0x28($t1)
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x113c34: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x113c38: 0x30ca00ff  andi        $t2, $a2, 0xFF
    ctx->pc = 0x113c38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x113c3c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x113c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x113c40: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x113c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x113c44: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x113c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x113c48: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113c4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x113c4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x113c50: 0x248a0002  addiu       $t2, $a0, 0x2
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x113c54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x113c58: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x113c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113c5c: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x113c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x113c60: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x113c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x113c64: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x113c68: 0x25640003  addiu       $a0, $t3, 0x3
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x113c6c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113C6Cu;
    {
        const bool branch_taken_0x113c6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C6Cu;
        // 0x113c70: 0x42883  sra         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c6c) {
            ctx->pc = 0x113C7Cu;
            return;
        }
    }
    ctx->pc = 0x113C74u;
    // 0x113c74: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x113c78: 0x42883  sra         $a1, $a0, 2
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 2));
    ctx->pc = 0x113c7cu;
}
