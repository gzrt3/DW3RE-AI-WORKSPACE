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

// Function: entry_0019e168
// Address: 0x19e168 - 0x19e19c
void entry_0019e168_0x19e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e168_0x19e168");
#endif

    ctx->pc = 0x19e168u;

    // 0x19e168: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x19e16c: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19e16cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x19e170: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x19e174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e178: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19e17c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19e17cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19e180: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E180u;
    {
        const bool branch_taken_0x19e180 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E180u;
        // 0x19e184: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e180) {
            ctx->pc = 0x19E1A4u;
            return;
        }
    }
    ctx->pc = 0x19E188u;
    // 0x19e188: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x19e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19e18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E18Cu;
    {
        const bool branch_taken_0x19e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E18Cu;
        // 0x19e190: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e18c) {
            ctx->pc = 0x19E19Cu;
            return;
        }
    }
    ctx->pc = 0x19E194u;
    // 0x19e194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19E194u;
    {
        const bool branch_taken_0x19e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E194u;
        // 0x19e198: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e194) {
            ctx->pc = 0x19E1A8u;
            return;
        }
    }
    ctx->pc = 0x19E19Cu;
}
