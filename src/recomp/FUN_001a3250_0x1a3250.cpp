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

// Function: FUN_001a3250
// Address: 0x1a3250 - 0x1a32b0
void FUN_001a3250_0x1a3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3250_0x1a3250");
#endif

    switch (ctx->pc) {
        case 0x1a3288u: goto label_1a3288;
        default: break;
    }

    ctx->pc = 0x1a3250u;

    // 0x1a3250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a325c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3264: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1a3264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1a3268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a326c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A326Cu;
    {
        const bool branch_taken_0x1a326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A326Cu;
        // 0x1a3270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a326c) {
            ctx->pc = 0x1A32A0u;
            goto label_1a32a0;
        }
    }
    ctx->pc = 0x1A3274u;
    // 0x1a3274: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a3278: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3278u;
    {
        const bool branch_taken_0x1a3278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3278u;
        // 0x1a327c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3278) {
            ctx->pc = 0x1A32A4u;
            goto label_1a32a4;
        }
    }
    ctx->pc = 0x1A3280u;
    // 0x1a3280: 0xc068cb2  jal         func_1A32C8
    ctx->pc = 0x1A3280u;
    SET_GPR_U32(ctx, 31, 0x1A3288u);
    ctx->pc = 0x1A3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3280u;
    // 0x1a3284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A32C8u, 0x1A3280u, 0x1A3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3288u;
label_1a3288:
    // 0x1a3288: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a328c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3290: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1a3294: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a3294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3298: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a3298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a329c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a329cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a32a0:
    // 0x1a32a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a32a4:
    // 0x1a32a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a32a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a32a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a32ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a32acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a32b0u;
}
