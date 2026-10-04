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

// Function: entry_001b57d4
// Address: 0x1b57d4 - 0x1b5810
void entry_001b57d4_0x1b57d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b57d4_0x1b57d4");
#endif

    ctx->pc = 0x1b57d4u;

    // 0x1b57d4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b57d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b57d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b57dc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b57e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b57e4: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b57e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b57e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b57ec: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b57ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b57f0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B57F0u;
    {
        const bool branch_taken_0x1b57f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57F0u;
        // 0x1b57f4: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57f0) {
            ctx->pc = 0x1B5810u;
            return;
        }
    }
    ctx->pc = 0x1B57F8u;
    // 0x1b57f8: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1b57fc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1b57fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5800: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b5804: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B5804u;
    {
        const bool branch_taken_0x1b5804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5804u;
        // 0x1b5808: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5804) {
            ctx->pc = 0x1B58F8u;
            return;
        }
    }
    ctx->pc = 0x1B580Cu;
    // 0x1b580c: 0x0  nop
    ctx->pc = 0x1b580cu;
    // NOP
    ctx->pc = 0x1b5810u;
}
