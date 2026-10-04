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

// Function: FUN_001ac2c8
// Address: 0x1ac2c8 - 0x1ac350
void FUN_001ac2c8_0x1ac2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac2c8_0x1ac2c8");
#endif

    switch (ctx->pc) {
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac334u: goto label_1ac334;
        default: break;
    }

    ctx->pc = 0x1ac2c8u;

    // 0x1ac2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac2cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ac2d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ac2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2d8: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D8u;
    // 0x1ac2dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC2D8u, 0x1AC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC2E0u;
    {
        const bool branch_taken_0x1ac2e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2e0) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC2E8u;
    // 0x1ac2e8: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1AC2E8u, 0x1AC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC2F0u;
    {
        const bool branch_taken_0x1ac2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F0u;
        // 0x1ac2f4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2f0) {
            ctx->pc = 0x1AC304u;
            goto label_1ac304;
        }
    }
    ctx->pc = 0x1AC2F8u;
    // 0x1ac2f8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac2fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC2FCu;
    {
        const bool branch_taken_0x1ac2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2fc) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC304u;
label_1ac304:
    // 0x1ac304: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac308: 0x26074780  addiu       $a3, $s0, 0x4780
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
    // 0x1ac30c: 0xae114780  sw          $s1, 0x4780($s0)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18304), GPR_U32(ctx, 17));
    // 0x1ac310: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac318: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ac31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac320: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac324: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac328: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac32c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC32Cu, 0x1AC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC334u;
    {
        const bool branch_taken_0x1ac334 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac334) {
            ctx->pc = 0x1AC338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC334u;
            // 0x1ac338: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC33Cu;
    // 0x1ac33c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac344:
    // 0x1ac344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac348: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac34c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac350u;
}
