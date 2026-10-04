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

// Function: entry_001532c8
// Address: 0x1532c8 - 0x1532fc
void entry_001532c8_0x1532c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001532c8_0x1532c8");
#endif

    ctx->pc = 0x1532c8u;

    // 0x1532c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1532c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1532cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1532ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1532d0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1532d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x1532d4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1532d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1532d8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1532d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1532dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1532e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532e4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1532e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1532e8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1532e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1532ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1532ECu;
    {
        const bool branch_taken_0x1532ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532ECu;
        // 0x1532f0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532ec) {
            ctx->pc = 0x1532FCu;
            return;
        }
    }
    ctx->pc = 0x1532F4u;
    // 0x1532f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F4u;
        // 0x1532f8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x153304u;
            return;
        }
    }
    ctx->pc = 0x1532FCu;
}
