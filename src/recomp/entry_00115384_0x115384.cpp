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

// Function: entry_00115384
// Address: 0x115384 - 0x1153b4
void entry_00115384_0x115384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115384_0x115384");
#endif

    ctx->pc = 0x115384u;

    // 0x115384: 0x28a10057  slti        $at, $a1, 0x57
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x115388: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x28a1005f  slti        $at, $a1, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115388) {
            ctx->pc = 0x1153B4u;
            return;
        }
    }
    ctx->pc = 0x115390u;
    // 0x115390: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115394: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x115398: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11539c: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x11539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1153a0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1153a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1153ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1153ACu;
    {
        const bool branch_taken_0x1153ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ACu;
        // 0x1153b0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ac) {
            ctx->pc = 0x115400u;
            return;
        }
    }
    ctx->pc = 0x1153B4u;
}
