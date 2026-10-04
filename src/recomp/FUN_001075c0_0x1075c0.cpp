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

// Function: FUN_001075c0
// Address: 0x1075c0 - 0x107658
void FUN_001075c0_0x1075c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001075c0_0x1075c0");
#endif

    switch (ctx->pc) {
        case 0x1075d0u: goto label_1075d0;
        case 0x1075e4u: goto label_1075e4;
        case 0x10760cu: goto label_10760c;
        case 0x10761cu: goto label_10761c;
        default: break;
    }

    ctx->pc = 0x1075c0u;

    // 0x1075c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1075c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1075c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1075c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1075c8: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x1075C8u;
    SET_GPR_U32(ctx, 31, 0x1075D0u);
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x1075C8u, 0x1075D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075D0u;
label_1075d0:
    // 0x1075d0: 0x8f84847c  lw          $a0, -0x7B84($gp)
    ctx->pc = 0x1075d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x1075d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1075D4u;
    {
        const bool branch_taken_0x1075d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1075d4) {
            ctx->pc = 0x1075E4u;
            goto label_1075e4;
        }
    }
    ctx->pc = 0x1075DCu;
    // 0x1075dc: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1075DCu;
    SET_GPR_U32(ctx, 31, 0x1075E4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1075DCu, 0x1075E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075E4u;
label_1075e4:
    // 0x1075e4: 0xaf8084b0  sw          $zero, -0x7B50($gp)
    ctx->pc = 0x1075e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 0));
    // 0x1075e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1075e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075ec: 0xaf8084a0  sw          $zero, -0x7B60($gp)
    ctx->pc = 0x1075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U32(ctx, 0));
    // 0x1075f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1075f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075f4: 0xaf808478  sw          $zero, -0x7B88($gp)
    ctx->pc = 0x1075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U32(ctx, 0));
    // 0x1075f8: 0xaf808474  sw          $zero, -0x7B8C($gp)
    ctx->pc = 0x1075f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935668), GPR_U32(ctx, 0));
    // 0x1075fc: 0xaf808480  sw          $zero, -0x7B80($gp)
    ctx->pc = 0x1075fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U32(ctx, 0));
    // 0x107600: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x107600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
    // 0x107604: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x107604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x107608: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x107608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
label_10760c:
    // 0x10760c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107614: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x107618: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x107618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_10761c:
    // 0x10761c: 0x0  nop
    ctx->pc = 0x10761cu;
    // NOP
    // 0x107620: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x107620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x107624: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x107624u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x107628: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x107628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10762c: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x10762cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x107630: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x107630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x107634: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x107634u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x107638: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x10763c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10763Cu;
    {
        const bool branch_taken_0x10763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10763Cu;
        // 0x107640: 0xad400018  sw          $zero, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10763c) {
            ctx->pc = 0x10761Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10761c;
        }
    }
    ctx->pc = 0x107644u;
    // 0x107644: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x107644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x107648: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x107648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x10764c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x10764Cu;
    {
        const bool branch_taken_0x10764c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10764Cu;
        // 0x107650: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10764c) {
            ctx->pc = 0x10760Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10760c;
        }
    }
    ctx->pc = 0x107654u;
    // 0x107654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x107658u;
}
