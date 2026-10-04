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

// Function: entry_0014c240
// Address: 0x14c240 - 0x14c264
void entry_0014c240_0x14c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c240_0x14c240");
#endif

    ctx->pc = 0x14c240u;

    // 0x14c240: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x14c240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x14c244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C248u;
    {
        const bool branch_taken_0x14c248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C248u;
        // 0x14c24c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c248) {
            ctx->pc = 0x14C264u;
            return;
        }
    }
    ctx->pc = 0x14C250u;
    // 0x14c250: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x14c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14c254: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C254u;
    {
        const bool branch_taken_0x14c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c254) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C25Cu;
    // 0x14c25c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C25Cu;
    {
        const bool branch_taken_0x14c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C25Cu;
        // 0x14c260: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c25c) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C264u;
}
