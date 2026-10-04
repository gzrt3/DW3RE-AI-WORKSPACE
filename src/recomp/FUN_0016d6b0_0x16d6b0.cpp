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

// Function: FUN_0016d6b0
// Address: 0x16d6b0 - 0x16d8d4
void FUN_0016d6b0_0x16d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d6b0_0x16d6b0");
#endif

    switch (ctx->pc) {
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d730u: goto label_16d730;
        case 0x16d758u: goto label_16d758;
        case 0x16d774u: goto label_16d774;
        case 0x16d7ecu: goto label_16d7ec;
        case 0x16d83cu: goto label_16d83c;
        case 0x16d878u: goto label_16d878;
        case 0x16d8b4u: goto label_16d8b4;
        default: break;
    }

    ctx->pc = 0x16d6b0u;

    // 0x16d6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d6b4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d6c0: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d6c4: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x16D6C4u;
    {
        const bool branch_taken_0x16d6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6C4u;
        // 0x16d6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6c4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D6CCu;
    // 0x16d6cc: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x16d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x16d6d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D6D0u;
    {
        const bool branch_taken_0x16d6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d6d0) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16D6D8u;
    SET_GPR_U32(ctx, 31, 0x16D6E0u);
    ctx->pc = 0x16D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6D8u;
    // 0x16d6dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16D6D8u, 0x16D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6E0u;
label_16d6e0:
    // 0x16d6e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d6e4: 0x1043007a  beq         $v0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x16D6E4u;
    {
        const bool branch_taken_0x16d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6E4u;
        // 0x16d6e8: 0x36030002  ori         $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6e4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D6ECu;
    // 0x16d6ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D6ECu;
    {
        const bool branch_taken_0x16d6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6ec) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D6F4u;
    // 0x16d6f4: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16d6f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_16d6f8:
    // 0x16d6f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d6fc: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d700: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x16d704: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D70Cu;
    // 0x16d70c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x16d710: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D710u;
    {
        const bool branch_taken_0x16d710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d710) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D718u;
    // 0x16d718: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d720: 0x8c251ebc  lw          $a1, 0x1EBC($at)
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281EBCu));
    // 0x16d724: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x16d728: 0xc08d950  jal         func_236540
    ctx->pc = 0x16D728u;
    SET_GPR_U32(ctx, 31, 0x16D730u);
    ctx->pc = 0x16D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D728u;
    // 0x16d72c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236540u, 0x16D728u, 0x16D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D730u;
label_16d730:
    // 0x16d730: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D730u;
    {
        const bool branch_taken_0x16d730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d730) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D738u;
    // 0x16d738: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d73c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16d740: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d744: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d74c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d750: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16D750u;
    SET_GPR_U32(ctx, 31, 0x16D758u);
    ctx->pc = 0x16D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D750u;
    // 0x16d754: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16D750u, 0x16D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d75c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d760: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16d760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x16d764: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D764u;
    {
        const bool branch_taken_0x16d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d764) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D76Cu;
    // 0x16d76c: 0xc08d8ee  jal         func_2363B8
    ctx->pc = 0x16D76Cu;
    SET_GPR_U32(ctx, 31, 0x16D774u);
    ctx->pc = 0x16D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D76Cu;
    // 0x16d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2363B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2363B8u, 0x16D76Cu, 0x16D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D774u;
label_16d774:
    // 0x16d774: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D774u;
    {
        const bool branch_taken_0x16d774 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d774) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D77Cu;
    // 0x16d77c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d780: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d784: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d78c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d790: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d790u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16d794:
    // 0x16d794: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d798: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d79c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16d7a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16D7A0u;
    {
        const bool branch_taken_0x16d7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7a0) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D7A8u;
    // 0x16d7a8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7ac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d7b0: 0x8c231eb4  lw          $v1, 0x1EB4($at)
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB4u));
    // 0x16d7b4: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x16d7b8: 0x8f858168  lw          $a1, -0x7E98($gp)
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x16d7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c0: 0x24093fff  addiu       $t1, $zero, 0x3FFF
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x16d7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16d7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d7d0: 0x8c271eb8  lw          $a3, 0x1EB8($at)
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7864)));
    // 0x16d7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d7d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d7dc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7e0: 0x8c281ebc  lw          $t0, 0x1EBC($at)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x281EBCu));
    // 0x16d7e4: 0xc08d8aa  jal         func_2362A8
    ctx->pc = 0x16D7E4u;
    SET_GPR_U32(ctx, 31, 0x16D7ECu);
    ctx->pc = 0x16D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7E4u;
    // 0x16d7e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2362A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2362A8u, 0x16D7E4u, 0x16D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7ECu;
label_16d7ec:
    // 0x16d7ec: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D7ECu;
    {
        const bool branch_taken_0x16d7ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d7ec) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D7F4u;
    // 0x16d7f4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7f8: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x16d7fc: 0x8c261eb0  lw          $a2, 0x1EB0($at)
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d800: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x16d800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x16d804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d808: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x16d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d80c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d810: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D810u;
        // 0x16d814: 0xac251eb0  sw          $a1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d81c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d820: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x16d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x16d824: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16D824u;
    {
        const bool branch_taken_0x16d824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d824) {
            ctx->pc = 0x16D85Cu;
            goto label_16d85c;
        }
    }
    ctx->pc = 0x16D82Cu;
    // 0x16d82c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d830: 0x8c251eb8  lw          $a1, 0x1EB8($at)
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281EB8u));
    // 0x16d834: 0xc08d930  jal         func_2364C0
    ctx->pc = 0x16D834u;
    SET_GPR_U32(ctx, 31, 0x16D83Cu);
    ctx->pc = 0x16D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D834u;
    // 0x16d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364C0u, 0x16D834u, 0x16D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D83Cu;
label_16d83c:
    // 0x16d83c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D83Cu;
    {
        const bool branch_taken_0x16d83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d83c) {
            ctx->pc = 0x16D85Cu;
            goto label_16d85c;
        }
    }
    ctx->pc = 0x16D844u;
    // 0x16d844: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d848: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x16d84c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d850: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d854: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d858: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16d85c:
    // 0x16d85c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d860: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d864: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16d864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x16d868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D868u;
    {
        const bool branch_taken_0x16d868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d868) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D870u;
    // 0x16d870: 0xc08d99a  jal         func_236668
    ctx->pc = 0x16D870u;
    SET_GPR_U32(ctx, 31, 0x16D878u);
    ctx->pc = 0x16D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D870u;
    // 0x16d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236668u, 0x16D870u, 0x16D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D878u;
label_16d878:
    // 0x16d878: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D878u;
    {
        const bool branch_taken_0x16d878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d878) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D880u;
    // 0x16d880: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d884: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x16d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16d888: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d88c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d890: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d894: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d894u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16d898:
    // 0x16d898: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d89c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d8a0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x16d8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x16d8a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16D8A4u;
    {
        const bool branch_taken_0x16d8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8A4u;
        // 0x16d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8a4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D8ACu;
    // 0x16d8ac: 0xc08d9b0  jal         func_2366C0
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x2366C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366C0u, 0x16D8ACu, 0x16D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D8B4u;
    {
        const bool branch_taken_0x16d8b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B4u;
        // 0x16d8b8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8b4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D8BCu;
    // 0x16d8bc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x16d8c0: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16d8c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d8c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d8cc: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16d8d0:
    // 0x16d8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16d8d4u;
}
