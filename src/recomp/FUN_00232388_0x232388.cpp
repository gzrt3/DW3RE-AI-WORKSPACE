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

// Function: FUN_00232388
// Address: 0x232388 - 0x2323c0
void FUN_00232388_0x232388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00232388_0x232388");
#endif

    ctx->pc = 0x232388u;

    // 0x232388: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x232388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23238c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x23238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x232390: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x232390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x232394: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x232398: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23239c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23239cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2323a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2323a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2323a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2323a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2323ac: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2323ACu;
    {
        const bool branch_taken_0x2323ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2323ACu;
        // 0x2323b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323ac) {
            ctx->pc = 0x2323C0u;
            return;
        }
    }
    ctx->pc = 0x2323B4u;
    // 0x2323b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2323b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2323b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2323bc: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x2323bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x2323c0u;
}
