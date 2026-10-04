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

// Function: FUN_002355a8
// Address: 0x2355a8 - 0x235634
void FUN_002355a8_0x2355a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002355a8_0x2355a8");
#endif

    switch (ctx->pc) {
        case 0x2355d8u: goto label_2355d8;
        case 0x2355e8u: goto label_2355e8;
        case 0x235610u: goto label_235610;
        case 0x23561cu: goto label_23561c;
        default: break;
    }

    ctx->pc = 0x2355a8u;

    // 0x2355a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2355ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2355acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2355b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2355b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355b4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x2355b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2355b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2355bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2355bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2355c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2355c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2355c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2355cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2355ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2355d0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2355D0u;
    SET_GPR_U32(ctx, 31, 0x2355D8u);
    ctx->pc = 0x2355D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355D0u;
    // 0x2355d4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2355D0u, 0x2355D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355D8u;
label_2355d8:
    // 0x2355d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2355D8u;
    {
        const bool branch_taken_0x2355d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d8) {
            ctx->pc = 0x235620u;
            goto label_235620;
        }
    }
    ctx->pc = 0x2355E0u;
    // 0x2355e0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x2355E0u;
    SET_GPR_U32(ctx, 31, 0x2355E8u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x2355E0u, 0x2355E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355E8u;
label_2355e8:
    // 0x2355e8: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2355ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355f0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2355f4: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x2355f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2355f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2355fc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2355FCu;
    {
        const bool branch_taken_0x2355fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355fc) {
            ctx->pc = 0x235614u;
            goto label_235614;
        }
    }
    ctx->pc = 0x235604u;
    // 0x235604: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x235604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x235608: 0xc08d192  jal         func_234648
    ctx->pc = 0x235608u;
    SET_GPR_U32(ctx, 31, 0x235610u);
    ctx->pc = 0x23560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235608u;
    // 0x23560c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x235608u, 0x235610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235610u;
label_235610:
    // 0x235610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235614:
    // 0x235614: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235614u;
    SET_GPR_U32(ctx, 31, 0x23561Cu);
    ctx->pc = 0x235618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235614u;
    // 0x235618: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235614u, 0x23561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23561Cu;
label_23561c:
    // 0x23561c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23561cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235620:
    // 0x235620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23562c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x235634u;
}
