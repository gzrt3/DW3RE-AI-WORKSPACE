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

// Function: entry_0019fd1c
// Address: 0x19fd1c - 0x19fe64
void entry_0019fd1c_0x19fd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd1c_0x19fd1c");
#endif

    switch (ctx->pc) {
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fdb8u: goto label_19fdb8;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fe04u: goto label_19fe04;
        case 0x19fe14u: goto label_19fe14;
        case 0x19fe28u: goto label_19fe28;
        case 0x19fe34u: goto label_19fe34;
        case 0x19fe40u: goto label_19fe40;
        case 0x19fe4cu: goto label_19fe4c;
        default: break;
    }

    ctx->pc = 0x19fd1cu;

    // 0x19fd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd20: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FD20u;
    SET_GPR_U32(ctx, 31, 0x19FD28u);
    ctx->pc = 0x19FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD20u;
    // 0x19fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FD20u, 0x19FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD28u;
label_19fd28:
    // 0x19fd28: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x19fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x19fd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd30: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FD30u;
    SET_GPR_U32(ctx, 31, 0x19FD38u);
    ctx->pc = 0x19FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD30u;
    // 0x19fd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FD30u, 0x19FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD38u;
label_19fd38:
    // 0x19fd38: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x19fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x19fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd40: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FD40u;
    SET_GPR_U32(ctx, 31, 0x19FD48u);
    ctx->pc = 0x19FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD40u;
    // 0x19fd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FD40u, 0x19FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD48u;
label_19fd48:
    // 0x19fd48: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x19fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x19fd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd50: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FD50u;
    SET_GPR_U32(ctx, 31, 0x19FD58u);
    ctx->pc = 0x19FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD50u;
    // 0x19fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FD50u, 0x19FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD58u;
label_19fd58:
    // 0x19fd58: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x19fd5c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19fd60: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x19fd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fd68: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x19fd6c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19fd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19fd78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd7c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x19fd80: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FD80u;
    SET_GPR_U32(ctx, 31, 0x19FD88u);
    ctx->pc = 0x19FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD80u;
    // 0x19fd84: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FD80u, 0x19FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD88u;
label_19fd88:
    // 0x19fd88: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x19fd8c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19fd90: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x19fd94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fd98: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x19fd9c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19fda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fda4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19fda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fdac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x19fdb0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FDB0u;
    SET_GPR_U32(ctx, 31, 0x19FDB8u);
    ctx->pc = 0x19FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDB0u;
    // 0x19fdb4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FDB0u, 0x19FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDB8u;
label_19fdb8:
    // 0x19fdb8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x19fdbc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19fdc0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x19fdc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fdc8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19fdcc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19fdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdd4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19fdd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fddc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x19fde0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FDE0u;
    SET_GPR_U32(ctx, 31, 0x19FDE8u);
    ctx->pc = 0x19FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDE0u;
    // 0x19fde4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FDE0u, 0x19FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x19fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x19fdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdf0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FDF0u;
    SET_GPR_U32(ctx, 31, 0x19FDF8u);
    ctx->pc = 0x19FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDF0u;
    // 0x19fdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FDF0u, 0x19FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdfc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FDFCu;
    SET_GPR_U32(ctx, 31, 0x19FE04u);
    ctx->pc = 0x19FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDFCu;
    // 0x19fe00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FDFCu, 0x19FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE04u;
label_19fe04:
    // 0x19fe04: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x19fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x19fe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe0c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE0Cu;
    SET_GPR_U32(ctx, 31, 0x19FE14u);
    ctx->pc = 0x19FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE0Cu;
    // 0x19fe10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE0Cu, 0x19FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE14u;
label_19fe14:
    // 0x19fe14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19FE14u;
    {
        const bool branch_taken_0x19fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE14u;
        // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe14) {
            ctx->pc = 0x19FE64u;
            return;
        }
    }
    ctx->pc = 0x19FE1Cu;
    // 0x19fe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe20: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE20u;
    SET_GPR_U32(ctx, 31, 0x19FE28u);
    ctx->pc = 0x19FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE20u;
    // 0x19fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE20u, 0x19FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE28u;
label_19fe28:
    // 0x19fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe2c: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE2Cu;
    SET_GPR_U32(ctx, 31, 0x19FE34u);
    ctx->pc = 0x19FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE2Cu;
    // 0x19fe30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE2Cu, 0x19FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE34u;
label_19fe34:
    // 0x19fe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe38: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE38u;
    SET_GPR_U32(ctx, 31, 0x19FE40u);
    ctx->pc = 0x19FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE38u;
    // 0x19fe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE38u, 0x19FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE40u;
label_19fe40:
    // 0x19fe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe44: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x19FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE44u;
    // 0x19fe48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE44u, 0x19FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19fe5c: 0x8067dd2  j           func_19F748
    ctx->pc = 0x19FE5Cu;
    ctx->pc = 0x19FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE5Cu;
    // 0x19fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    FUN_0019f748_0x19f748(rdram, ctx, runtime); return;
    ctx->pc = 0x19FE64u;
}
