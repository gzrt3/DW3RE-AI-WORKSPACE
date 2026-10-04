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

// Function: entry_00204198
// Address: 0x204198 - 0x20420c
void entry_00204198_0x204198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204198_0x204198");
#endif

    switch (ctx->pc) {
        case 0x2041dcu: goto label_2041dc;
        case 0x204204u: goto label_204204;
        default: break;
    }

    ctx->pc = 0x204198u;

    // 0x204198: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x204198u;
    {
        const bool branch_taken_0x204198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x28a30014  slti        $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204198) {
            ctx->pc = 0x20420Cu;
            return;
        }
    }
    ctx->pc = 0x2041A0u;
    // 0x2041a0: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x2041a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2041a4: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x20420Cu;
            return;
        }
    }
    ctx->pc = 0x2041ACu;
    // 0x2041ac: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2041b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2041b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2041b4: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x2041b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2041c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2041c8: 0x27828280  addiu       $v0, $gp, -0x7D80
    ctx->pc = 0x2041c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935168));
    // 0x2041cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041d4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x2041D4u;
    SET_GPR_U32(ctx, 31, 0x2041DCu);
    ctx->pc = 0x2041D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041D4u;
    // 0x2041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x2041D4u, 0x2041DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041DCu;
label_2041dc:
    // 0x2041dc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2041e0: 0x1223002d  beq         $s1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2041E0u;
    {
        const bool branch_taken_0x2041e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2041e0) {
            ctx->pc = 0x204298u;
            return;
        }
    }
    ctx->pc = 0x2041E8u;
    // 0x2041e8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2041ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2041f0: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x2041f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2041f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2041fc: 0xc08f28e  jal         func_23CA38
    ctx->pc = 0x2041FCu;
    SET_GPR_U32(ctx, 31, 0x204204u);
    ctx->pc = 0x204200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2041FCu;
    // 0x204200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CA38u, 0x2041FCu, 0x204204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204204u;
label_204204:
    // 0x204204: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x204204u;
    {
        const bool branch_taken_0x204204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204204) {
            ctx->pc = 0x204298u;
            return;
        }
    }
    ctx->pc = 0x20420Cu;
}
