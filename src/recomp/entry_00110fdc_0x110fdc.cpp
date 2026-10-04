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

// Function: entry_00110fdc
// Address: 0x110fdc - 0x111018
void entry_00110fdc_0x110fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110fdc_0x110fdc");
#endif

    ctx->pc = 0x110fdcu;

    // 0x110fdc: 0x0  nop
    ctx->pc = 0x110fdcu;
    // NOP
    // 0x110fe0: 0x0  nop
    ctx->pc = 0x110fe0u;
    // NOP
    // 0x110fe4: 0x91ae0010  lbu         $t6, 0x10($t5)
    ctx->pc = 0x110fe4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x110fe8: 0x11c00091  beqz        $t6, . + 4 + (0x91 << 2)
    ctx->pc = 0x110FE8u;
    {
        const bool branch_taken_0x110fe8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe8) {
            ctx->pc = 0x111230u;
            return;
        }
    }
    ctx->pc = 0x110FF0u;
    // 0x110ff0: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x110ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x110ff4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x110ff4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ff8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x110FF8u;
    {
        const bool branch_taken_0x110ff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FF8u;
        // 0x110ffc: 0x160602d  daddu       $t4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff8) {
            ctx->pc = 0x111070u;
            return;
        }
    }
    ctx->pc = 0x111000u;
    // 0x111000: 0x95b8000a  lhu         $t8, 0xA($t5)
    ctx->pc = 0x111000u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x111004: 0x188100  sll         $s0, $t8, 4
    ctx->pc = 0x111004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111008: 0x2188023  subu        $s0, $s0, $t8
    ctx->pc = 0x111008u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x11100c: 0xb08021  addu        $s0, $a1, $s0
    ctx->pc = 0x11100cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x111010: 0x92100004  lbu         $s0, 0x4($s0)
    ctx->pc = 0x111010u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x111014: 0x0  nop
    ctx->pc = 0x111014u;
    // NOP
    ctx->pc = 0x111018u;
}
