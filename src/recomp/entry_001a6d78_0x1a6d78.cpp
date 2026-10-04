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

// Function: entry_001a6d78
// Address: 0x1a6d78 - 0x1a6de4
void entry_001a6d78_0x1a6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6d78_0x1a6d78");
#endif

    switch (ctx->pc) {
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6ddcu: goto label_1a6ddc;
        default: break;
    }

    ctx->pc = 0x1a6d78u;

    // 0x1a6d78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a6d7c: 0x8c441820  lw          $a0, 0x1820($v0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x371820u));
    // 0x1a6d80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1a6d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1a6d88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a6d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6d90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a6d94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6d98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6d9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1a6da0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a6da4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a6da8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1a6dac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1a6dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a6db0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a6db4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a6db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dc0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A6DC0u;
    SET_GPR_U32(ctx, 31, 0x1A6DC8u);
    ctx->pc = 0x1A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DC0u;
    // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A6DC0u, 0x1A6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DC8u;
label_1a6dc8:
    // 0x1a6dc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a6dcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6DCCu;
    {
        const bool branch_taken_0x1a6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dcc) {
            ctx->pc = 0x1A6DE4u;
            return;
        }
    }
    ctx->pc = 0x1A6DD4u;
    // 0x1a6dd4: 0xc0692fc  jal         func_1A4BF0
    ctx->pc = 0x1A6DD4u;
    SET_GPR_U32(ctx, 31, 0x1A6DDCu);
    ctx->pc = 0x1A6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DD4u;
    // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BF0u, 0x1A6DD4u, 0x1A6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DDCu;
label_1a6ddc:
    // 0x1a6ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6DDCu;
    {
        const bool branch_taken_0x1a6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ddc) {
            ctx->pc = 0x1A6DF0u;
            return;
        }
    }
    ctx->pc = 0x1A6DE4u;
}
