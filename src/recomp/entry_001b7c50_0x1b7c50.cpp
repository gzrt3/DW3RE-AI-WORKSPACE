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

// Function: entry_001b7c50
// Address: 0x1b7c50 - 0x1b7c80
void entry_001b7c50_0x1b7c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7c50_0x1b7c50");
#endif

    ctx->pc = 0x1b7c50u;

    // 0x1b7c50: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b7c54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7C54u;
    {
        const bool branch_taken_0x1b7c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c54) {
            ctx->pc = 0x1B7C80u;
            return;
        }
    }
    ctx->pc = 0x1B7C5Cu;
    // 0x1b7c5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7c60: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1b7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x1b7c64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b7c68: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7C68u;
    {
        const bool branch_taken_0x1b7c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C68u;
        // 0x1b7c6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c68) {
            ctx->pc = 0x1B7CD8u;
            return;
        }
    }
    ctx->pc = 0x1B7C70u;
    // 0x1b7c70: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1b7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b7c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7C74u;
    {
        const bool branch_taken_0x1b7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C74u;
        // 0x1b7c78: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c74) {
            ctx->pc = 0x1B7C84u;
            return;
        }
    }
    ctx->pc = 0x1B7C7Cu;
    // 0x1b7c7c: 0x0  nop
    ctx->pc = 0x1b7c7cu;
    // NOP
    ctx->pc = 0x1b7c80u;
}
