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

// Function: entry_00131e38
// Address: 0x131e38 - 0x131e84
void entry_00131e38_0x131e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131e38_0x131e38");
#endif

    ctx->pc = 0x131e38u;

    // 0x131e38: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x131e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x131e3c: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x131e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x131e40: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x131e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131e44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x131e48: 0x82240004  lb          $a0, 0x4($s1)
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131e4c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x131e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131e50: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x131e54: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x131e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131e58: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131e60: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x131e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131e64: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x131e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x131e68: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x131e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131e6c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x131E6Cu;
    {
        const bool branch_taken_0x131e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x131E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E6Cu;
        // 0x131e70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e6c) {
            ctx->pc = 0x131EC8u;
            return;
        }
    }
    ctx->pc = 0x131E74u;
    // 0x131e74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E74u;
    {
        const bool branch_taken_0x131e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131e74) {
            ctx->pc = 0x131E84u;
            return;
        }
    }
    ctx->pc = 0x131E7Cu;
    // 0x131e7c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x131E7Cu;
    {
        const bool branch_taken_0x131e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E7Cu;
        // 0x131e80: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e7c) {
            ctx->pc = 0x131F0Cu;
            return;
        }
    }
    ctx->pc = 0x131E84u;
}
