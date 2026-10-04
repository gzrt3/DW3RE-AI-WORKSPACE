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

// Function: entry_00151f18
// Address: 0x151f18 - 0x151f50
void entry_00151f18_0x151f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f18_0x151f18");
#endif

    ctx->pc = 0x151f18u;

    // 0x151f18: 0x860403ca  lh          $a0, 0x3CA($s0)
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 970)));
    // 0x151f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151f20: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x151F20u;
    {
        const bool branch_taken_0x151f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x151f20) {
            ctx->pc = 0x151F50u;
            return;
        }
    }
    ctx->pc = 0x151F28u;
    // 0x151f28: 0x860303c8  lh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x151f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151f30: 0xa60303c8  sh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 3));
    // 0x151f34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x151f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x151f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x151f3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x151f40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151F40u;
    {
        const bool branch_taken_0x151f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f40) {
            ctx->pc = 0x151F50u;
            return;
        }
    }
    ctx->pc = 0x151F48u;
    // 0x151f48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x151F48u;
    {
        const bool branch_taken_0x151f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F48u;
        // 0x151f4c: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f48) {
            ctx->pc = 0x152020u;
            return;
        }
    }
    ctx->pc = 0x151F50u;
}
