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

// Function: entry_0022fb5c
// Address: 0x22fb5c - 0x22fba4
void entry_0022fb5c_0x22fb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fb5c_0x22fb5c");
#endif

    ctx->pc = 0x22fb5cu;

    // 0x22fb5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fb60: 0xac230478  sw          $v1, 0x478($at)
    ctx->pc = 0x22fb60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x290478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290478u, _value); } while (0);
    // 0x22fb64: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fb68: 0x24630444  addiu       $v1, $v1, 0x444
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1092));
    // 0x22fb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb74: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fb78: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FB78u;
    {
        const bool branch_taken_0x22fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb78) {
            ctx->pc = 0x22FBA4u;
            return;
        }
    }
    ctx->pc = 0x22FB80u;
    // 0x22fb80: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fb84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fb88: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fb8c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fb94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb98: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fb9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FB9Cu;
    {
        const bool branch_taken_0x22fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb9c) {
            ctx->pc = 0x22FBA8u;
            return;
        }
    }
    ctx->pc = 0x22FBA4u;
}
