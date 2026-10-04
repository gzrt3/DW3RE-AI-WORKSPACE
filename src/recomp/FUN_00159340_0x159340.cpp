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

// Function: FUN_00159340
// Address: 0x159340 - 0x1593a8
void FUN_00159340_0x159340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159340_0x159340");
#endif

    switch (ctx->pc) {
        case 0x159374u: goto label_159374;
        default: break;
    }

    ctx->pc = 0x159340u;

    // 0x159340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x159348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15934c: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x15934cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x159350: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x159350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x159354: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x159358: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x159358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x15935c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x15935cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x159360: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x159360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159364: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x159364u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x159368: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x159368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x15936c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15936cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x159370: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_159374:
    // 0x159374: 0x1071804  sllv        $v1, $a3, $t0
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x159378: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x159378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15937c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15937Cu;
    {
        const bool branch_taken_0x15937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15937c) {
            ctx->pc = 0x159394u;
            goto label_159394;
        }
    }
    ctx->pc = 0x159384u;
    // 0x159384: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x159384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x159388: 0x84630232  lh          $v1, 0x232($v1)
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x15938c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159390: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x159390u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_159394:
    // 0x159394: 0x0  nop
    ctx->pc = 0x159394u;
    // NOP
    // 0x159398: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15939c: 0x2903000c  slti        $v1, $t0, 0xC
    ctx->pc = 0x15939cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1593a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593A0u;
        // 0x1593a4: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x159374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159374;
        }
    }
    ctx->pc = 0x1593A8u;
}
