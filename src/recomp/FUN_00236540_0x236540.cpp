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

// Function: FUN_00236540
// Address: 0x236540 - 0x2365dc
void FUN_00236540_0x236540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00236540_0x236540");
#endif

    switch (ctx->pc) {
        case 0x236578u: goto label_236578;
        case 0x236588u: goto label_236588;
        case 0x2365b4u: goto label_2365b4;
        case 0x2365c0u: goto label_2365c0;
        default: break;
    }

    ctx->pc = 0x236540u;

    // 0x236540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x236548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23654c: 0x8f8482f0  lw          $a0, -0x7D10($gp)
    ctx->pc = 0x23654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x236550: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x236554: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x236554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23655c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x236560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x236564: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x236564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23656c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x236570: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x236570u;
    SET_GPR_U32(ctx, 31, 0x236578u);
    ctx->pc = 0x236574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236570u;
    // 0x236574: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x236570u, 0x236578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236578u;
label_236578:
    // 0x236578: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x236578u;
    {
        const bool branch_taken_0x236578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236578u;
        // 0x23657c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236578) {
            ctx->pc = 0x2365C4u;
            goto label_2365c4;
        }
    }
    ctx->pc = 0x236580u;
    // 0x236580: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x236580u;
    SET_GPR_U32(ctx, 31, 0x236588u);
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x236580u, 0x236588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236588u;
label_236588:
    // 0x236588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23658c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23658cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236590: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x236594: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x236598: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x236598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x23659c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23659Cu;
    {
        const bool branch_taken_0x23659c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23659c) {
            ctx->pc = 0x2365B8u;
            goto label_2365b8;
        }
    }
    ctx->pc = 0x2365A4u;
    // 0x2365a4: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2365a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x2365a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2365a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2365ac: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x2365ACu;
    SET_GPR_U32(ctx, 31, 0x2365B4u);
    ctx->pc = 0x2365B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365ACu;
    // 0x2365b0: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x2365ACu, 0x2365B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365B4u;
label_2365b4:
    // 0x2365b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2365b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2365b8:
    // 0x2365b8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2365B8u;
    SET_GPR_U32(ctx, 31, 0x2365C0u);
    ctx->pc = 0x2365BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365B8u;
    // 0x2365bc: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2365B8u, 0x2365C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365C0u;
label_2365c0:
    // 0x2365c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2365c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2365c4:
    // 0x2365c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2365c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2365c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2365c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2365cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2365ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2365d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2365d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2365d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2365d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2365d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2365d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x2365dcu;
}
