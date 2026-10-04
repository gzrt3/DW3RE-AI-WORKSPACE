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

// Function: FUN_001c5f20
// Address: 0x1c5f20 - 0x1c5f90
void FUN_001c5f20_0x1c5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5f20_0x1c5f20");
#endif

    switch (ctx->pc) {
        case 0x1c5f3cu: goto label_1c5f3c;
        default: break;
    }

    ctx->pc = 0x1c5f20u;

    // 0x1c5f20: 0x908302e0  lbu         $v1, 0x2E0($a0)
    ctx->pc = 0x1c5f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x1c5f24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c5f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c5f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f2c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1c5f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1c5f30: 0xa08302e0  sb          $v1, 0x2E0($a0)
    ctx->pc = 0x1c5f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5f34: 0x2405026c  addiu       $a1, $zero, 0x26C
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x1c5f38: 0x2406027c  addiu       $a2, $zero, 0x27C
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
label_1c5f3c:
    // 0x1c5f3c: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x1c5f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1c5f40: 0xdd430038  ld          $v1, 0x38($t2)
    ctx->pc = 0x1c5f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 56)));
    // 0x1c5f44: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1c5f48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F48u;
    {
        const bool branch_taken_0x1c5f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f48) {
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5F50u;
    // 0x1c5f50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F50u;
        // 0x1c5f54: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F5Cu;
            goto label_1c5f5c;
        }
    }
    ctx->pc = 0x1C5F58u;
label_1c5f58:
    // 0x1c5f58: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1c5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_1c5f5c:
    // 0x1c5f5c: 0x0  nop
    ctx->pc = 0x1c5f5cu;
    // NOP
    // 0x1c5f60: 0xdd430158  ld          $v1, 0x158($t2)
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 344)));
    // 0x1c5f64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F64u;
    {
        const bool branch_taken_0x1c5f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F64u;
        // 0x1c5f68: 0x25470150  addiu       $a3, $t2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f64) {
            ctx->pc = 0x1C5F74u;
            goto label_1c5f74;
        }
    }
    ctx->pc = 0x1C5F6Cu;
    // 0x1c5f6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F6Cu;
    {
        const bool branch_taken_0x1c5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F6Cu;
        // 0x1c5f70: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f6c) {
            ctx->pc = 0x1C5F7Cu;
            goto label_1c5f7c;
        }
    }
    ctx->pc = 0x1C5F74u;
label_1c5f74:
    // 0x1c5f74: 0x0  nop
    ctx->pc = 0x1c5f74u;
    // NOP
    // 0x1c5f78: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1c5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_1c5f7c:
    // 0x1c5f7c: 0x0  nop
    ctx->pc = 0x1c5f7cu;
    // NOP
    // 0x1c5f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c5f84: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c5f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c5f88: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C5F88u;
    {
        const bool branch_taken_0x1c5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f88) {
            ctx->pc = 0x1C5F3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5f3c;
        }
    }
    ctx->pc = 0x1C5F90u;
}
