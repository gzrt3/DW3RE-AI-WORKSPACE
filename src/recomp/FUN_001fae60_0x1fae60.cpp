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

// Function: FUN_001fae60
// Address: 0x1fae60 - 0x1faeac
void FUN_001fae60_0x1fae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fae60_0x1fae60");
#endif

    switch (ctx->pc) {
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae8cu: goto label_1fae8c;
        default: break;
    }

    ctx->pc = 0x1fae60u;

    // 0x1fae60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fae64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fae68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fae6c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x1FAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE74u);
    ctx->pc = 0x1FAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE6Cu;
    // 0x1fae70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x1FAE6Cu, 0x1FAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE74u;
label_1fae74:
    // 0x1fae74: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1fae74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1fae78: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1fae78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fae7c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAE7Cu;
    {
        const bool branch_taken_0x1fae7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE7Cu;
        // 0x1fae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae7c) {
            ctx->pc = 0x1FAE94u;
            goto label_1fae94;
        }
    }
    ctx->pc = 0x1FAE84u;
    // 0x1fae84: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1FAE84u;
    SET_GPR_U32(ctx, 31, 0x1FAE8Cu);
    ctx->pc = 0x1FAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE84u;
    // 0x1fae88: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FAE84u, 0x1FAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE8Cu;
label_1fae8c:
    // 0x1fae8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAE8Cu;
    {
        const bool branch_taken_0x1fae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE8Cu;
        // 0x1fae90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae8c) {
            ctx->pc = 0x1FAEACu;
            return;
        }
    }
    ctx->pc = 0x1FAE94u;
label_1fae94:
    // 0x1fae94: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1fae98: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1fae98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fae9c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1fae9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1faea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faea4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1faea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1faeacu;
}
