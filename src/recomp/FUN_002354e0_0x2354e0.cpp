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

// Function: FUN_002354e0
// Address: 0x2354e0 - 0x23559c
void FUN_002354e0_0x2354e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002354e0_0x2354e0");
#endif

    switch (ctx->pc) {
        case 0x235528u: goto label_235528;
        case 0x235538u: goto label_235538;
        case 0x23556cu: goto label_23556c;
        case 0x235578u: goto label_235578;
        default: break;
    }

    ctx->pc = 0x2354e0u;

    // 0x2354e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2354e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2354e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2354e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2354e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2354e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354ec: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x2354f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2354f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2354f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2354f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2354f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2354fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x235500: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235504: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x235504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235508: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23550c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x23550cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x235510: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235514: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x235514u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x235518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23551c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x23551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x235520: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x235520u;
    SET_GPR_U32(ctx, 31, 0x235528u);
    ctx->pc = 0x235524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235520u;
    // 0x235524: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x235520u, 0x235528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235528u;
label_235528:
    // 0x235528: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x235528u;
    {
        const bool branch_taken_0x235528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235528u;
        // 0x23552c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235528) {
            ctx->pc = 0x23557Cu;
            goto label_23557c;
        }
    }
    ctx->pc = 0x235530u;
    // 0x235530: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235530u;
    SET_GPR_U32(ctx, 31, 0x235538u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235530u, 0x235538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235538u;
label_235538:
    // 0x235538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23553c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23553cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235540: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235544: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235548: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x235548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x23554c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23554Cu;
    {
        const bool branch_taken_0x23554c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23554Cu;
        // 0x235550: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23554c) {
            ctx->pc = 0x235570u;
            goto label_235570;
        }
    }
    ctx->pc = 0x235554u;
    // 0x235554: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x235554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x235558: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x23555c: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x23555cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x235560: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x235564: 0xc08d192  jal         func_234648
    ctx->pc = 0x235564u;
    SET_GPR_U32(ctx, 31, 0x23556Cu);
    ctx->pc = 0x235568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235564u;
    // 0x235568: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x235564u, 0x23556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23556Cu;
label_23556c:
    // 0x23556c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23556cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235570:
    // 0x235570: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235570u;
    SET_GPR_U32(ctx, 31, 0x235578u);
    ctx->pc = 0x235574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235570u;
    // 0x235574: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235570u, 0x235578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235578u;
label_235578:
    // 0x235578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23557c:
    // 0x23557c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23558c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235594: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235598: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x23559cu;
}
