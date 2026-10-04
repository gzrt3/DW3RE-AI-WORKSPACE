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

// Function: entry_00164c00
// Address: 0x164c00 - 0x164c14
void entry_00164c00_0x164c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c00_0x164c00");
#endif

    ctx->pc = 0x164c00u;

    // 0x164c00: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164C00u;
    {
        const bool branch_taken_0x164c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x164c00) {
            ctx->pc = 0x164C14u;
            return;
        }
    }
    ctx->pc = 0x164C08u;
    // 0x164c08: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164c0c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x164c10: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164c10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
    ctx->pc = 0x164c14u;
}
