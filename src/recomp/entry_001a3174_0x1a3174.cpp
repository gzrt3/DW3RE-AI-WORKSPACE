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

// Function: entry_001a3174
// Address: 0x1a3174 - 0x1a3250
void entry_001a3174_0x1a3174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3174_0x1a3174");
#endif

    switch (ctx->pc) {
        case 0x1a317cu: goto label_1a317c;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31dcu: goto label_1a31dc;
        case 0x1a31f0u: goto label_1a31f0;
        case 0x1a3228u: goto label_1a3228;
        default: break;
    }

    ctx->pc = 0x1a3174u;

    // 0x1a3174: 0xc067e60  jal         func_19F980
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F980u, 0x1A3174u, 0x1A317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A317Cu;
label_1a317c:
    // 0x1a317c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A317Cu;
    {
        const bool branch_taken_0x1a317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a317c) {
            ctx->pc = 0x1A3180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A317Cu;
            // 0x1a3180: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3198u;
            goto label_1a3198;
        }
    }
    ctx->pc = 0x1A3184u;
    // 0x1a3184: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x1A3184u;
    SET_GPR_U32(ctx, 31, 0x1A318Cu);
    ctx->pc = 0x1A3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3184u;
    // 0x1a3188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x1A3184u, 0x1A318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A318Cu;
label_1a318c:
    // 0x1a318c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1a318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1a3190: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A3190u;
    {
        const bool branch_taken_0x1a3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3190u;
        // 0x1a3194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3190) {
            ctx->pc = 0x1A322Cu;
            goto label_1a322c;
        }
    }
    ctx->pc = 0x1A3198u;
label_1a3198:
    // 0x1a3198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a319c: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1a31a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a31a4: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1a31a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1a31a8: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A31A8u;
    {
        const bool branch_taken_0x1a31a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A8u;
        // 0x1a31ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31a8) {
            ctx->pc = 0x1A322Cu;
            goto label_1a322c;
        }
    }
    ctx->pc = 0x1A31B0u;
    // 0x1a31b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a31b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31b4: 0xc0680e0  jal         func_1A0380
    ctx->pc = 0x1A31B4u;
    SET_GPR_U32(ctx, 31, 0x1A31BCu);
    ctx->pc = 0x1A31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31B4u;
    // 0x1a31b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0380u, 0x1A31B4u, 0x1A31BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31BCu;
label_1a31bc:
    // 0x1a31bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a31bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31c0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1a31c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1a31c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A31C4u;
    {
        const bool branch_taken_0x1a31c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C4u;
        // 0x1a31c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31c4) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A31CCu;
    // 0x1a31cc: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A31CCu;
    {
        const bool branch_taken_0x1a31cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31cc) {
            ctx->pc = 0x1A31D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A31CCu;
            // 0x1a31d0: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A31E4u;
            goto label_1a31e4;
        }
    }
    ctx->pc = 0x1A31D4u;
    // 0x1a31d4: 0xc068088  jal         func_1A0220
    ctx->pc = 0x1A31D4u;
    SET_GPR_U32(ctx, 31, 0x1A31DCu);
    ctx->pc = 0x1A31D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31D4u;
    // 0x1a31d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0220u, 0x1A31D4u, 0x1A31DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31DCu;
label_1a31dc:
    // 0x1a31dc: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1a31dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
label_1a31e0:
    // 0x1a31e0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a31e4:
    // 0x1a31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31e8: 0xc0680bc  jal         func_1A02F0
    ctx->pc = 0x1A31E8u;
    SET_GPR_U32(ctx, 31, 0x1A31F0u);
    ctx->pc = 0x1A31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31E8u;
    // 0x1a31ec: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02F0u, 0x1A31E8u, 0x1A31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31F0u;
label_1a31f0:
    // 0x1a31f0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a31f4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1a31f8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1a31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1a31fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3200: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a3200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1a3204: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1a3208: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a320c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a3210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a3214: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x1a3214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
    // 0x1a3218: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A3228u;
            goto label_1a3228;
        }
    }
    ctx->pc = 0x1A3220u;
    // 0x1a3220: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x1A3220u;
    SET_GPR_U32(ctx, 31, 0x1A3228u);
    ctx->pc = 0x1A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3220u;
    // 0x1a3224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x1A3220u, 0x1A3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3228u;
label_1a3228:
    // 0x1a3228: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a3228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a322c:
    // 0x1a322c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3230: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3234: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a323c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a323cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3244: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3244u;
        // 0x1a3248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A324Cu;
    // 0x1a324c: 0x0  nop
    ctx->pc = 0x1a324cu;
    // NOP
    ctx->pc = 0x1a3250u;
}
