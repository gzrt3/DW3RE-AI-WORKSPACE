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

// Function: FUN_00124010
// Address: 0x124010 - 0x12405c
void FUN_00124010_0x124010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124010_0x124010");
#endif

    switch (ctx->pc) {
        case 0x124024u: goto label_124024;
        case 0x12403cu: goto label_12403c;
        default: break;
    }

    ctx->pc = 0x124010u;

    // 0x124010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12401c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x12401Cu;
    SET_GPR_U32(ctx, 31, 0x124024u);
    ctx->pc = 0x124020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12401Cu;
    // 0x124020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x12401Cu, 0x124024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124024u;
label_124024:
    // 0x124024: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x124024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x124028: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x124028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12402c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12402Cu;
    {
        const bool branch_taken_0x12402c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x124030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12402Cu;
        // 0x124030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12402c) {
            ctx->pc = 0x124044u;
            goto label_124044;
        }
    }
    ctx->pc = 0x124034u;
    // 0x124034: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x124034u;
    SET_GPR_U32(ctx, 31, 0x12403Cu);
    ctx->pc = 0x124038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124034u;
    // 0x124038: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x124034u, 0x12403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12403Cu;
label_12403c:
    // 0x12403c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12403Cu;
    {
        const bool branch_taken_0x12403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12403Cu;
        // 0x124040: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12403c) {
            ctx->pc = 0x12405Cu;
            return;
        }
    }
    ctx->pc = 0x124044u;
label_124044:
    // 0x124044: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x124044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x124048: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x124048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x12404c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12404cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x124050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124054: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x124054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x124058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12405cu;
}
