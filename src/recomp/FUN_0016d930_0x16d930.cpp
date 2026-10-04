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

// Function: FUN_0016d930
// Address: 0x16d930 - 0x16d9a4
void FUN_0016d930_0x16d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d930_0x16d930");
#endif

    ctx->pc = 0x16d930u;

    // 0x16d930: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D930u;
    {
        const bool branch_taken_0x16d930 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D930u;
        // 0x16d934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d930) {
            ctx->pc = 0x16D958u;
            goto label_16d958;
        }
    }
    ctx->pc = 0x16D938u;
    // 0x16d938: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16d938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x16d93c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D93Cu;
    {
        const bool branch_taken_0x16d93c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d93c) {
            ctx->pc = 0x16D954u;
            goto label_16d954;
        }
    }
    ctx->pc = 0x16D944u;
    // 0x16d944: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D944u;
    {
        const bool branch_taken_0x16d944 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D944u;
        // 0x16d948: 0x28a1003b  slti        $at, $a1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d944) {
            ctx->pc = 0x16D954u;
            goto label_16d954;
        }
    }
    ctx->pc = 0x16D94Cu;
    // 0x16d94c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D94Cu;
    {
        const bool branch_taken_0x16d94c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d94c) {
            ctx->pc = 0x16D960u;
            goto label_16d960;
        }
    }
    ctx->pc = 0x16D954u;
label_16d954:
    // 0x16d954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d958:
    // 0x16d958: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16D958u;
    {
        const bool branch_taken_0x16d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d958) {
            ctx->pc = 0x16D9A4u;
            return;
        }
    }
    ctx->pc = 0x16D960u;
label_16d960:
    // 0x16d960: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x16d964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D964u;
    {
        const bool branch_taken_0x16d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D964u;
        // 0x16d968: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d964) {
            ctx->pc = 0x16D98Cu;
            goto label_16d98c;
        }
    }
    ctx->pc = 0x16D96Cu;
    // 0x16d96c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d970: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16d974: 0x24421a30  addiu       $v0, $v0, 0x1A30
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x16d978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d97c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d980: 0x2442124e  addiu       $v0, $v0, 0x124E
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4686));
    // 0x16d984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16D9A4u;
            return;
        }
    }
    ctx->pc = 0x16D98Cu;
label_16d98c:
    // 0x16d98c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16d990: 0x244219d0  addiu       $v0, $v0, 0x19D0
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6608));
    // 0x16d994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d998: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d99c: 0x2442112e  addiu       $v0, $v0, 0x112E
    ctx->pc = 0x16d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4398));
    // 0x16d9a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x16d9a4u;
}
