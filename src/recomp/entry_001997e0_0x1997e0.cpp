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

// Function: entry_001997e0
// Address: 0x1997e0 - 0x199810
void entry_001997e0_0x1997e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997e0_0x1997e0");
#endif

    ctx->pc = 0x1997e0u;

    // 0x1997e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1997e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1997e8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1997ec: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1997f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1997f0u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    // 0x1997f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1997f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1997fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1997FCu;
    {
        const bool branch_taken_0x1997fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997fc) {
            ctx->pc = 0x19982Cu;
            return;
        }
    }
    ctx->pc = 0x199804u;
    // 0x199804: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199808: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x19980c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199810u;
}
