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

// Function: entry_0019f4dc
// Address: 0x19f4dc - 0x19f510
void entry_0019f4dc_0x19f4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4dc_0x19f4dc");
#endif

    ctx->pc = 0x19f4dcu;

    // 0x19f4dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4e4: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19f4e4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x19f4e8: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19f4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x19f4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x19f4f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19f4f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f4f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f4f8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F4F8u;
    {
        const bool branch_taken_0x19f4f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4F8u;
        // 0x19f4fc: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4f8) {
            ctx->pc = 0x19F510u;
            return;
        }
    }
    ctx->pc = 0x19F500u;
    // 0x19f500: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19f504: 0x21023  negu        $v0, $v0
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19f508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F514u;
            return;
        }
    }
    ctx->pc = 0x19F510u;
}
