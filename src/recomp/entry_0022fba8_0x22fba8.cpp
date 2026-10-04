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

// Function: entry_0022fba8
// Address: 0x22fba8 - 0x22fbf0
void entry_0022fba8_0x22fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fba8_0x22fba8");
#endif

    ctx->pc = 0x22fba8u;

    // 0x22fba8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fbac: 0xac23047c  sw          $v1, 0x47C($at)
    ctx->pc = 0x22fbacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x29047Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29047Cu, _value); } while (0);
    // 0x22fbb0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fbb4: 0x24630448  addiu       $v1, $v1, 0x448
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1096));
    // 0x22fbb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fbbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fbc0: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fbc4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FBC4u;
    {
        const bool branch_taken_0x22fbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc4) {
            ctx->pc = 0x22FBF0u;
            return;
        }
    }
    ctx->pc = 0x22FBCCu;
    // 0x22fbcc: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fbd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fbd4: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fbd8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fbe4: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fbe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FBE8u;
    {
        const bool branch_taken_0x22fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE8u;
        // 0x22fbec: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbe8) {
            ctx->pc = 0x22FBF4u;
            return;
        }
    }
    ctx->pc = 0x22FBF0u;
}
