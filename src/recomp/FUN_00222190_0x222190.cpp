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

// Function: FUN_00222190
// Address: 0x222190 - 0x222518
void FUN_00222190_0x222190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00222190_0x222190");
#endif

    switch (ctx->pc) {
        case 0x22220cu: goto label_22220c;
        case 0x222250u: goto label_222250;
        case 0x22227cu: goto label_22227c;
        case 0x2222bcu: goto label_2222bc;
        case 0x2223acu: goto label_2223ac;
        case 0x2223f8u: goto label_2223f8;
        case 0x222434u: goto label_222434;
        default: break;
    }

    ctx->pc = 0x222190u;

    // 0x222190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22219c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2221a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2221a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221a4: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x2221a8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2221A8u;
    {
        const bool branch_taken_0x2221a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221A8u;
        // 0x2221ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221a8) {
            ctx->pc = 0x222308u;
            goto label_222308;
        }
    }
    ctx->pc = 0x2221B0u;
    // 0x2221b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2221b4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x2221b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2221b8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x2221b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x2221bc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2221BCu;
    {
        const bool branch_taken_0x2221bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2221C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221BCu;
        // 0x2221c0: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221bc) {
            ctx->pc = 0x2221E4u;
            goto label_2221e4;
        }
    }
    ctx->pc = 0x2221C4u;
    // 0x2221c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2221c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2221c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2221cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2221ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2221d0: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2221D0u;
    {
        const bool branch_taken_0x2221d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2221D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221D0u;
        // 0x2221d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221d0) {
            ctx->pc = 0x222300u;
            goto label_222300;
        }
    }
    ctx->pc = 0x2221D8u;
    // 0x2221d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2221d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2221dc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2221DCu;
    {
        const bool branch_taken_0x2221dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2221E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2221DCu;
        // 0x2221e0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2221dc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2221E4u;
label_2221e4:
    // 0x2221e4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2221E4u;
    {
        const bool branch_taken_0x2221e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221e4) {
            ctx->pc = 0x222224u;
            goto label_222224;
        }
    }
    ctx->pc = 0x2221ECu;
    // 0x2221ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2221ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2221f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2221f4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2221f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2221f8: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2221F8u;
    {
        const bool branch_taken_0x2221f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2221f8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222200u;
    // 0x222200: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222204: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222204u;
    SET_GPR_U32(ctx, 31, 0x22220Cu);
    ctx->pc = 0x222208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222204u;
    // 0x222208: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222204u, 0x22220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22220Cu;
label_22220c:
    // 0x22220c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x22220Cu;
    {
        const bool branch_taken_0x22220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22220c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222214u;
    // 0x222214: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222218: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22221c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x22221Cu;
    {
        const bool branch_taken_0x22221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22221Cu;
        // 0x222220: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22221c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222224u;
label_222224:
    // 0x222224: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x222228: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x222228u;
    {
        const bool branch_taken_0x222228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222228u;
        // 0x22222c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222228) {
            ctx->pc = 0x222294u;
            goto label_222294;
        }
    }
    ctx->pc = 0x222230u;
    // 0x222230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222234: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222238: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22223c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22223Cu;
    {
        const bool branch_taken_0x22223c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22223Cu;
        // 0x222240: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22223c) {
            ctx->pc = 0x222268u;
            goto label_222268;
        }
    }
    ctx->pc = 0x222244u;
    // 0x222244: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222248: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222248u;
    SET_GPR_U32(ctx, 31, 0x222250u);
    ctx->pc = 0x22224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222248u;
    // 0x22224c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222248u, 0x222250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222250u;
label_222250:
    // 0x222250: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x222250u;
    {
        const bool branch_taken_0x222250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222250) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222258u;
    // 0x222258: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22225c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222260: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x222260u;
    {
        const bool branch_taken_0x222260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222260u;
        // 0x222264: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222260) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222268u;
label_222268:
    // 0x222268: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x222268u;
    {
        const bool branch_taken_0x222268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222268) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222270u;
    // 0x222270: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222274: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222274u;
    SET_GPR_U32(ctx, 31, 0x22227Cu);
    ctx->pc = 0x222278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222274u;
    // 0x222278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222274u, 0x22227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22227Cu;
label_22227c:
    // 0x22227c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22227Cu;
    {
        const bool branch_taken_0x22227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22227c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222284u;
    // 0x222284: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x222288: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22228c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22228Cu;
    {
        const bool branch_taken_0x22228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22228Cu;
        // 0x222290: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22228c) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x222294u;
label_222294:
    // 0x222294: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222294u;
    {
        const bool branch_taken_0x222294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222294) {
            ctx->pc = 0x2222D4u;
            goto label_2222d4;
        }
    }
    ctx->pc = 0x22229Cu;
    // 0x22229c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2222a0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2222a4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2222a8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2222A8u;
    {
        const bool branch_taken_0x2222a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222a8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222B0u;
    // 0x2222b0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x2222b4: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2222B4u;
    SET_GPR_U32(ctx, 31, 0x2222BCu);
    ctx->pc = 0x2222B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2222B4u;
    // 0x2222b8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2222B4u, 0x2222BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222BCu;
label_2222bc:
    // 0x2222bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2222BCu;
    {
        const bool branch_taken_0x2222bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2222bc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222C4u;
    // 0x2222c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2222c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2222cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2222CCu;
    {
        const bool branch_taken_0x2222cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222CCu;
        // 0x2222d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222cc) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222D4u;
label_2222d4:
    // 0x2222d4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x2222d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2222d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2222D8u;
    {
        const bool branch_taken_0x2222d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222d8) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222E0u;
    // 0x2222e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2222e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2222e4: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x2222e8: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2222e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2222ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2222ECu;
    {
        const bool branch_taken_0x2222ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2222ec) {
            ctx->pc = 0x2222FCu;
            goto label_2222fc;
        }
    }
    ctx->pc = 0x2222F4u;
    // 0x2222f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2222f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2222f8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2222f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2222fc:
    // 0x2222fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2222fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222300:
    // 0x222300: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x222300u;
    {
        const bool branch_taken_0x222300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222300u;
        // 0x222304: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222300) {
            ctx->pc = 0x222518u;
            return;
        }
    }
    ctx->pc = 0x222308u;
label_222308:
    // 0x222308: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22230c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x222310: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x222310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x222314: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x222314u;
    {
        const bool branch_taken_0x222314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222314u;
        // 0x222318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222314) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x22231Cu;
    // 0x22231c: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x22231Cu;
    {
        const bool branch_taken_0x22231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22231c) {
            ctx->pc = 0x2224ECu;
            goto label_2224ec;
        }
    }
    ctx->pc = 0x222324u;
    // 0x222324: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x222324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x222328: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x222328u;
    {
        const bool branch_taken_0x222328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222328u;
        // 0x22232c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222328) {
            ctx->pc = 0x2224CCu;
            goto label_2224cc;
        }
    }
    ctx->pc = 0x222330u;
    // 0x222330: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2224ACu;
            goto label_2224ac;
        }
    }
    ctx->pc = 0x222338u;
    // 0x222338: 0x10650053  beq         $v1, $a1, . + 4 + (0x53 << 2)
    ctx->pc = 0x222338u;
    {
        const bool branch_taken_0x222338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222338) {
            ctx->pc = 0x222488u;
            goto label_222488;
        }
    }
    ctx->pc = 0x222340u;
    // 0x222340: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x222340u;
    {
        const bool branch_taken_0x222340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222340) {
            ctx->pc = 0x22244Cu;
            goto label_22244c;
        }
    }
    ctx->pc = 0x222348u;
    // 0x222348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22234c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22234Cu;
    {
        const bool branch_taken_0x22234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22234c) {
            ctx->pc = 0x2223C4u;
            goto label_2223c4;
        }
    }
    ctx->pc = 0x222354u;
    // 0x222354: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222354) {
            ctx->pc = 0x222390u;
            goto label_222390;
        }
    }
    ctx->pc = 0x22235Cu;
    // 0x22235c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222360u;
    {
        const bool branch_taken_0x222360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222360) {
            ctx->pc = 0x222370u;
            goto label_222370;
        }
    }
    ctx->pc = 0x222368u;
    // 0x222368: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222368) {
            ctx->pc = 0x222514u;
            goto label_222514;
        }
    }
    ctx->pc = 0x222370u;
