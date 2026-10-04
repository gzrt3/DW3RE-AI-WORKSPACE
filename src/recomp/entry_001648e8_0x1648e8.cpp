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

// Function: entry_001648e8
// Address: 0x1648e8 - 0x164938
void entry_001648e8_0x1648e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648e8_0x1648e8");
#endif

    ctx->pc = 0x1648e8u;

    // 0x1648e8: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1648e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1648ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1648f0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1648F0u;
    {
        const bool branch_taken_0x1648f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1648F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648F0u;
        // 0x1648f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648f0) {
            ctx->pc = 0x164980u;
            return;
        }
    }
    ctx->pc = 0x1648F8u;
    // 0x1648f8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1648F8u;
    {
        const bool branch_taken_0x1648f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1648f8) {
            ctx->pc = 0x164974u;
            return;
        }
    }
    ctx->pc = 0x164900u;
    // 0x164900: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164904: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x164904u;
    {
        const bool branch_taken_0x164904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x164908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164904u;
        // 0x164908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164904) {
            ctx->pc = 0x164968u;
            return;
        }
    }
    ctx->pc = 0x16490Cu;
    // 0x16490c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16490c) {
            ctx->pc = 0x16495Cu;
            return;
        }
    }
    ctx->pc = 0x164914u;
    // 0x164914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164918: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164918u;
    {
        const bool branch_taken_0x164918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164918u;
        // 0x16491c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164918) {
            ctx->pc = 0x164950u;
            return;
        }
    }
    ctx->pc = 0x164920u;
    // 0x164920: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x164920u;
    {
        const bool branch_taken_0x164920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164920) {
            ctx->pc = 0x164944u;
            return;
        }
    }
    ctx->pc = 0x164928u;
    // 0x164928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164928u;
    {
        const bool branch_taken_0x164928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164928) {
            ctx->pc = 0x164938u;
            return;
        }
    }
    ctx->pc = 0x164930u;
    // 0x164930: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x164930u;
    {
        const bool branch_taken_0x164930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164930) {
            ctx->pc = 0x164988u;
            return;
        }
    }
    ctx->pc = 0x164938u;
}
