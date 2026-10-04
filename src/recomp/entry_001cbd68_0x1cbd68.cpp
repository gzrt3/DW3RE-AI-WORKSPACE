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

// Function: entry_001cbd68
// Address: 0x1cbd68 - 0x1cbd88
void entry_001cbd68_0x1cbd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd68_0x1cbd68");
#endif

    ctx->pc = 0x1cbd68u;

    // 0x1cbd68: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBD68u;
    {
        const bool branch_taken_0x1cbd68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd68) {
            ctx->pc = 0x1CBD9Cu;
            return;
        }
    }
    ctx->pc = 0x1CBD70u;
    // 0x1cbd70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbd74: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBD74u;
    {
        const bool branch_taken_0x1cbd74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd74) {
            ctx->pc = 0x1CBD88u;
            return;
        }
    }
    ctx->pc = 0x1CBD7Cu;
    // 0x1cbd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBD7Cu;
    {
        const bool branch_taken_0x1cbd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd7c) {
            ctx->pc = 0x1CBD88u;
            return;
        }
    }
    ctx->pc = 0x1CBD84u;
    // 0x1cbd84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x1cbd88u;
}
