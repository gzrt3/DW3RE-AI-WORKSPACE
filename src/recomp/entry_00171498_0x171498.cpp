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

// Function: entry_00171498
// Address: 0x171498 - 0x1714c4
void entry_00171498_0x171498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171498_0x171498");
#endif

    ctx->pc = 0x171498u;

    // 0x171498: 0x94871130  lhu         $a3, 0x1130($a0)
    ctx->pc = 0x171498u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17149c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1714a0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1714a4: 0x29860040  slti        $a2, $t4, 0x40
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1714a8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1714ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x1714acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x1714b0: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1714B0u;
    {
        const bool branch_taken_0x1714b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714b0) {
            ctx->pc = 0x171424u;
            return;
        }
    }
    ctx->pc = 0x1714B8u;
    // 0x1714b8: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1714bc: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1714c0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1714c4u;
}
