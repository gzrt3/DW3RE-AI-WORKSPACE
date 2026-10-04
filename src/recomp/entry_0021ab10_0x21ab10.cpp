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

// Function: entry_0021ab10
// Address: 0x21ab10 - 0x21ab48
void entry_0021ab10_0x21ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab10_0x21ab10");
#endif

    ctx->pc = 0x21ab10u;

    // 0x21ab10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ab14: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ab18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21AB18u;
    {
        const bool branch_taken_0x21ab18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ab18) {
            ctx->pc = 0x21AB50u;
            return;
        }
    }
    ctx->pc = 0x21AB20u;
    // 0x21ab20: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21ab24: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ab28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AB28u;
    {
        const bool branch_taken_0x21ab28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab28) {
            ctx->pc = 0x21AB50u;
            return;
        }
    }
    ctx->pc = 0x21AB30u;
    // 0x21ab30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21ab34: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ab38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AB38u;
    {
        const bool branch_taken_0x21ab38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab38) {
            ctx->pc = 0x21AB48u;
            return;
        }
    }
    ctx->pc = 0x21AB40u;
    // 0x21ab40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AB40u;
    {
        const bool branch_taken_0x21ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB40u;
        // 0x21ab44: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab40) {
            ctx->pc = 0x21AB50u;
            return;
        }
    }
    ctx->pc = 0x21AB48u;
}
