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

// Function: entry_00199c10
// Address: 0x199c10 - 0x199c68
void entry_00199c10_0x199c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c10_0x199c10");
#endif

    ctx->pc = 0x199c10u;

    // 0x199c10: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x199c14: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199c18: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199c1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x199c20: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x199c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x199c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c28: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x199c28u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 2));
    // 0x199c2c: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x199C2Cu;
    {
        const bool branch_taken_0x199c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C2Cu;
        // 0x199c30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c2c) {
            ctx->pc = 0x199D6Cu;
            return;
        }
    }
    ctx->pc = 0x199C34u;
    // 0x199c34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x199c38: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x199c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x199c3c: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x199c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x199c40: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x199c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x199c44: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x199C44u;
    {
        const bool branch_taken_0x199c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x199C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C44u;
        // 0x199c48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c44) {
            ctx->pc = 0x199D0Cu;
            return;
        }
    }
    ctx->pc = 0x199C4Cu;
    // 0x199c4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199c54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199c58: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x199c5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199c60: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x199C60u;
    {
        const bool branch_taken_0x199c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C60u;
        // 0x199c64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c60) {
            ctx->pc = 0x199D1Cu;
            return;
        }
    }
    ctx->pc = 0x199C68u;
}
