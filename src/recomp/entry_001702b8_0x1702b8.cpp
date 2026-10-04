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

// Function: entry_001702b8
// Address: 0x1702b8 - 0x170300
void entry_001702b8_0x1702b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001702b8_0x1702b8");
#endif

    ctx->pc = 0x1702b8u;

    // 0x1702b8: 0x4e5824  and         $t3, $v0, $t6
    ctx->pc = 0x1702b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1702bc: 0x1160001d  beqz        $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1702BCu;
    {
        const bool branch_taken_0x1702bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702BCu;
        // 0x1702c0: 0xc77821  addu        $t7, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702bc) {
            ctx->pc = 0x170334u;
            return;
        }
    }
    ctx->pc = 0x1702C4u;
    // 0x1702c4: 0x8f8c8740  lw          $t4, -0x78C0($gp)
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x1702c8: 0x91eb0100  lbu         $t3, 0x100($t7)
    ctx->pc = 0x1702c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 256)));
    // 0x1702cc: 0x16c082b  sltu        $at, $t3, $t4
    ctx->pc = 0x1702ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1702d0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1702D0u;
    {
        const bool branch_taken_0x1702d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702D0u;
        // 0x1702d4: 0x25ed0100  addiu       $t5, $t7, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702d0) {
            ctx->pc = 0x170300u;
            return;
        }
    }
    ctx->pc = 0x1702D8u;
    // 0x1702d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1702dc: 0xa1ab0000  sb          $t3, 0x0($t5)
    ctx->pc = 0x1702dcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1702e0: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1702e4: 0x16c582b  sltu        $t3, $t3, $t4
    ctx->pc = 0x1702e4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1702e8: 0x15600016  bnez        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1702E8u;
    {
        const bool branch_taken_0x1702e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1702e8) {
            ctx->pc = 0x170344u;
            return;
        }
    }
    ctx->pc = 0x1702F0u;
    // 0x1702f0: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x1702f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x1702f4: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1702f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1702F8u;
    {
        const bool branch_taken_0x1702f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702F8u;
        // 0x1702fc: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702f8) {
            ctx->pc = 0x170344u;
            return;
        }
    }
    ctx->pc = 0x170300u;
}
