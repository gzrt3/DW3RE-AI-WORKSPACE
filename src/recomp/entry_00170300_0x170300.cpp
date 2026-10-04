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

// Function: entry_00170300
// Address: 0x170300 - 0x170334
void entry_00170300_0x170300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170300_0x170300");
#endif

    ctx->pc = 0x170300u;

    // 0x170300: 0x91eb0110  lbu         $t3, 0x110($t7)
    ctx->pc = 0x170300u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x170304: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x170308: 0xa1eb0110  sb          $t3, 0x110($t7)
    ctx->pc = 0x170308u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 272), (uint8_t)GPR_U32(ctx, 11));
    // 0x17030c: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x17030cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x170310: 0x8f8b873c  lw          $t3, -0x78C4($gp)
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x170314: 0x18b582b  sltu        $t3, $t4, $t3
    ctx->pc = 0x170314u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x170318: 0x1560000a  bnez        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x170318u;
    {
        const bool branch_taken_0x170318 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x17031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170318u;
        // 0x17031c: 0x25ed0110  addiu       $t5, $t7, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170318) {
            ctx->pc = 0x170344u;
            return;
        }
    }
    ctx->pc = 0x170320u;
    // 0x170320: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x170320u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x170324: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x170324u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x170328: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x17032c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17032Cu;
    {
        const bool branch_taken_0x17032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17032Cu;
        // 0x170330: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17032c) {
            ctx->pc = 0x170344u;
            return;
        }
    }
    ctx->pc = 0x170334u;
}
