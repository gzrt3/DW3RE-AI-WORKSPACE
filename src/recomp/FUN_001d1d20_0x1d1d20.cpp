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

// Function: FUN_001d1d20
// Address: 0x1d1d20 - 0x1d1dd4
void FUN_001d1d20_0x1d1d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1d20_0x1d1d20");
#endif

    ctx->pc = 0x1d1d20u;

    // 0x1d1d20: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1d24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1d28: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d1d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1d30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1d34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1d1d38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d1d3c: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
    // 0x1d1d40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1d44: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d1d48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1D48u;
    {
        const bool branch_taken_0x1d1d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D48u;
        // 0x1d1d4c: 0x256204a0  addiu       $v0, $t3, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d48) {
            ctx->pc = 0x1D1D64u;
            goto label_1d1d64;
        }
    }
    ctx->pc = 0x1D1D50u;
    // 0x1d1d50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1d54: 0x24420204  addiu       $v0, $v0, 0x204
    ctx->pc = 0x1d1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x1d1d58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1D5Cu;
    {
        const bool branch_taken_0x1d1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D5Cu;
        // 0x1d1d60: 0x244a6c00  addiu       $t2, $v0, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d5c) {
            ctx->pc = 0x1D1D74u;
            goto label_1d1d74;
        }
    }
    ctx->pc = 0x1D1D64u;
label_1d1d64:
    // 0x1d1d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1d68: 0x244201e4  addiu       $v0, $v0, 0x1E4
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 484));
    // 0x1d1d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d1d70: 0x244a6c00  addiu       $t2, $v0, 0x6C00
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1d1d74:
    // 0x1d1d74: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1d1d78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d1d7c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1d1d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
    // 0x1d1d80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d1d84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d1d88: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1d1d8c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1d1d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d1da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d1da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1db0: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1d1db4: 0xa4aa0178  sh          $t2, 0x178($a1)
    ctx->pc = 0x1d1db4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 376), (uint16_t)GPR_U32(ctx, 10));
    // 0x1d1db8: 0xa4aa0148  sh          $t2, 0x148($a1)
    ctx->pc = 0x1d1db8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 10));
    // 0x1d1dbc: 0xa4aa0230  sh          $t2, 0x230($a1)
    ctx->pc = 0x1d1dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 560), (uint16_t)GPR_U32(ctx, 10));
    // 0x1d1dc0: 0xa4aa0200  sh          $t2, 0x200($a1)
    ctx->pc = 0x1d1dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 512), (uint16_t)GPR_U32(ctx, 10));
    // 0x1d1dc4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1d1dc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d1dcc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1D1DCCu;
    SET_GPR_U32(ctx, 31, 0x1D1DD4u);
    ctx->pc = 0x1D1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DCCu;
    // 0x1d1dd0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D1DCCu, 0x1D1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DD4u;
}
