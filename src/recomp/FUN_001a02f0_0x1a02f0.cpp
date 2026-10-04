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

// Function: FUN_001a02f0
// Address: 0x1a02f0 - 0x1a0378
void FUN_001a02f0_0x1a02f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a02f0_0x1a02f0");
#endif

    switch (ctx->pc) {
        case 0x1a0330u: goto label_1a0330;
        case 0x1a035cu: goto label_1a035c;
        default: break;
    }

    ctx->pc = 0x1a02f0u;

    // 0x1a02f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a02f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a02fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a02fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0300: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A0300u;
    {
        const bool branch_taken_0x1a0300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0300u;
        // 0x1a0304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0300) {
            ctx->pc = 0x1A035Cu;
            goto label_1a035c;
        }
    }
    ctx->pc = 0x1A0308u;
    // 0x1a0308: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a030c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0310: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0310u;
    {
        const bool branch_taken_0x1a0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0310u;
        // 0x1a0314: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0310) {
            ctx->pc = 0x1A0338u;
            goto label_1a0338;
        }
    }
    ctx->pc = 0x1A0318u;
    // 0x1a0318: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0318u;
    {
        const bool branch_taken_0x1a0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0318) {
            ctx->pc = 0x1A031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0318u;
            // 0x1a031c: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0324u;
            goto label_1a0324;
        }
    }
    ctx->pc = 0x1A0320u;
    // 0x1a0320: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_1a0324:
    // 0x1a0324: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1a0324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a0328: 0xc0682c0  jal         func_1A0B00
    ctx->pc = 0x1A0328u;
    SET_GPR_U32(ctx, 31, 0x1A0330u);
    ctx->pc = 0x1A032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0328u;
    // 0x1a032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B00u, 0x1A0328u, 0x1A0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0330u;
    {
        const bool branch_taken_0x1a0330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0330u;
        // 0x1a0334: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0330) {
            ctx->pc = 0x1A0360u;
            goto label_1a0360;
        }
    }
    ctx->pc = 0x1A0338u;
label_1a0338:
    // 0x1a0338: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0338u;
    {
        const bool branch_taken_0x1a0338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0338) {
            ctx->pc = 0x1A033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0338u;
            // 0x1a033c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A034Cu;
            goto label_1a034c;
        }
    }
    ctx->pc = 0x1A0340u;
    // 0x1a0340: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1a0344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0344u;
    {
        const bool branch_taken_0x1a0344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0344u;
        // 0x1a0348: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0344) {
            ctx->pc = 0x1A0350u;
            goto label_1a0350;
        }
    }
    ctx->pc = 0x1A034Cu;
label_1a034c:
    // 0x1a034c: 0x8e0601d8  lw          $a2, 0x1D8($s0)
    ctx->pc = 0x1a034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_1a0350:
    // 0x1a0350: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a0354: 0xc068304  jal         func_1A0C10
    ctx->pc = 0x1A0354u;
    SET_GPR_U32(ctx, 31, 0x1A035Cu);
    ctx->pc = 0x1A0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0354u;
    // 0x1a0358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C10u, 0x1A0354u, 0x1A035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A035Cu;
label_1a035c:
    // 0x1a035c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_1a0360:
    // 0x1a0360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0364: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0364u;
    {
        const bool branch_taken_0x1a0364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0364u;
        // 0x1a0368: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0364) {
            ctx->pc = 0x1A0374u;
            goto label_1a0374;
        }
    }
    ctx->pc = 0x1A036Cu;
    // 0x1a036c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0370: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_1a0374:
    // 0x1a0374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0378u;
}
