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

// Function: entry_001ced04
// Address: 0x1ced04 - 0x1ced50
void entry_001ced04_0x1ced04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ced04_0x1ced04");
#endif

    ctx->pc = 0x1ced04u;

    // 0x1ced04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ced04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ced08: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ced10: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ced10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1ced14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CED14u;
    {
        const bool branch_taken_0x1ced14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED14u;
        // 0x1ced18: 0xa4430090  sh          $v1, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced14) {
            ctx->pc = 0x1CED50u;
            return;
        }
    }
    ctx->pc = 0x1CED1Cu;
    // 0x1ced1c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1ced20: 0x8423a050  lh          $v1, -0x5FB0($at)
    ctx->pc = 0x1ced20u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x28A050u));
    // 0x1ced24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced28: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1ced2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ced30: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1ced34: 0xa4430080  sh          $v1, 0x80($v0)
    ctx->pc = 0x1ced34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced38: 0x8423a050  lh          $v1, -0x5FB0($at)
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294942800)));
    // 0x1ced3c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ced40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ced48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ced48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1ced4c: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x1ced4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ced50u;
}
