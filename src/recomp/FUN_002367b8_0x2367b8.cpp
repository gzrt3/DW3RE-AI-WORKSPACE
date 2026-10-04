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

// Function: FUN_002367b8
// Address: 0x2367b8 - 0x236808
void FUN_002367b8_0x2367b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002367b8_0x2367b8");
#endif

    switch (ctx->pc) {
        case 0x2367f0u: goto label_2367f0;
        default: break;
    }

    ctx->pc = 0x2367b8u;

    // 0x2367b8: 0x8f8282fc  lw          $v0, -0x7D04($gp)
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935292)));
    // 0x2367bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2367bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2367c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2367c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2367c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2367c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2367c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2367cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2367ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2367D0u;
    {
        const bool branch_taken_0x2367d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D0u;
        // 0x2367d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367d0) {
            ctx->pc = 0x2367E8u;
            goto label_2367e8;
        }
    }
    ctx->pc = 0x2367D8u;
    // 0x2367d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2367d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2367DCu;
    {
        const bool branch_taken_0x2367dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367DCu;
        // 0x2367e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367dc) {
            ctx->pc = 0x236808u;
            return;
        }
    }
    ctx->pc = 0x2367E4u;
    // 0x2367e4: 0x0  nop
    ctx->pc = 0x2367e4u;
    // NOP
label_2367e8:
    // 0x2367e8: 0xc069a54  jal         func_1A6950
    ctx->pc = 0x2367E8u;
    SET_GPR_U32(ctx, 31, 0x2367F0u);
    ctx->pc = 0x2367ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367E8u;
    // 0x2367ec: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6950u, 0x2367E8u, 0x2367F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367F0u;
label_2367f0:
    // 0x2367f0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2367f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2367f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2367f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2367f8: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2367fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2367fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x236800: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x236804: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x236808u;
}
