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

// Function: entry_001a60d4
// Address: 0x1a60d4 - 0x1a6118
void entry_001a60d4_0x1a60d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60d4_0x1a60d4");
#endif

    ctx->pc = 0x1a60d4u;

    // 0x1a60d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a60d8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a60dc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x1a60e0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1A60E0u;
    {
        const bool branch_taken_0x1a60e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60e0) {
            ctx->pc = 0x1A6118u;
            return;
        }
    }
    ctx->pc = 0x1A60E8u;
    // 0x1a60e8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x1a60e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x1a60ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a60f0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x1a60f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x1a60f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a60f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a60f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1a60f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1a60fc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x1a60fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1a6100: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x1a6100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1a6104: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6104u;
    {
        const bool branch_taken_0x1a6104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6104) {
            ctx->pc = 0x1A6108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6104u;
            // 0x1a6108: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6124u;
            return;
        }
    }
    ctx->pc = 0x1A610Cu;
    // 0x1a610c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x1a610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x1a6110: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6110u;
    {
        const bool branch_taken_0x1a6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6110u;
        // 0x1a6114: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6110) {
            ctx->pc = 0x1A6124u;
            return;
        }
    }
    ctx->pc = 0x1A6118u;
}
