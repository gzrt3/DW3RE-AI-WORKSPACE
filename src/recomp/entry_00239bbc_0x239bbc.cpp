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

// Function: entry_00239bbc
// Address: 0x239bbc - 0x239bf0
void entry_00239bbc_0x239bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239bbc_0x239bbc");
#endif

    ctx->pc = 0x239bbcu;

    // 0x239bbc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x239bc0: 0x8fc50c58  lw          $a1, 0xC58($fp)
    ctx->pc = 0x239bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3160)));
    // 0x239bc4: 0x24630c48  addiu       $v1, $v1, 0xC48
    ctx->pc = 0x239bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3144));
    // 0x239bc8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239bc8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x290C48u));
    // 0x239bcc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x239bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239BD0u;
    {
        const bool branch_taken_0x239bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239bd0) {
            ctx->pc = 0x239BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BD0u;
            // 0x239bd4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BD8u;
            goto label_239bd8;
        }
    }
    ctx->pc = 0x239BD8u;
label_239bd8:
    // 0x239bd8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x239bdc: 0x24630c50  addiu       $v1, $v1, 0xC50
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
    // 0x239be0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x290C50u));
    // 0x239be4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x239be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239BE8u;
    {
        const bool branch_taken_0x239be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239be8) {
            ctx->pc = 0x239BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BE8u;
            // 0x239bec: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BF0u;
            return;
        }
    }
    ctx->pc = 0x239BF0u;
}
