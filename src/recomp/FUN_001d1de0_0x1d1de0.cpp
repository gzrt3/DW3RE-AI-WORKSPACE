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

// Function: FUN_001d1de0
// Address: 0x1d1de0 - 0x1d1e9c
void FUN_001d1de0_0x1d1de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1de0_0x1d1de0");
#endif

    ctx->pc = 0x1d1de0u;

    // 0x1d1de0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1d1de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d1de4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1d1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1d1de8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d1dec: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1d1df0: 0x24634974  addiu       $v1, $v1, 0x4974
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18804));
    // 0x1d1df4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1d1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d1df8: 0x25294900  addiu       $t1, $t1, 0x4900
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18688));
    // 0x1d1dfc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1d1dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d1e00: 0x85250008  lh          $a1, 0x8($t1)
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d1e04: 0x8523000a  lh          $v1, 0xA($t1)
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1d1e08: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x1d1e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d1e0c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1d1e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d1e10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d1e14: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1d1e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1e18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1E18u;
    {
        const bool branch_taken_0x1d1e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E18u;
        // 0x1d1e1c: 0x30e70400  andi        $a3, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e18) {
            ctx->pc = 0x1D1E28u;
            goto label_1d1e28;
        }
    }
    ctx->pc = 0x1D1E20u;
    // 0x1d1e20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1E20u;
    {
        const bool branch_taken_0x1d1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E20u;
        // 0x1d1e24: 0x43100  sll         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e20) {
            ctx->pc = 0x1D1E30u;
            goto label_1d1e30;
        }
    }
    ctx->pc = 0x1D1E28u;
label_1d1e28:
    // 0x1d1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1e2c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d1e30:
    // 0x1d1e30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1d1e34: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1e38: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
    // 0x1d1e3c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d1e40: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d1e44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1e48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d1e4c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1E4Cu;
    {
        const bool branch_taken_0x1d1e4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E4Cu;
        // 0x1d1e50: 0x248604a0  addiu       $a2, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e4c) {
            ctx->pc = 0x1D1E88u;
            goto label_1d1e88;
        }
    }
    ctx->pc = 0x1D1E54u;
    // 0x1d1e54: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d1e58: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d1e5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e60: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1e64: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d1e68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e6c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1d1e70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d1e70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d1e74: 0x0  nop
    ctx->pc = 0x1d1e74u;
    // NOP
    // 0x1d1e78: 0x0  nop
    ctx->pc = 0x1d1e78u;
    // NOP
    // 0x1d1e7c: 0x1812  mflo        $v1
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d1e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1EB0u;
            return;
        }
    }
    ctx->pc = 0x1D1E88u;
label_1d1e88:
    // 0x1d1e88: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d1e8c: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d1e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d1e94: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1e98: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    ctx->pc = 0x1d1e9cu;
}
