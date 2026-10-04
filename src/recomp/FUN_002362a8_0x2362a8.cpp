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

// Function: FUN_002362a8
// Address: 0x2362a8 - 0x2363ac
void FUN_002362a8_0x2362a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002362a8_0x2362a8");
#endif

    switch (ctx->pc) {
        case 0x236300u: goto label_236300;
        case 0x236310u: goto label_236310;
        case 0x236348u: goto label_236348;
        case 0x236374u: goto label_236374;
        case 0x236380u: goto label_236380;
        default: break;
    }

    ctx->pc = 0x2362a8u;

    // 0x2362a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2362ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2362acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2362b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2362b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362b4: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x2362b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x2362b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2362b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2362bc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2362bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2362c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2362c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2362c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2362c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2362cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2362ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2362d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2362d4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2362d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2362d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2362dc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2362dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2362e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2362e4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2362e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362e8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2362e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2362ec: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2362f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2362f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2362f4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2362f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2362f8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2362F8u;
    SET_GPR_U32(ctx, 31, 0x236300u);
    ctx->pc = 0x2362FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362F8u;
    // 0x2362fc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2362F8u, 0x236300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236300u;
label_236300:
    // 0x236300: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x236300u;
    {
        const bool branch_taken_0x236300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236300u;
        // 0x236304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236300) {
            ctx->pc = 0x236384u;
            goto label_236384;
        }
    }
    ctx->pc = 0x236308u;
    // 0x236308: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236308u;
    SET_GPR_U32(ctx, 31, 0x236310u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236308u, 0x236310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236310u;
label_236310:
    // 0x236310: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x236310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236318: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x23631c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x23631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236320: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x236324: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236324) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x23632Cu;
    // 0x23632c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x23632cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x236330: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x236330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x236334: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x236334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x236338: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x236338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x23633c: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x23633cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x236340: 0xc08dc08  jal         func_237020
    ctx->pc = 0x236340u;
    SET_GPR_U32(ctx, 31, 0x236348u);
    ctx->pc = 0x236344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236340u;
    // 0x236344: 0xac5e0010  sw          $fp, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237020u, 0x236340u, 0x236348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236348u;
label_236348:
    // 0x236348: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x23634c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23634cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x236350: 0x2252824  and         $a1, $s1, $a1
    ctx->pc = 0x236350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x236354: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x236358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23635c: 0xa38825  or          $s1, $a1, $v1
    ctx->pc = 0x23635cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x236360: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x236360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x236364: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236364u;
    {
        const bool branch_taken_0x236364 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x236368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236364u;
        // 0x236368: 0x36250095  ori         $a1, $s1, 0x95 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)149);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236364) {
            ctx->pc = 0x236378u;
            goto label_236378;
        }
    }
    ctx->pc = 0x23636Cu;
    // 0x23636c: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x23636Cu;
    SET_GPR_U32(ctx, 31, 0x236374u);
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x23636Cu, 0x236374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236374u;
label_236374:
    // 0x236374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236378:
    // 0x236378: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236378u;
    SET_GPR_U32(ctx, 31, 0x236380u);
    ctx->pc = 0x23637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236378u;
    // 0x23637c: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236378u, 0x236380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236380u;
label_236380:
    // 0x236380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236384:
    // 0x236384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23638c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236398: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23639c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23639cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2363a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2363a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2363a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2363a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2363a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2363a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x2363acu;
}
