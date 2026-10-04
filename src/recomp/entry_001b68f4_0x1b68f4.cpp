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

// Function: entry_001b68f4
// Address: 0x1b68f4 - 0x1b6928
void entry_001b68f4_0x1b68f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b68f4_0x1b68f4");
#endif

    ctx->pc = 0x1b68f4u;

    // 0x1b68f4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b68f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b68f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b68fc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b6900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6904: 0x9042b5b0  lbu         $v0, -0x4A50($v0)
    ctx->pc = 0x1b6904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948272)));
    // 0x1b6908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b690c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b690cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b6910: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6910u;
    {
        const bool branch_taken_0x1b6910 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6910u;
        // 0x1b6914: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6910) {
            ctx->pc = 0x1B6928u;
            return;
        }
    }
    ctx->pc = 0x1B6918u;
    // 0x1b6918: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1b691c: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b691cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6920: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1B6920u;
    {
        const bool branch_taken_0x1b6920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6920u;
        // 0x1b6924: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6920) {
            ctx->pc = 0x1B69F8u;
            return;
        }
    }
    ctx->pc = 0x1B6928u;
}
