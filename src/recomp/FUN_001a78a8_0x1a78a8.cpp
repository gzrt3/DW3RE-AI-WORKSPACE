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

// Function: FUN_001a78a8
// Address: 0x1a78a8 - 0x1a7a8c
void FUN_001a78a8_0x1a78a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a78a8_0x1a78a8");
#endif

    switch (ctx->pc) {
        case 0x1a7900u: goto label_1a7900;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79f4u: goto label_1a79f4;
        case 0x1a7a04u: goto label_1a7a04;
        case 0x1a7a30u: goto label_1a7a30;
        case 0x1a7a40u: goto label_1a7a40;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a58u: goto label_1a7a58;
        case 0x1a7a60u: goto label_1a7a60;
        default: break;
    }

    ctx->pc = 0x1a78a8u;

    // 0x1a78a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a78a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a78ac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a78acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a78b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78b4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1a78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1a78b8: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1a78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1a78bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a78c0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a78c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1a78c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1a78c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78c8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1a78cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a78ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78d0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a78d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1a78d4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a78d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78d8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a78dc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1a78dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a78e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a78e4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1a78e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a78ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a78ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78f0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a78f4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78f8: 0xc069c8c  jal         func_1A7230
    ctx->pc = 0x1A78F8u;
    SET_GPR_U32(ctx, 31, 0x1A7900u);
    ctx->pc = 0x1A78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78F8u;
    // 0x1a78fc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7230u, 0x1A78F8u, 0x1A7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7900u;
label_1a7900:
    // 0x1a7900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7904: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1A7904u;
    {
        const bool branch_taken_0x1a7904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7904u;
        // 0x1a7908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7904) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A790Cu;
    // 0x1a790c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a7910: 0x33c40002  andi        $a0, $fp, 0x2
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x1a7914: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a7918: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a7918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1a791c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a791cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1a7920: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a7924: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x1a7924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x1a7928: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x1a7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x1a792c: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1a792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1a7930: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x1a7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x1a7934: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x1a7934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x1a7938: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a7938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1a793c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1a7940: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1a7944: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7944u;
    {
        const bool branch_taken_0x1a7944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7944u;
        // 0x1a7948: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7944) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A794Cu;
    // 0x1a794c: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A794Cu;
    {
        const bool branch_taken_0x1a794c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A794Cu;
        // 0x1a7950: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a794c) {
            ctx->pc = 0x1A796Cu;
            goto label_1a796c;
        }
    }
    ctx->pc = 0x1A7954u;
    // 0x1a7954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a795c: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A795Cu;
    SET_GPR_U32(ctx, 31, 0x1A7964u);
    ctx->pc = 0x1A7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A795Cu;
    // 0x1a7960: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A795Cu, 0x1A7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7964u;
label_1a7964:
    // 0x1a7964: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A7964u;
    {
        const bool branch_taken_0x1a7964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7964u;
        // 0x1a7968: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7964) {
            ctx->pc = 0x1A7990u;
            goto label_1a7990;
        }
    }
    ctx->pc = 0x1A796Cu;
label_1a796c:
    // 0x1a796c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A796Cu;
    {
        const bool branch_taken_0x1a796c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A796Cu;
        // 0x1a7970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a796c) {
            ctx->pc = 0x1A797Cu;
            goto label_1a797c;
        }
    }
    ctx->pc = 0x1A7974u;
    // 0x1a7974: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A7974u;
    SET_GPR_U32(ctx, 31, 0x1A797Cu);
    ctx->pc = 0x1A7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7974u;
    // 0x1a7978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A7974u, 0x1A797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A797Cu;
label_1a797c:
    // 0x1a797c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A797Cu;
    {
        const bool branch_taken_0x1a797c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A797Cu;
        // 0x1a7980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a797c) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A7984u;
    // 0x1a7984: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A7984u;
    SET_GPR_U32(ctx, 31, 0x1A798Cu);
    ctx->pc = 0x1A7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7984u;
    // 0x1a7988: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A7984u, 0x1A798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A798Cu;
label_1a798c:
    // 0x1a798c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1a798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1a7990:
    // 0x1a7990: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7990u;
    {
        const bool branch_taken_0x1a7990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7990) {
            ctx->pc = 0x1A7994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7990u;
            // 0x1a7994: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A79E4u;
            goto label_1a79e4;
        }
    }
    ctx->pc = 0x1A7998u;
    // 0x1a7998: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7998u;
    {
        const bool branch_taken_0x1a7998 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7998u;
        // 0x1a799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7998) {
            ctx->pc = 0x1A79A8u;
            goto label_1a79a8;
        }
    }
    ctx->pc = 0x1A79A0u;
    // 0x1a79a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A79A0u;
    {
        const bool branch_taken_0x1a79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79A0u;
        // 0x1a79a4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79a0) {
            ctx->pc = 0x1A79ACu;
            goto label_1a79ac;
        }
    }
    ctx->pc = 0x1A79A8u;
