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

// Function: FUN_001c02d0
// Address: 0x1c02d0 - 0x1c0348
void FUN_001c02d0_0x1c02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c02d0_0x1c02d0");
#endif

    switch (ctx->pc) {
        case 0x1c0318u: goto label_1c0318;
        default: break;
    }

    ctx->pc = 0x1c02d0u;

    // 0x1c02d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c02d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c02d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02dc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c02dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c02e0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1c02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1c02e4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c02e8: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464AACu));
    // 0x1c02ec: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1c02f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c02f4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1c02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1c02f8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c02fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c02fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0300: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0300u;
    {
        const bool branch_taken_0x1c0300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0300u;
        // 0x1c0304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0300) {
            ctx->pc = 0x1C0310u;
            goto label_1c0310;
        }
    }
    ctx->pc = 0x1C0308u;
    // 0x1c0308: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C0308u;
    {
        const bool branch_taken_0x1c0308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0308) {
            ctx->pc = 0x1C0348u;
            return;
        }
    }
    ctx->pc = 0x1C0310u;
label_1c0310:
    // 0x1c0310: 0xc0700d4  jal         func_1C0350
    ctx->pc = 0x1C0310u;
    SET_GPR_U32(ctx, 31, 0x1C0318u);
    ctx->pc = 0x1C0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0310u;
    // 0x1c0314: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0350u, 0x1C0310u, 0x1C0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0318u;
label_1c0318:
    // 0x1c0318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0318u;
    {
        const bool branch_taken_0x1c0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0318u;
        // 0x1c031c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0318) {
            ctx->pc = 0x1C0328u;
            goto label_1c0328;
        }
    }
    ctx->pc = 0x1C0320u;
    // 0x1c0320: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0320u;
    {
        const bool branch_taken_0x1c0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0320) {
            ctx->pc = 0x1C0344u;
            goto label_1c0344;
        }
    }
    ctx->pc = 0x1C0328u;
label_1c0328:
    // 0x1c0328: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c032c: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
    // 0x1c0330: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c0334: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0338: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x464AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AACu, _value); } while (0);
    // 0x1c033c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0340: 0x0  nop
    ctx->pc = 0x1c0340u;
    // NOP
label_1c0344:
    // 0x1c0344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c0348u;
}
