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

// Function: entry_0010dba8
// Address: 0x10dba8 - 0x10dbe8
void entry_0010dba8_0x10dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dba8_0x10dba8");
#endif

    ctx->pc = 0x10dba8u;

    // 0x10dba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10dba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10dbac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x10dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10dbb0: 0x8c274900  lw          $a3, 0x4900($at)
    ctx->pc = 0x10dbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x10dbb4: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x10dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10dbb8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x10dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10dbbc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10dbc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10dbc4: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x10dbc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10dbc8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DBC8u;
    {
        const bool branch_taken_0x10dbc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBC8u;
        // 0x10dbcc: 0x3c0391a2  lui         $v1, 0x91A2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37282 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbc8) {
            ctx->pc = 0x10DBE8u;
            return;
        }
    }
    ctx->pc = 0x10DBD0u;
    // 0x10dbd0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x10dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10dbd4: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x10dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10dbd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10dbdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10dbe0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10DBE0u;
    {
        const bool branch_taken_0x10dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE0u;
        // 0x10dbe4: 0x338c0  sll         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe0) {
            ctx->pc = 0x10DC2Cu;
            return;
        }
    }
    ctx->pc = 0x10DBE8u;
}