label_1a79a8:
    // 0x1a79a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1a79ac:
    // 0x1a79ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a79b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a79b4: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a79b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a79b8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1a79c0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79c4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a79c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1a79c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79cc: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A79CCu;
    SET_GPR_U32(ctx, 31, 0x1A79D4u);
    ctx->pc = 0x1A79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79CCu;
    // 0x1a79d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A79CCu, 0x1A79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79D4u;
label_1a79d4:
    // 0x1a79d4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A79D4u;
    {
        const bool branch_taken_0x1a79d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79d4) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A79DCu;
    // 0x1a79dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A79DCu;
    {
        const bool branch_taken_0x1a79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a79dc) {
            ctx->pc = 0x1A7A40u;
            goto label_1a7a40;
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1a79e8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1a79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1a79ec: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7A0Cu;
            goto label_1a7a0c;
        }
    }
    ctx->pc = 0x1A79FCu;
    // 0x1a79fc: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A79FCu;
    SET_GPR_U32(ctx, 31, 0x1A7A04u);
    ctx->pc = 0x1A7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79FCu;
    // 0x1a7a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A79FCu, 0x1A7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A04u;
label_1a7a04:
    // 0x1a7a04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7A04u;
    {
        const bool branch_taken_0x1a7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A04u;
        // 0x1a7a08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a04) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A7A0Cu;
label_1a7a0c:
    // 0x1a7a0c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1a7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x1a7a10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7a14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a7a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a18: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a1c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a7a20: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1a7a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a28: 0xc069b84  jal         func_1A6E10
    ctx->pc = 0x1A7A28u;
    SET_GPR_U32(ctx, 31, 0x1A7A30u);
    ctx->pc = 0x1A7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A28u;
    // 0x1a7a2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E10u, 0x1A7A28u, 0x1A7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A30u;
label_1a7a30:
    // 0x1a7a30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7A30u;
    {
        const bool branch_taken_0x1a7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a30) {
            ctx->pc = 0x1A7A50u;
            goto label_1a7a50;
        }
    }
    ctx->pc = 0x1A7A38u;
    // 0x1a7a38: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7A38u;
    SET_GPR_U32(ctx, 31, 0x1A7A40u);
    ctx->pc = 0x1A7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A38u;
    // 0x1a7a3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7A38u, 0x1A7A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A40u;
label_1a7a40:
    // 0x1a7a40: 0xc069cb6  jal         func_1A72D8
    ctx->pc = 0x1A7A40u;
    SET_GPR_U32(ctx, 31, 0x1A7A48u);
    ctx->pc = 0x1A7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A40u;
    // 0x1a7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72D8u, 0x1A7A40u, 0x1A7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A48u;
label_1a7a48:
    // 0x1a7a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7A48u;
    {
        const bool branch_taken_0x1a7a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A48u;
        // 0x1a7a4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a48) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A7A50u;
label_1a7a50:
    // 0x1a7a50: 0xc069218  jal         func_1A4860
    ctx->pc = 0x1A7A50u;
    SET_GPR_U32(ctx, 31, 0x1A7A58u);
    ctx->pc = 0x1A7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A50u;
    // 0x1a7a54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x1A7A50u, 0x1A7A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A58u;
label_1a7a58:
    // 0x1a7a58: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A7A58u;
    SET_GPR_U32(ctx, 31, 0x1A7A60u);
    ctx->pc = 0x1A7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A58u;
    // 0x1a7a5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A7A58u, 0x1A7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A60u;
label_1a7a60:
    // 0x1a7a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a64:
    // 0x1a7a64: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a7a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7a68: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7a6c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7a70: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a7a70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a7a74: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a7a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7a78: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a7a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7a7c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7a80: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7a84: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7a88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a7a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a7a8cu;
}
