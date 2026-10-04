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

// Function: FUN_001124d0
// Address: 0x1124d0 - 0x11251c
void FUN_001124d0_0x1124d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001124d0_0x1124d0");
#endif

    ctx->pc = 0x1124d0u;

    // 0x1124d0: 0x28a30021  slti        $v1, $a1, 0x21
    ctx->pc = 0x1124d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1124d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1124D4u;
    {
        const bool branch_taken_0x1124d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1124D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D4u;
        // 0x1124d8: 0x43940  sll         $a3, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124d4) {
            ctx->pc = 0x112500u;
            goto label_112500;
        }
    }
    ctx->pc = 0x1124DCu;
    // 0x1124dc: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1124dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1124e0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1124e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1124e4: 0x24631faf  addiu       $v1, $v1, 0x1FAF
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8111));
    // 0x1124e8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1124e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1124ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1124ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1124f0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1124f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1124f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1124f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1124f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1124F8u;
    {
        const bool branch_taken_0x1124f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124F8u;
        // 0x1124fc: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124f8) {
            ctx->pc = 0x11251Cu;
            return;
        }
    }
    ctx->pc = 0x112500u;
label_112500:
    // 0x112500: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x112504: 0x24631dc0  addiu       $v1, $v1, 0x1DC0
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7616));
    // 0x112508: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x112508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11250c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112510: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x112514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x112514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x112518: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x112518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x11251cu;
}
