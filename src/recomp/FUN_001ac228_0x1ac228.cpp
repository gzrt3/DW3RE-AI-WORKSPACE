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

// Function: FUN_001ac228
// Address: 0x1ac228 - 0x1ac2c0
void FUN_001ac228_0x1ac228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac228_0x1ac228");
#endif

    switch (ctx->pc) {
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac2a8u: goto label_1ac2a8;
        default: break;
    }

    ctx->pc = 0x1ac228u;

    // 0x1ac228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac22c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac230: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ac234: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC234u;
    SET_GPR_U32(ctx, 31, 0x1AC23Cu);
    ctx->pc = 0x1AC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC234u;
    // 0x1ac238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC234u, 0x1AC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC23Cu;
label_1ac23c:
    // 0x1ac23c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AC23Cu;
    {
        const bool branch_taken_0x1ac23c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC23Cu;
        // 0x1ac240: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac23c) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC244u;
    // 0x1ac244: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1AC244u;
    SET_GPR_U32(ctx, 31, 0x1AC24Cu);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1AC244u, 0x1AC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC24Cu;
label_1ac24c:
    // 0x1ac24c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC24Cu;
    {
        const bool branch_taken_0x1ac24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac24c) {
            ctx->pc = 0x1AC250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC24Cu;
            // 0x1ac250: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC260u;
            goto label_1ac260;
        }
    }
    ctx->pc = 0x1AC254u;
    // 0x1ac254: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AC258u;
    {
        const bool branch_taken_0x1ac258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC258u;
        // 0x1ac25c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac258) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC260u;
label_1ac260:
    // 0x1ac260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac264: 0x24504788  addiu       $s0, $v0, 0x4788
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
    // 0x1ac268: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ac26c: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1AC26Cu;
    SET_GPR_U32(ctx, 31, 0x1AC274u);
    ctx->pc = 0x1AC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC26Cu;
    // 0x1ac270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1AC26Cu, 0x1AC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC274u;
label_1ac274:
    // 0x1ac274: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1ac278: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ac27c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ac27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac280: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x1ac280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac284: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x1ac288: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ac288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ac28c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac294: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ac298: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac29c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac2a0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC2A0u;
    SET_GPR_U32(ctx, 31, 0x1AC2A8u);
    ctx->pc = 0x1AC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A0u;
    // 0x1ac2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC2A0u, 0x1AC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC2A8u;
    {
        const bool branch_taken_0x1ac2a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac2a8) {
            ctx->pc = 0x1AC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2A8u;
            // 0x1ac2ac: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC2B0u;
    // 0x1ac2b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac2b8:
    // 0x1ac2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac2bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac2c0u;
}
