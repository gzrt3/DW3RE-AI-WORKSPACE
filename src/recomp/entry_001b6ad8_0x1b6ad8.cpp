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

// Function: entry_001b6ad8
// Address: 0x1b6ad8 - 0x1b6b18
void entry_001b6ad8_0x1b6ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6ad8_0x1b6ad8");
#endif

    ctx->pc = 0x1b6ad8u;

    // 0x1b6ad8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b6ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6adc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B6ADCu;
    {
        const bool branch_taken_0x1b6adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ADCu;
        // 0x1b6ae0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6adc) {
            ctx->pc = 0x1B6B18u;
            return;
        }
    }
    ctx->pc = 0x1B6AE4u;
    // 0x1b6ae4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ae8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6aec: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1b6af0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6af4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6af4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6af8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6afc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b6b00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6b04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6b08: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6b08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6b0c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6b0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6b10: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1B6B10u;
    {
        const bool branch_taken_0x1b6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B10u;
        // 0x1b6b14: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b10) {
            ctx->pc = 0x1B6D54u;
            return;
        }
    }
    ctx->pc = 0x1B6B18u;
}
