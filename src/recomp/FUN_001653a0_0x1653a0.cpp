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

// Function: FUN_001653a0
// Address: 0x1653a0 - 0x165434
void FUN_001653a0_0x1653a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001653a0_0x1653a0");
#endif

    switch (ctx->pc) {
        case 0x1653b8u: goto label_1653b8;
        default: break;
    }

    ctx->pc = 0x1653a0u;

    // 0x1653a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1653a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1653a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1653a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1653a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1653a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1653ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653b0: 0xc042090  jal         func_108240
    ctx->pc = 0x1653B0u;
    SET_GPR_U32(ctx, 31, 0x1653B8u);
    ctx->pc = 0x1653B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653B0u;
    // 0x1653b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x1653B0u, 0x1653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B8u;
label_1653b8:
    // 0x1653b8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1653B8u;
    {
        const bool branch_taken_0x1653b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653b8) {
            ctx->pc = 0x16542Cu;
            goto label_16542c;
        }
    }
    ctx->pc = 0x1653C0u;
    // 0x1653c0: 0x8f8386c0  lw          $v1, -0x7940($gp)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x1653c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1653C4u;
    {
        const bool branch_taken_0x1653c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653c4) {
            ctx->pc = 0x1653DCu;
            goto label_1653dc;
        }
    }
    ctx->pc = 0x1653CCu;
    // 0x1653cc: 0xaf8286c0  sw          $v0, -0x7940($gp)
    ctx->pc = 0x1653ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936256), GPR_U32(ctx, 2));
    // 0x1653d0: 0xaf8286bc  sw          $v0, -0x7944($gp)
    ctx->pc = 0x1653d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
    // 0x1653d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1653D4u;
    {
        const bool branch_taken_0x1653d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D4u;
        // 0x1653d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653d4) {
            ctx->pc = 0x165404u;
            goto label_165404;
        }
    }
    ctx->pc = 0x1653DCu;
label_1653dc:
    // 0x1653dc: 0x8f8486bc  lw          $a0, -0x7944($gp)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    // 0x1653e0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x1653E8u;
    // 0x1653e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1653ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1653f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1653F0u;
    {
        const bool branch_taken_0x1653f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f0) {
            ctx->pc = 0x165404u;
            goto label_165404;
        }
    }
    ctx->pc = 0x1653F8u;
label_1653f8:
    // 0x1653f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1653f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1653fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x165400: 0xaf8286bc  sw          $v0, -0x7944($gp)
    ctx->pc = 0x165400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
label_165404:
    // 0x165404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165408: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x165408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x16540c: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x16540cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x165410: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x165410u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x165414: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x165414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x165418: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x165418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x16541c: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x16541cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
    // 0x165420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165424u;
    {
        const bool branch_taken_0x165424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0xa38386a0  sb          $v1, -0x7960($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165424) {
            ctx->pc = 0x165430u;
            goto label_165430;
        }
    }
    ctx->pc = 0x16542Cu;
label_16542c:
    // 0x16542c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16542cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165430:
    // 0x165430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x165434u;
}
