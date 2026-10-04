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

// Function: entry_00239138
// Address: 0x239138 - 0x239208
void entry_00239138_0x239138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239138_0x239138");
#endif

    switch (ctx->pc) {
        case 0x239164u: goto label_239164;
        case 0x239178u: goto label_239178;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391ccu: goto label_2391cc;
        default: break;
    }

    ctx->pc = 0x239138u;

label_239138:
    // 0x239138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x239138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23913c:
    // 0x23913c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239140:
    // 0x239140: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x239140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_239144:
    // 0x239144: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_239148:
    if (ctx->pc == 0x239148u) {
        ctx->pc = 0x239148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239144u;
        // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23914Cu;
        goto label_23914c;
    }
    ctx->pc = 0x239144u;
    {
        const bool branch_taken_0x239144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239144) {
            ctx->pc = 0x239148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239144u;
            // 0x239148: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x23914Cu;
label_23914c:
    // 0x23914c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x23914cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_239150:
    // 0x239150: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_239154:
    if (ctx->pc == 0x239154u) {
        ctx->pc = 0x239154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239150u;
        // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239158u;
        goto label_239158;
    }
    ctx->pc = 0x239150u;
    {
        const bool branch_taken_0x239150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239150) {
            ctx->pc = 0x239154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239150u;
            // 0x239154: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239188u;
            goto label_239188;
        }
    }
    ctx->pc = 0x239158u;
label_239158:
    // 0x239158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23915c:
    // 0x23915c: 0xc08e96a  jal         func_23A5A8
label_239160:
    if (ctx->pc == 0x239160u) {
        ctx->pc = 0x239160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23915Cu;
        // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239164u;
        goto label_239164;
    }
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x239160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23915Cu;
    // 0x239160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x23915Cu, 0x239164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239168:
    // 0x239168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23916c:
    // 0x23916c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239170:
    // 0x239170: 0xc08e1d2  jal         func_238748
label_239174:
    if (ctx->pc == 0x239174u) {
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239178u;
        goto label_239178;
    }
    ctx->pc = 0x239170u;
    SET_GPR_U32(ctx, 31, 0x239178u);
    ctx->pc = 0x239174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239170u;
    // 0x239174: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x239170u, 0x239178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239178u;
label_239178:
    // 0x239178: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_23917c:
    if (ctx->pc == 0x23917Cu) {
        ctx->pc = 0x23917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239178u;
        // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239180u;
        goto label_239180;
    }
    ctx->pc = 0x239178u;
    {
        const bool branch_taken_0x239178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239178) {
            ctx->pc = 0x23917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239178u;
            // 0x23917c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x239180u;
label_239180:
    // 0x239180: 0x1000007b  b           . + 4 + (0x7B << 2)
label_239184:
    if (ctx->pc == 0x239184u) {
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239188u;
        goto label_239188;
    }
    ctx->pc = 0x239180u;
    {
        const bool branch_taken_0x239180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239180u;
        // 0x239184: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239180) {
            ctx->pc = 0x239370u;
            return;
        }
    }
    ctx->pc = 0x239188u;
label_239188:
    // 0x239188: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x239188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23918c:
    // 0x23918c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_239190:
    if (ctx->pc == 0x239190u) {
        ctx->pc = 0x239190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23918Cu;
        // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239194u;
        goto label_239194;
    }
    ctx->pc = 0x23918Cu;
    {
        const bool branch_taken_0x23918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23918c) {
            ctx->pc = 0x239190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23918Cu;
            // 0x239190: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391C0u;
            goto label_2391c0;
        }
    }
    ctx->pc = 0x239194u;
label_239194:
    // 0x239194: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_239198:
    // 0x239198: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23919c:
    // 0x23919c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2391a0:
    // 0x2391a0: 0x40f809  jalr        $v0
label_2391a4:
    if (ctx->pc == 0x2391A4u) {
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391A8u;
        goto label_2391a8;
    }
    ctx->pc = 0x2391A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2391A8u);
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391A0u, 0x2391A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2391A8u;
label_2391a8:
    // 0x2391a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2391ac:
    // 0x2391ac: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_2391b0:
    if (ctx->pc == 0x2391B0u) {
        ctx->pc = 0x2391B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391ACu;
        // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391B4u;
        goto label_2391b4;
    }
    ctx->pc = 0x2391ACu;
    {
        const bool branch_taken_0x2391ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2391ac) {
            ctx->pc = 0x2391B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391ACu;
            // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2391b8:
    if (ctx->pc == 0x2391B8u) {
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391BCu;
        goto label_2391bc;
    }
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x239370u;
            return;
        }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0x0  nop
    ctx->pc = 0x2391bcu;
    // NOP
label_2391c0:
    // 0x2391c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2391c4:
    // 0x2391c4: 0xc08e96a  jal         func_23A5A8
label_2391c8:
    if (ctx->pc == 0x2391C8u) {
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391C4u;
        // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391CCu;
        goto label_2391cc;
    }
    ctx->pc = 0x2391C4u;
    SET_GPR_U32(ctx, 31, 0x2391CCu);
    ctx->pc = 0x2391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391C4u;
    // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x2391C4u, 0x2391CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2391d0:
    // 0x2391d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2391d4:
    // 0x2391d4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2391d8:
    // 0x2391d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391dc:
    // 0x2391dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2391dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2391e0:
    // 0x2391e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2391e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2391e4:
    // 0x2391e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2391e8:
    // 0x2391e8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2391ec:
    // 0x2391ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2391f0:
    // 0x2391f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391f4:
    // 0x2391f4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2391f8:
    if (ctx->pc == 0x2391F8u) {
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391FCu;
        goto label_2391fc;
    }
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x2390D0u;
            return;
        }
    }
    ctx->pc = 0x2391FCu;
label_2391fc:
    // 0x2391fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_239200:
    if (ctx->pc == 0x239200u) {
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239204u;
        goto label_239204;
    }
    ctx->pc = 0x2391FCu;
    {
        const bool branch_taken_0x2391fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391fc) {
            ctx->pc = 0x23937Cu;
            return;
        }
    }
    ctx->pc = 0x239204u;
label_239204:
    // 0x239204: 0x0  nop
    ctx->pc = 0x239204u;
    // NOP
    ctx->pc = 0x239208u;
}
