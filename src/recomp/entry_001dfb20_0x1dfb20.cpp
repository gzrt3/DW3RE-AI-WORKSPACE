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

// Function: entry_001dfb20
// Address: 0x1dfb20 - 0x1dfb8c
void entry_001dfb20_0x1dfb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb20_0x1dfb20");
#endif

    ctx->pc = 0x1dfb20u;

    // 0x1dfb20: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1dfb24: 0x254d6c00  addiu       $t5, $t2, 0x6C00
    ctx->pc = 0x1dfb24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
    // 0x1dfb28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dfb2c: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x1dfb30: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1dfb34: 0x254c7900  addiu       $t4, $t2, 0x7900
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
    // 0x1dfb38: 0x185100  sll         $t2, $t8, 4
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x1dfb3c: 0xa9c021  addu        $t8, $a1, $t1
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1dfb40: 0x254b6c00  addiu       $t3, $t2, 0x6C00
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
    // 0x1dfb44: 0xa70d0090  sh          $t5, 0x90($t8)
    ctx->pc = 0x1dfb44u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 144), (uint16_t)GPR_U32(ctx, 13));
    // 0x1dfb48: 0x1950c0  sll         $t2, $t9, 3
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1dfb4c: 0xa70c0092  sh          $t4, 0x92($t8)
    ctx->pc = 0x1dfb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 146), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dfb50: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
    // 0x1dfb54: 0xa70b00a0  sh          $t3, 0xA0($t8)
    ctx->pc = 0x1dfb54u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x1dfb58: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
    // 0x1dfb5c: 0xa70a00a2  sh          $t2, 0xA2($t8)
    ctx->pc = 0x1dfb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 162), (uint16_t)GPR_U32(ctx, 10));
    // 0x1dfb60: 0x286a0006  slti        $t2, $v1, 0x6
    ctx->pc = 0x1dfb60u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dfb64: 0x1540ffc2  bnez        $t2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1DFB64u;
    {
        const bool branch_taken_0x1dfb64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB64u;
        // 0x1dfb68: 0xa3060083  sb          $a2, 0x83($t8) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 24), 131), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb64) {
            ctx->pc = 0x1DFA70u;
            return;
        }
    }
    ctx->pc = 0x1DFB6Cu;
    // 0x1dfb6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dfb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb80: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1dfb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dfb84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dfb88: 0x24190006  addiu       $t9, $zero, 0x6
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1dfb8cu;
}
