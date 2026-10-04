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

// Function: entry_00112588
// Address: 0x112588 - 0x1125bc
void entry_00112588_0x112588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112588_0x112588");
#endif

    ctx->pc = 0x112588u;

    // 0x112588: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x112588u;
    {
        const bool branch_taken_0x112588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112588u;
        // 0x11258c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112588) {
            ctx->pc = 0x1125BCu;
            return;
        }
    }
    ctx->pc = 0x112590u;
    // 0x112590: 0x28a10021  slti        $at, $a1, 0x21
    ctx->pc = 0x112590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x112594: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x112594u;
    {
        const bool branch_taken_0x112594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112594u;
        // 0x112598: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112594) {
            ctx->pc = 0x1125BCu;
            return;
        }
    }
    ctx->pc = 0x11259Cu;
    // 0x11259c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1125a0: 0x24421dc0  addiu       $v0, $v0, 0x1DC0
    ctx->pc = 0x1125a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7616));
    // 0x1125a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1125a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1125ac: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1125acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1125b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1125b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1125b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125b8: 0x0  nop
    ctx->pc = 0x1125b8u;
    // NOP
    ctx->pc = 0x1125bcu;
}
