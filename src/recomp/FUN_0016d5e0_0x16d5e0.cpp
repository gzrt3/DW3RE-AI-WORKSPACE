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

// Function: FUN_0016d5e0
// Address: 0x16d5e0 - 0x16d69c
void FUN_0016d5e0_0x16d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d5e0_0x16d5e0");
#endif

    switch (ctx->pc) {
        case 0x16d624u: goto label_16d624;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d63cu: goto label_16d63c;
        case 0x16d650u: goto label_16d650;
        case 0x16d678u: goto label_16d678;
        case 0x16d698u: goto label_16d698;
        default: break;
    }

    ctx->pc = 0x16d5e0u;

    // 0x16d5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d5f0: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16d5f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D5F4u;
    {
        const bool branch_taken_0x16d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5F4u;
        // 0x16d5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5f4) {
            ctx->pc = 0x16D608u;
            goto label_16d608;
        }
    }
    ctx->pc = 0x16D5FCu;
    // 0x16d5fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d600: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D600u;
    {
        const bool branch_taken_0x16d600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d600) {
            ctx->pc = 0x16D634u;
            goto label_16d634;
        }
    }
    ctx->pc = 0x16D608u;
label_16d608:
    // 0x16d608: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d60c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d610: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x16d614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D614u;
    {
        const bool branch_taken_0x16d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D614u;
        // 0x16d618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d614) {
            ctx->pc = 0x16D624u;
            goto label_16d624;
        }
    }
    ctx->pc = 0x16D61Cu;
    // 0x16d61c: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16D61Cu;
    SET_GPR_U32(ctx, 31, 0x16D624u);
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16D61Cu, 0x16D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D624u;
label_16d624:
    // 0x16d624: 0xc05b6ec  jal         func_16DBB0
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16DBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DBB0u, 0x16D624u, 0x16D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16D62Cu;
    {
        const bool branch_taken_0x16d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D62Cu;
        // 0x16d630: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d62c) {
            ctx->pc = 0x16D698u;
            goto label_16d698;
        }
    }
    ctx->pc = 0x16D634u;
label_16d634:
    // 0x16d634: 0xc05ae90  jal         func_16BA40
    ctx->pc = 0x16D634u;
    SET_GPR_U32(ctx, 31, 0x16D63Cu);
    ctx->pc = 0x16BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BA40u, 0x16D634u, 0x16D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D63Cu;
label_16d63c:
    // 0x16d63c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d640: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16D640u;
    {
        const bool branch_taken_0x16d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D640u;
        // 0x16d644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d640) {
            ctx->pc = 0x16D68Cu;
            goto label_16d68c;
        }
    }
    ctx->pc = 0x16D648u;
    // 0x16d648: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D648u;
    {
        const bool branch_taken_0x16d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d648) {
            ctx->pc = 0x16D660u;
            goto label_16d660;
        }
    }
    ctx->pc = 0x16D650u;
label_16d650:
    // 0x16d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d654: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x16d654u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x16d658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D658u;
    {
        const bool branch_taken_0x16d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d658) {
            ctx->pc = 0x16D688u;
            goto label_16d688;
        }
    }
    ctx->pc = 0x16D660u;
label_16d660:
    // 0x16d660: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d668: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16d66c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x16d66cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x16d670: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16D670u;
    SET_GPR_U32(ctx, 31, 0x16D678u);
    ctx->pc = 0x16D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D670u;
    // 0x16d674: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16D670u, 0x16D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D678u;
label_16d678:
    // 0x16d678: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d67c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16D67Cu;
    {
        const bool branch_taken_0x16d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d67c) {
            ctx->pc = 0x16D650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d650;
        }
    }
    ctx->pc = 0x16D684u;
    // 0x16d684: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d688:
    // 0x16d688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d68c:
    // 0x16d68c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d690: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16D690u;
    SET_GPR_U32(ctx, 31, 0x16D698u);
    ctx->pc = 0x16D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D690u;
    // 0x16d694: 0x50200a  movz        $a0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16D690u, 0x16D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D698u;
label_16d698:
    // 0x16d698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16d69cu;
}
