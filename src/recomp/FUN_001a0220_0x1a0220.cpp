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

// Function: FUN_001a0220
// Address: 0x1a0220 - 0x1a02e4
void FUN_001a0220_0x1a0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0220_0x1a0220");
#endif

    switch (ctx->pc) {
        case 0x1a025cu: goto label_1a025c;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c4u: goto label_1a02c4;
        default: break;
    }

    ctx->pc = 0x1a0220u;

    // 0x1a0220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a022c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0234: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0238: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a023c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A023Cu;
    {
        const bool branch_taken_0x1a023c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A023Cu;
        // 0x1a0240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a023c) {
            ctx->pc = 0x1A0268u;
            goto label_1a0268;
        }
    }
    ctx->pc = 0x1A0244u;
    // 0x1a0244: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1a0248: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0248u;
    {
        const bool branch_taken_0x1a0248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0248u;
        // 0x1a024c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0248) {
            ctx->pc = 0x1A0268u;
            goto label_1a0268;
        }
    }
    ctx->pc = 0x1A0250u;
    // 0x1a0250: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a0254: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A0254u;
    SET_GPR_U32(ctx, 31, 0x1A025Cu);
    ctx->pc = 0x1A0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0254u;
    // 0x1a0258: 0x24a5a200  addiu       $a1, $a1, -0x5E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A0254u, 0x1A025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A025Cu;
label_1a025c:
    // 0x1a025c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1a0260: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a0264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0268:
    // 0x1a0268: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A0270u;
    // 0x1a0270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0270u;
    {
        const bool branch_taken_0x1a0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0270) {
            ctx->pc = 0x1A0288u;
            goto label_1a0288;
        }
    }
    ctx->pc = 0x1A0278u;
    // 0x1a0278: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0278u;
    {
        const bool branch_taken_0x1a0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0278u;
        // 0x1a027c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0278) {
            ctx->pc = 0x1A029Cu;
            goto label_1a029c;
        }
    }
    ctx->pc = 0x1A0280u;
    // 0x1a0280: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0280u;
    {
        const bool branch_taken_0x1a0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0280u;
        // 0x1a0284: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0280) {
            ctx->pc = 0x1A02B0u;
            goto label_1a02b0;
        }
    }
    ctx->pc = 0x1A0288u;
label_1a0288:
    // 0x1a0288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a028c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A028Cu;
    {
        const bool branch_taken_0x1a028c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A028Cu;
        // 0x1a0290: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a028c) {
            ctx->pc = 0x1A02ACu;
            goto label_1a02ac;
        }
    }
    ctx->pc = 0x1A0294u;
    // 0x1a0294: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0294u;
    {
        const bool branch_taken_0x1a0294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0294u;
        // 0x1a0298: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0294) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A029Cu;
label_1a029c:
    // 0x1a029c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A029Cu;
    {
        const bool branch_taken_0x1a029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A029Cu;
        // 0x1a02a0: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a029c) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A02A4u;
label_1a02a4:
    // 0x1a02a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A02A4u;
    {
        const bool branch_taken_0x1a02a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02A4u;
        // 0x1a02a8: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02a4) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A02ACu;
label_1a02ac:
    // 0x1a02ac: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_1a02b0:
    // 0x1a02b0: 0x24a5a220  addiu       $a1, $a1, -0x5DE0
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943264));
    // 0x1a02b4: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A02B4u;
    SET_GPR_U32(ctx, 31, 0x1A02BCu);
    ctx->pc = 0x1A02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02B4u;
    // 0x1a02b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A02B4u, 0x1A02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02BCu;
label_1a02bc:
    // 0x1a02bc: 0xc067952  jal         func_19E548
    ctx->pc = 0x1A02BCu;
    SET_GPR_U32(ctx, 31, 0x1A02C4u);
    ctx->pc = 0x1A02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02BCu;
    // 0x1a02c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E548u, 0x1A02BCu, 0x1A02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A02C4u;
label_1a02c4:
    // 0x1a02c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A02C8u;
    {
        const bool branch_taken_0x1a02c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02c8) {
            ctx->pc = 0x1A02D4u;
            goto label_1a02d4;
        }
    }
    ctx->pc = 0x1A02D0u;
    // 0x1a02d0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1a02d4:
    // 0x1a02d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a02d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a02d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a02dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a02e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a02e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a02e4u;
}
