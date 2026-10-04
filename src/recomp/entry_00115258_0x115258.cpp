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

// Function: entry_00115258
// Address: 0x115258 - 0x11528c
void entry_00115258_0x115258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115258_0x115258");
#endif

    ctx->pc = 0x115258u;

    // 0x115258: 0x84450038  lh          $a1, 0x38($v0)
    ctx->pc = 0x115258u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x11525c: 0x28a10057  slti        $at, $a1, 0x57
    ctx->pc = 0x11525cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x115260: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x115260u;
    {
        const bool branch_taken_0x115260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x28a1005f  slti        $at, $a1, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115260) {
            ctx->pc = 0x11528Cu;
            return;
        }
    }
    ctx->pc = 0x115268u;
    // 0x115268: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11526c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x11526cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x115270: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115274: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x115274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x115278: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11527c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x11527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x115280: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x115280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x115284: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115284u;
        // 0x115288: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x1152D8u;
            return;
        }
    }
    ctx->pc = 0x11528Cu;
}
