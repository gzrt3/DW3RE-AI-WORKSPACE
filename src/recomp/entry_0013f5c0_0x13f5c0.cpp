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

// Function: entry_0013f5c0
// Address: 0x13f5c0 - 0x13f60c
void entry_0013f5c0_0x13f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f5c0_0x13f5c0");
#endif

    ctx->pc = 0x13f5c0u;

    // 0x13f5c0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x13f5c4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F5C4u;
    {
        const bool branch_taken_0x13f5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5c4) {
            ctx->pc = 0x13F618u;
            return;
        }
    }
    ctx->pc = 0x13F5CCu;
    // 0x13f5cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x13f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13f5d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13f5d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f5d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f5dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13F5DCu;
    {
        const bool branch_taken_0x13f5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5DCu;
        // 0x13f5e0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5dc) {
            ctx->pc = 0x13F618u;
            return;
        }
    }
    ctx->pc = 0x13F5E4u;
    // 0x13f5e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f5e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F5E8u;
    {
        const bool branch_taken_0x13f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f5e8) {
            ctx->pc = 0x13F60Cu;
            return;
        }
    }
    ctx->pc = 0x13F5F0u;
    // 0x13f5f0: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x13f5f4: 0xa4a3019c  sh          $v1, 0x19C($a1)
    ctx->pc = 0x13f5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x13f5f8: 0x8603019e  lh          $v1, 0x19E($s0)
    ctx->pc = 0x13f5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x13f5fc: 0xa4a3019e  sh          $v1, 0x19E($a1)
    ctx->pc = 0x13f5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 414), (uint16_t)GPR_U32(ctx, 3));
    // 0x13f600: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x13f600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x13f604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F604u;
    {
        const bool branch_taken_0x13f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F604u;
        // 0x13f608: 0xaca30194  sw          $v1, 0x194($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f604) {
            ctx->pc = 0x13F618u;
            return;
        }
    }
    ctx->pc = 0x13F60Cu;
}
