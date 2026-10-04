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

// Function: entry_00214920
// Address: 0x214920 - 0x21494c
void entry_00214920_0x214920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214920_0x214920");
#endif

    ctx->pc = 0x214920u;

    // 0x214920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214924: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214924u;
    {
        const bool branch_taken_0x214924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214924) {
            ctx->pc = 0x21494Cu;
            return;
        }
    }
    ctx->pc = 0x21492Cu;
    // 0x21492c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x214930: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x214930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x214934: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x214934u;
    {
        const bool branch_taken_0x214934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214934) {
            ctx->pc = 0x2149CCu;
            return;
        }
    }
    ctx->pc = 0x21493Cu;
    // 0x21493c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214940: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x214940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214944: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214944) {
            ctx->pc = 0x2149C8u;
            return;
        }
    }
    ctx->pc = 0x21494Cu;
}
