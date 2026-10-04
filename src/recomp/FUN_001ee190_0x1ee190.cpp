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

// Function: FUN_001ee190
// Address: 0x1ee190 - 0x1ee268
void FUN_001ee190_0x1ee190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee190_0x1ee190");
#endif

    switch (ctx->pc) {
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee258u: goto label_1ee258;
        default: break;
    }

    ctx->pc = 0x1ee190u;

    // 0x1ee190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee194: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ee198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee19c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ee1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee1a4: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1ee1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee1ac: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x1ee1acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1ee1b0: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1ee1b4: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ee1b8: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x1EE1B8u;
    SET_GPR_U32(ctx, 31, 0x1EE1C0u);
    ctx->pc = 0x1EE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1B8u;
    // 0x1ee1bc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x1EE1B8u, 0x1EE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1C0u;
label_1ee1c0:
    // 0x1ee1c0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ee1c4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ee1c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ee1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1cc: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x1EE1CCu;
    SET_GPR_U32(ctx, 31, 0x1EE1D4u);
    ctx->pc = 0x1EE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1CCu;
    // 0x1ee1d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x1EE1CCu, 0x1EE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1D4u;
label_1ee1d4:
    // 0x1ee1d4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1ee1d8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x1EE1D8u;
    SET_GPR_U32(ctx, 31, 0x1EE1E0u);
    ctx->pc = 0x1EE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1D8u;
    // 0x1ee1dc: 0x2484d0d0  addiu       $a0, $a0, -0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x1EE1D8u, 0x1EE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1E0u;
label_1ee1e0:
    // 0x1ee1e0: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x1EE1E0u;
    SET_GPR_U32(ctx, 31, 0x1EE1E8u);
    ctx->pc = 0x1EE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE1E0u;
    // 0x1ee1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x1EE1E0u, 0x1EE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1ec:
    // 0x1ee1ec: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
    // 0x1ee1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1F8u;
    // 0x1ee1f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE1F8u;
    {
        const bool branch_taken_0x1ee1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1F8u;
        // 0x1ee1fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1f8) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE200u;
    SET_GPR_U32(ctx, 31, 0x1EE208u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE200u, 0x1EE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE208u;
label_1ee208:
    // 0x1ee208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee20c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE20Cu;
        // 0x1ee210: 0x2a21003d  slti        $at, $s1, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE240u;
            goto label_1ee240;
        }
    }
    ctx->pc = 0x1EE214u;
    // 0x1ee214: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE214u;
    {
        const bool branch_taken_0x1ee214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee214) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE21Cu;
    // 0x1ee21c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ee220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE220u;
    {
        const bool branch_taken_0x1ee220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE220u;
        // 0x1ee224: 0x2a210079  slti        $at, $s1, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee220) {
            ctx->pc = 0x1EE230u;
            goto label_1ee230;
        }
    }
    ctx->pc = 0x1EE228u;
    // 0x1ee228: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE228u;
    {
        const bool branch_taken_0x1ee228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee228) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE230u;
label_1ee230:
    // 0x1ee230: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x1EE230u;
    SET_GPR_U32(ctx, 31, 0x1EE238u);
    ctx->pc = 0x1EE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE230u;
    // 0x1ee234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x1EE230u, 0x1EE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE238u;
label_1ee238:
    // 0x1ee238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE238u;
    {
        const bool branch_taken_0x1ee238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee238) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE240u;
label_1ee240:
    // 0x1ee240: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE240u, 0x1EE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE250u;
label_1ee250:
    // 0x1ee250: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1EE250u;
    SET_GPR_U32(ctx, 31, 0x1EE258u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1EE250u, 0x1EE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE258u;
label_1ee258:
    // 0x1ee258: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EE258u;
    {
        const bool branch_taken_0x1ee258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE258u;
        // 0x1ee25c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee258) {
            ctx->pc = 0x1EE1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee1ec;
        }
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ee268u;
}
