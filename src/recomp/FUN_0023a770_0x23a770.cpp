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

// Function: FUN_0023a770
// Address: 0x23a770 - 0x23a7e4
void FUN_0023a770_0x23a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a770_0x23a770");
#endif

    switch (ctx->pc) {
        case 0x23a788u: goto label_23a788;
        case 0x23a7c0u: goto label_23a7c0;
        default: break;
    }

    ctx->pc = 0x23a770u;

    // 0x23a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a77c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a780: 0xc0691c4  jal         func_1A4710
    ctx->pc = 0x23A780u;
    SET_GPR_U32(ctx, 31, 0x23A788u);
    ctx->pc = 0x1A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4710u, 0x23A780u, 0x23A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A788u;
label_23a788:
    // 0x23a788: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23a78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a790: 0x24710c80  addiu       $s1, $v1, 0xC80
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x23a794: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23a798: 0x24440c84  addiu       $a0, $v0, 0xC84
    ctx->pc = 0x23a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
    // 0x23a79c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290C80u));
    // 0x23a7a0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A7A0u;
    {
        const bool branch_taken_0x23a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A0u;
        // 0x23a7a4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a0) {
            ctx->pc = 0x23A7B8u;
            goto label_23a7b8;
        }
    }
    ctx->pc = 0x23A7A8u;
    // 0x23a7a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a7b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23A7B0u;
    {
        const bool branch_taken_0x23a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B0u;
        // 0x23a7b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7b0) {
            ctx->pc = 0x23A7D8u;
            goto label_23a7d8;
        }
    }
    ctx->pc = 0x23A7B8u;
label_23a7b8:
    // 0x23a7b8: 0xc069218  jal         func_1A4860
    ctx->pc = 0x23A7B8u;
    SET_GPR_U32(ctx, 31, 0x23A7C0u);
    ctx->pc = 0x23A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7B8u;
    // 0x23a7bc: 0x8c446288  lw          $a0, 0x6288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x23A7B8u, 0x23A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7C0u;
label_23a7c0:
    // 0x23a7c0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23a7c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x23a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x23a7c8: 0x24630c84  addiu       $v1, $v1, 0xC84
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
    // 0x23a7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290C84u));
    // 0x23a7d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23a7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x290C84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290C84u, _value); } while (0);
label_23a7d8:
    // 0x23a7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23a7e4u;
}
