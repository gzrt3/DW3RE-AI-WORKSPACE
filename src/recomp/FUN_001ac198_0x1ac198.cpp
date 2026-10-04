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

// Function: FUN_001ac198
// Address: 0x1ac198 - 0x1ac220
void FUN_001ac198_0x1ac198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac198_0x1ac198");
#endif

    switch (ctx->pc) {
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac204u: goto label_1ac204;
        default: break;
    }

    ctx->pc = 0x1ac198u;

    // 0x1ac198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ac19c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ac1a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ac1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1a8: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC1A8u;
    SET_GPR_U32(ctx, 31, 0x1AC1B0u);
    ctx->pc = 0x1AC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1A8u;
    // 0x1ac1ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC1A8u, 0x1AC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1B0u;
label_1ac1b0:
    // 0x1ac1b0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC1B0u;
    {
        const bool branch_taken_0x1ac1b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1B0u;
        // 0x1ac1b4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1b0) {
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC1B8u;
    // 0x1ac1b8: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1AC1B8u;
    SET_GPR_U32(ctx, 31, 0x1AC1C0u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1AC1B8u, 0x1AC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1C0u;
label_1ac1c0:
    // 0x1ac1c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC1C0u;
    {
        const bool branch_taken_0x1ac1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1C0u;
        // 0x1ac1c4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1c0) {
            ctx->pc = 0x1AC1D4u;
            goto label_1ac1d4;
        }
    }
    ctx->pc = 0x1AC1C8u;
    // 0x1ac1c8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac1cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC1D4u;
label_1ac1d4:
    // 0x1ac1d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac1d8: 0x26074780  addiu       $a3, $s0, 0x4780
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
    // 0x1ac1dc: 0xae114780  sw          $s1, 0x4780($s0)
    ctx->pc = 0x1ac1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18304), GPR_U32(ctx, 17));
    // 0x1ac1e0: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac1e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac1e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ac1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1f0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac1f4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac1f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac1f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac1fc: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC1FCu;
    SET_GPR_U32(ctx, 31, 0x1AC204u);
    ctx->pc = 0x1AC200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1FCu;
    // 0x1ac200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC1FCu, 0x1AC204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC204u;
label_1ac204:
    // 0x1ac204: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC204u;
    {
        const bool branch_taken_0x1ac204 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac204) {
            ctx->pc = 0x1AC208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC204u;
            // 0x1ac208: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC214u;
            goto label_1ac214;
        }
    }
    ctx->pc = 0x1AC20Cu;
    // 0x1ac20c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac210: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac214:
    // 0x1ac214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac218: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac21c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac220u;
}
