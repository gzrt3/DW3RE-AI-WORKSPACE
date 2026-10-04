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

// Function: entry_001b12d0
// Address: 0x1b12d0 - 0x1b1328
void entry_001b12d0_0x1b12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12d0_0x1b12d0");
#endif

    switch (ctx->pc) {
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1324u: goto label_1b1324;
        default: break;
    }

    ctx->pc = 0x1b12d0u;

    // 0x1b12d0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1b12d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1b12d4: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b12d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b12d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12dc: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1b12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1b12e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b12e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b12e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b12e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12ec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b12f0: 0x266977c0  addiu       $t1, $s3, 0x77C0
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 30656));
    // 0x1b12f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b12f8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B12F8u;
    SET_GPR_U32(ctx, 31, 0x1B1300u);
    ctx->pc = 0x1B12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12F8u;
    // 0x1b12fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B12F8u, 0x1B1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1300u;
label_1b1300:
    // 0x1b1300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1304: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B130Cu;
    // 0x1b130c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B130Cu;
    SET_GPR_U32(ctx, 31, 0x1B1314u);
    ctx->pc = 0x1B1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B130Cu;
    // 0x1b1310: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B130Cu, 0x1B1314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1314u;
label_1b1314:
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            return;
        }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B131Cu;
    SET_GPR_U32(ctx, 31, 0x1B1324u);
    ctx->pc = 0x1B1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B131Cu;
    // 0x1b1320: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B131Cu, 0x1B1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1324u;
label_1b1324:
    // 0x1b1324: 0x8e6277c0  lw          $v0, 0x77C0($s3)
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 30656)));
    ctx->pc = 0x1b1328u;
}
