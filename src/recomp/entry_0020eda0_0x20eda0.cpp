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

// Function: entry_0020eda0
// Address: 0x20eda0 - 0x20ee00
void entry_0020eda0_0x20eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020eda0_0x20eda0");
#endif

    switch (ctx->pc) {
        case 0x20edb4u: goto label_20edb4;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd8u: goto label_20edd8;
        default: break;
    }

    ctx->pc = 0x20eda0u;

    // 0x20eda0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20EDA0u;
    {
        const bool branch_taken_0x20eda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eda0) {
            ctx->pc = 0x20EE20u;
            return;
        }
    }
    ctx->pc = 0x20EDA8u;
    // 0x20eda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edac: 0xc066d0a  jal         func_19B428
    ctx->pc = 0x20EDACu;
    SET_GPR_U32(ctx, 31, 0x20EDB4u);
    ctx->pc = 0x20EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDACu;
    // 0x20edb0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EDACu, 0x20EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDB4u;
label_20edb4:
    // 0x20edb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20edb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20edb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20edbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edc0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20edc4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x20EDC4u;
    SET_GPR_U32(ctx, 31, 0x20EDCCu);
    ctx->pc = 0x20EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDC4u;
    // 0x20edc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x20EDC4u, 0x20EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDCCu;
label_20edcc:
    // 0x20edcc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x20edd0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x20EDD0u;
    SET_GPR_U32(ctx, 31, 0x20EDD8u);
    ctx->pc = 0x20EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDD0u;
    // 0x20edd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x20EDD0u, 0x20EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD8u;
label_20edd8:
    // 0x20edd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x20eddc: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x20eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x20ede0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20ede4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x20ede8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDE8u;
        // 0x20edec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EE08u;
            return;
        }
    }
    ctx->pc = 0x20EDF0u;
    // 0x20edf0: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EDF0u;
    {
        const bool branch_taken_0x20edf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x20edf0) {
            ctx->pc = 0x20EE00u;
            return;
        }
    }
    ctx->pc = 0x20EDF8u;
    // 0x20edf8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x20edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x20edfc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x20edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x20ee00u;
}