label_222370:
    // 0x222370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222378: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22237c: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x22237Cu;
    {
        const bool branch_taken_0x22237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22237c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222384u;
    // 0x222384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222388: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x222388u;
    {
        const bool branch_taken_0x222388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222388) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222394: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x222398: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22239c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x22239Cu;
    {
        const bool branch_taken_0x22239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22239c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223A4u;
    // 0x2223a4: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A4u;
    // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x2223A4u, 0x2223ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2223ACu;
    {
        const bool branch_taken_0x2223ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223ac) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223B4u;
    // 0x2223b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2223b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2223bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2223BCu;
    {
        const bool branch_taken_0x2223bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223bc) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2223c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2223cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2223d0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2223D0u;
    {
        const bool branch_taken_0x2223d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223d0) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223D8u;
    // 0x2223d8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2223dc: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
    // 0x2223e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2223e4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2223e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x2223F0u;
    // 0x2223f0: 0xc0448bc  jal         func_1122F0
    ctx->pc = 0x2223F0u;
    SET_GPR_U32(ctx, 31, 0x2223F8u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x2223F0u, 0x2223F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F8u;
label_2223f8:
    // 0x2223f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x222400u;
    // 0x222400: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222408: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x222408u;
    {
        const bool branch_taken_0x222408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222408) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222410u;
label_222410:
    // 0x222410: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x222414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222418: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    // 0x22241c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2F6D28u));
    // 0x222420: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222424: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x222424u;
    {
        const bool branch_taken_0x222424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222424) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22242Cu;
    // 0x22242c: 0xc0448bc  jal         func_1122F0
    ctx->pc = 0x22242Cu;
    SET_GPR_U32(ctx, 31, 0x222434u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x22242Cu, 0x222434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222434u;
label_222434:
    // 0x222434: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x222434u;
    {
        const bool branch_taken_0x222434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222434) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22243Cu;
    // 0x22243c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x222440: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222444: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222444) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22244Cu;
label_22244c:
    // 0x22244c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222450: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x222454: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222458: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222458u;
    {
        const bool branch_taken_0x222458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222458) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x222460u;
    // 0x222460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222468: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x222468u;
    {
        const bool branch_taken_0x222468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222468) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222470u;
label_222470:
    // 0x222470: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222470) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222478u;
    // 0x222478: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22247c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222480: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x222480u;
    {
        const bool branch_taken_0x222480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222480) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222488u;
label_222488:
    // 0x222488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222490: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222494: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x222494u;
    {
        const bool branch_taken_0x222494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222494) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22249Cu;
    // 0x22249c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2224a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2224a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ACu;
label_2224ac:
    // 0x2224ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2224b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2224b4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2224b8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2224B8u;
    {
        const bool branch_taken_0x2224b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2224b8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224C0u;
    // 0x2224c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2224C4u;
    {
        const bool branch_taken_0x2224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224CCu;
label_2224cc:
    // 0x2224cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2224d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2224d4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2224d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2224D8u;
    {
        const bool branch_taken_0x2224d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224E0u;
    // 0x2224e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2224E4u;
    {
        const bool branch_taken_0x2224e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2224ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2224f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2224f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2224F4u;
    {
        const bool branch_taken_0x2224f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2224f4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224FCu;
    // 0x2224fc: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x2224fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x222500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222500) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222508u;
    // 0x222508: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x222508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x22250c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222510:
    // 0x222510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222514:
    // 0x222514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x222518u;
}
