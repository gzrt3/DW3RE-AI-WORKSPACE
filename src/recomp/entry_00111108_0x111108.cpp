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

// Function: entry_00111108
// Address: 0x111108 - 0x111134
void entry_00111108_0x111108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111108_0x111108");
#endif

    ctx->pc = 0x111108u;

    // 0x111108: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11110c: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x111110: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x111110u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111114: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x111114u;
    {
        const bool branch_taken_0x111114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111114u;
        // 0x111118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111114) {
            ctx->pc = 0x111198u;
            return;
        }
    }
    ctx->pc = 0x11111Cu;
    // 0x11111c: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x11111cu;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111120: 0x187900  sll         $t7, $t8, 4
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111124: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x111124u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x111128: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x111128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x11112c: 0x91f90002  lbu         $t9, 0x2($t7)
    ctx->pc = 0x11112cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x111130: 0x0  nop
    ctx->pc = 0x111130u;
    // NOP
    ctx->pc = 0x111134u;
}
