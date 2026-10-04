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

// Function: FUN_00143fa0
// Address: 0x143fa0 - 0x143ff8
void FUN_00143fa0_0x143fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143fa0_0x143fa0");
#endif

    ctx->pc = 0x143fa0u;

    // 0x143fa0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x143fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x143fa4: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x143fa8: 0x9026490c  lbu         $a2, 0x490C($at)
    ctx->pc = 0x143fa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x143fac: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143FACu;
    {
        const bool branch_taken_0x143fac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x143FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FACu;
        // 0x143fb0: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fac) {
            ctx->pc = 0x143FCCu;
            goto label_143fcc;
        }
    }
    ctx->pc = 0x143FB4u;
    // 0x143fb4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143fb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143FB8u;
    {
        const bool branch_taken_0x143fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fb8) {
            ctx->pc = 0x143FE0u;
            goto label_143fe0;
        }
    }
    ctx->pc = 0x143FC0u;
    // 0x143fc0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x143FC0u;
    {
        const bool branch_taken_0x143fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fc0) {
            ctx->pc = 0x144054u;
            return;
        }
    }
    ctx->pc = 0x143FC8u;
    // 0x143fc8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x143fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_143fcc:
    // 0x143fcc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143FCCu;
    {
        const bool branch_taken_0x143fcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143fcc) {
            ctx->pc = 0x143FE0u;
            goto label_143fe0;
        }
    }
    ctx->pc = 0x143FD4u;
    // 0x143fd4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143fd8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x143FD8u;
    {
        const bool branch_taken_0x143fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143fd8) {
            ctx->pc = 0x144054u;
            return;
        }
    }
    ctx->pc = 0x143FE0u;
label_143fe0:
    // 0x143fe0: 0x8483021c  lh          $v1, 0x21C($a0)
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143fe4: 0xa483021e  sh          $v1, 0x21E($a0)
    ctx->pc = 0x143fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x143fe8: 0x8486021c  lh          $a2, 0x21C($a0)
    ctx->pc = 0x143fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143fec: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x143fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x143ff0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x143ff4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x143ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x143ff8u;
}
