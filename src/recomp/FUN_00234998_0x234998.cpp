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

// Function: FUN_00234998
// Address: 0x234998 - 0x234a34
void FUN_00234998_0x234998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234998_0x234998");
#endif

    switch (ctx->pc) {
        case 0x2349d0u: goto label_2349d0;
        case 0x2349e0u: goto label_2349e0;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a18u: goto label_234a18;
        default: break;
    }

    ctx->pc = 0x234998u;

    // 0x234998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23499c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2349a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2349a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349a4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x2349a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2349a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2349ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2349acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2349b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2349b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2349b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2349b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2349bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2349bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2349c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2349c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2349c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2349c8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2349C8u;
    SET_GPR_U32(ctx, 31, 0x2349D0u);
    ctx->pc = 0x2349CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349C8u;
    // 0x2349cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2349C8u, 0x2349D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349D0u;
label_2349d0:
    // 0x2349d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2349D0u;
    {
        const bool branch_taken_0x2349d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349D0u;
        // 0x2349d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349d0) {
            ctx->pc = 0x234A1Cu;
            goto label_234a1c;
        }
    }
    ctx->pc = 0x2349D8u;
    // 0x2349d8: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x2349D8u, 0x2349E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2349e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2349e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2349ec: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2349ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x2349f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2349f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2349f4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2349F4u;
    {
        const bool branch_taken_0x2349f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2349F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F4u;
        // 0x2349f8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349f4) {
            ctx->pc = 0x234A10u;
            goto label_234a10;
        }
    }
    ctx->pc = 0x2349FCu;
    // 0x2349fc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2349fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x234a00: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x234a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x234a04: 0xc08d192  jal         func_234648
    ctx->pc = 0x234A04u;
    SET_GPR_U32(ctx, 31, 0x234A0Cu);
    ctx->pc = 0x234A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A04u;
    // 0x234a08: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234A04u, 0x234A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A0Cu;
label_234a0c:
    // 0x234a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234a10:
    // 0x234a10: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234A10u;
    SET_GPR_U32(ctx, 31, 0x234A18u);
    ctx->pc = 0x234A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A10u;
    // 0x234a14: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234A10u, 0x234A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A18u;
label_234a18:
    // 0x234a18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234a1c:
    // 0x234a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234a28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234a2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234a2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234a30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x234a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x234a34u;
}
