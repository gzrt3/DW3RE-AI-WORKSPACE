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

// Function: entry_0019982c
// Address: 0x19982c - 0x199874
void entry_0019982c_0x19982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019982c_0x19982c");
#endif

    ctx->pc = 0x19982cu;

    // 0x19982c: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x19982cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x199830: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199834: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x199834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x199838: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x19983c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x199840: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x199844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x199848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x199848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19984c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199850: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x199850u;
    {
        const bool branch_taken_0x199850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199850) {
            ctx->pc = 0x199888u;
            return;
        }
    }
    ctx->pc = 0x199858u;
    // 0x199858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19985c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199864: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x199868: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x19986c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199898u;
            return;
        }
    }
    ctx->pc = 0x199874u;
}
