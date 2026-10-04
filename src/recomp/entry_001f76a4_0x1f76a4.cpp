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

// Function: entry_001f76a4
// Address: 0x1f76a4 - 0x1f76d4
void entry_001f76a4_0x1f76a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76a4_0x1f76a4");
#endif

    ctx->pc = 0x1f76a4u;

    // 0x1f76a4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1f76a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f76a8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F76A8u;
    {
        const bool branch_taken_0x1f76a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a8) {
            ctx->pc = 0x1F76F4u;
            return;
        }
    }
    ctx->pc = 0x1F76B0u;
    // 0x1f76b0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F76B0u;
    {
        const bool branch_taken_0x1f76b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B0u;
        // 0x1f76b4: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b0) {
            ctx->pc = 0x1F76D4u;
            return;
        }
    }
    ctx->pc = 0x1F76B8u;
    // 0x1f76b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76bc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x1f76c0: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
    // 0x1f76c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f76c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1f76cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F76CCu;
    {
        const bool branch_taken_0x1f76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76cc) {
            ctx->pc = 0x1F76F4u;
            return;
        }
    }
    ctx->pc = 0x1F76D4u;
}
