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

// Function: entry_001b15bc
// Address: 0x1b15bc - 0x1b1618
void entry_001b15bc_0x1b15bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15bc_0x1b15bc");
#endif

    switch (ctx->pc) {
        case 0x1b15f4u: goto label_1b15f4;
        case 0x1b1614u: goto label_1b1614;
        default: break;
    }

    ctx->pc = 0x1b15bcu;

    // 0x1b15bc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b15c0: 0x24476280  addiu       $a3, $v0, 0x6280
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b15c4: 0xac526280  sw          $s2, 0x6280($v0)
    ctx->pc = 0x1b15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 18));
    // 0x1b15c8: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1b15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
    // 0x1b15cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15d0: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1b15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
    // 0x1b15d4: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b15d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b15dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b15e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b15e4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b15e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b15e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b15ec: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B15ECu;
    SET_GPR_U32(ctx, 31, 0x1B15F4u);
    ctx->pc = 0x1B15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15ECu;
    // 0x1b15f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B15ECu, 0x1B15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15F4u;
label_1b15f4:
    // 0x1b15f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b15f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B15F8u;
    {
        const bool branch_taken_0x1b15f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15F8u;
        // 0x1b15fc: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15f8) {
            ctx->pc = 0x1B160Cu;
            goto label_1b160c;
        }
    }
    ctx->pc = 0x1B1600u;
    // 0x1b1600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1604u;
    {
        const bool branch_taken_0x1b1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1604u;
        // 0x1b1608: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1604) {
            ctx->pc = 0x1B1614u;
            goto label_1b1614;
        }
    }
    ctx->pc = 0x1B160Cu;
label_1b160c:
    // 0x1b160c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B160Cu;
    SET_GPR_U32(ctx, 31, 0x1B1614u);
    ctx->pc = 0x1B1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B160Cu;
    // 0x1b1610: 0x8e848d0c  lw          $a0, -0x72F4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B160Cu, 0x1B1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1614u;
label_1b1614:
    // 0x1b1614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1618u;
}
